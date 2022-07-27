#include "string"
#include <fstream>
#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "find_best_fit.cpp"
using namespace std; 

const string input_file = "22Gel_Runs2.txt";


void extract_vales(string str, int &x, int &y, int &run);
void rmSpaces(string &str);

void Take_all_runs(){
    ifstream file(input_file); //Change this if input file is named diffrently
    string str;
    string file_loc;
    int current_run;
    int x_coor(100);
    int y_coord(100);
    float fit(0);
    ofstream outfile ("norm_output_"+input_file); //output file name

    while (getline(file,str)){
        rmSpaces(str);
        //cout<<x_coor << " " << y_coord<<endl;
        extract_vales(str, x_coor, y_coord, current_run);
        if( x_coor != 100 && y_coord != 100 && current_run > 1000){
            //execute code the code for that run

            //create the file
            system(("./get_file.csh " + to_string(current_run)).c_str() );

            //find the fit
            fit = find_best_fit(current_run);

            //add this to file
            outfile << x_coor << " " << y_coord << " " << fit<< endl;

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
void extract_vales(string str, int &x, int &y, int &run){
     if(str.find("Run") < 500){
            run = stoi(str.substr(str.find("Run") + 3));
        }
        else{ 
            run = 0;
        }

        if(str.find("at(") < 500){
            x = stoi(str.substr(str.find("at") + 3));
            y = stoi(str.substr(str.find(",") + 1));
        }
        else{
            x = 100;
            y = 100;
        }


}
