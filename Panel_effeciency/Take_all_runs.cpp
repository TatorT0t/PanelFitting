#include "string"
#include <fstream>
#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "find_best_fit.cpp"
using namespace std; 

const string input_file = "PMT22_Position_and_run_info.txt"; //Change this to the input file name, the output will be this output_filename.txt


void extract_vales(string str, int &pos, int &run);
void rmSpaces(string &str);

void Take_all_runs(){
    ifstream file(input_file); //Change this if input file is named diffrently
    string str;
    string file_loc;
    int current_run;
    int pos(100);
    float fit(0);
    ofstream outfile ("output_"+input_file); //output file name

    while (getline(file,str)){
        rmSpaces(str);
        //cout<<x_coor << " " << y_coord<<endl;
        extract_vales(str, pos, current_run);
        if(pos != 100 && current_run > 1000){
            //execute code the code for that run

            //create the file
            system(("./get_file.csh " + to_string(current_run)).c_str() );

            //find the fit
            fit = find_best_fit(current_run);

            //add this to file
            outfile << pos << " " << fit<< endl;

            //delete file
            system(("rm -f Run" + to_string(current_run) + ".root").c_str());
        }
    }
    outfile.close();
    return;
}

void rmSpaces(string &str){
    str.erase(remove(str.begin(), str.end(), ' '), str.end());
}
void extract_vales(string str, int &pos, int &run){
     if(str.find("Run") < 500){
            run = stoi(str.substr(str.find("Run") + 3));
        }
        else{ 
            run = 0;
        }

        if(str.find("Pos") < 500){
            pos = stoi(str.substr(str.find("Pos") + 3));
        }
        else{
            pos = 100;
        }


}
