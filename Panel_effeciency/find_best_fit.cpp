//Fit_two_hist takes in run and outputs best scale relative to position (0,5)

//Change: line 12

#include <iostream>
#include "TFile.h"
#include "TTree.h"
#include "TGraph.h"
#include "string"
#include "TGraphErrors.h"
using namespace std;

//creating constants
const TString default_run = "Run2308.root"; //CHANGE THIS: this is pos. 30!!!!!!
const float default_cut_min = 15000;
const TString string_default_cut_min = "15000";
const float default_cut_max = 40000;
const TString string_default_cut_max = "40000";
const int nbins = 190;


double scaled_area(TString test_df, float scale){
    //Subtracts two areas
    float cut_min = default_cut_min/scale;
    float cut_max = default_cut_max/scale;
    
    //Get scalars into desired format
    TString string_scale;
    string_scale.Form("%f",scale);
    TString cut_scale_min;
    cut_scale_min.Form("%f",cut_min);
    TString cut_scale_max;
    cut_scale_max.Form("%f",cut_max);

    
    //Crate histogram
    TFile * f0 = TFile::Open(default_run);  //do not edit this one: this is default
    TFile * f1 = TFile::Open("Run"+test_df+".root");
    TTree * pos05= (TTree *) f0->Get("Events");
    TTree * pos64= (TTree *) f1->Get("Events");
    

    pos64->Draw("area_2984_2*"+string_scale+">>pos64Hist(300,0,200000)",
                "area_2984_2>"+cut_scale_min +" && area_2984_2<"+cut_scale_max,
                "histnorm");
    pos05->Draw("area_2984_2>>pos05Hist(300,0,200000)",
                "area_2984_2>"+string_default_cut_min+" && area_2984_2<"+string_default_cut_max+"",
                "histsamenorm");

    TH1F * histMiddle = (TH1F *)  gDirectory->Get("pos05Hist");
    TH1F * histEdge = (TH1F *)  gDirectory->Get("pos64Hist");

    //cout<<histMiddle->GetEntries()<< " "<< histEdge->GetEntries()<<endl;
    histEdge->SetEntries(histMiddle->GetEntries());

    //subtract the two graphs
    TH1F *histDifference = (TH1F *) histMiddle->Clone();
    histDifference->SetName("histDifference");
    histDifference->Add(histEdge,-1);
    //histDifference->Draw();   //this is for debugging

    //find the area with brute force to spite Isaac Newton
    double totaldif = 0.0;
    int nbins = histDifference->GetXaxis()->GetNbins();
    for (int i = 0; i < nbins; i++){
	    double dif = histDifference->GetBinContent(i); // get the y value for bin i
	    double absdif = TMath::Abs(dif); // absolute value to get rid of negative signs
	    totaldif = totaldif + absdif; // add to total area
      }

    //cout << "Area under histDifference: " << totaldif << " at scale: " << scale <<endl; 
    

    //Delete pointers:comment all this out if you want a graph
    /*
    delete f0;
    delete f1;
    delete pos64;
    delete pos05;
    delete histMiddle;
    delete histEdge;
    delete histDifference;*/
    
    

    //return area difference bettween the two graphs
    f0->Close();
    delete f0;
    f1->Close();
    delete f1;
    //pos05->Close();
    //delete pos05;
    //pos64->Close();
    //delete pos64;
    //histMiddle->Closs();
    //delete histMiddle;
    //histEdge->Close();
    //delete histEdge;
    //histDifference->Close();
    //delete histDifference;

    return totaldif;
}

void print_scaled_graphs(TString test_df, float scale){
    //Subtracts two areas
    float cut_min = default_cut_min/scale;
    float cut_max = default_cut_max/scale;
    
    //Get scalars into desired format
    TString string_scale;
    string_scale.Form("%f",scale);
    TString cut_scale_min;
    cut_scale_min.Form("%f",cut_min);
    TString cut_scale_max;
    cut_scale_max.Form("%f",cut_max);

    
    //Crate histogram
    TFile * f0 = TFile::Open(default_run);  //do not edit this one: this is default
    TFile * f1 = TFile::Open("Run"+test_df+".root");
    TTree * pos05= (TTree *) f0->Get("Events");
    TTree * pos64= (TTree *) f1->Get("Events");
    

    pos64->Draw("area_2984_2*"+string_scale+">>pos64Hist(120,0,200000)",
                "",
                "histnorm");
    pos05->Draw("area_2984_2>>pos05Hist(120,0,200000)",
                "",
                "histsamenorm");

    //f0->Close();
    //f1->Close();
    return;

}

float find_best_fit(const int run){
    //create a Canvas: nessasay to have graph
    TCanvas *c1 = new TCanvas("c1", "c1",18,41,700,500);
    c1->Range(-63125,-10472.57,318125,94253.12);
    c1->SetFillColor(0);
    c1->SetBorderMode(0);
    c1->SetBorderSize(2);
    c1->SetFrameBorderMode(0);
    c1->SetFrameBorderMode(0);
    gStyle->SetOptStat(1);

    //set Run: Commented out dout to run.csh implementation
    /*
    TString my_run;
    cout<<"Input the run number (ex. 1293) and press enter: \n";
    cin >> my_run;
    */


    float my_scale(.2);
    double min_area(scaled_area(to_string(run), my_scale));
    float opt_scale(.2);
    double x_vals[90] = {0};
    double y_vals[90] = {0};
    double y_errs[90] = {0};
    int i = 0;
    double current_area(0);
     
    while (my_scale<5){
        current_area =  scaled_area(to_string(run), my_scale);
        if(current_area < min_area){
            min_area= current_area;
            opt_scale = my_scale;
        }
        i = int((my_scale-0.5)/.05);
        x_vals[i] = my_scale;
        y_vals[i] = current_area;
        my_scale += .05;
    }
    
    //print_scaled_graphs(to_string(run), opt_scale);

    //current_area =  scaled_area(my_run, opt_scale);
    /*
    TGraphErrors graph(90,x_vals,y_vals,nullptr,y_errs);
    //graph.SetTitle("Measurement XYZ;lenght [cm];Arb.Units");

    // Make the plot estetically better
    graph.SetMarkerStyle();
    graph.SetMarkerColor(kBlue);
    graph.SetLineColor(kBlue);
    graph.Draw("APE");*/

    
    cout<< "The best scale is:" << opt_scale <<endl;
    return opt_scale;
}
