#include "string"
#include <fstream>
#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std; 

void Create_log(){
    ofstream outfile ("log_25Gel.txt");
    int start_y = 8;
    int start_run = 1818;
    string output1 = "PMT 22 (gel) - PMT 25 (no gel) - PMT 2 - Run ";
    string output2 = " - Source at (";
    string output3 = ") - 1000V - Trigger 15mV.\n";

    for(int y = start_y; y >= 0; y--){
        for(int x = -7; x<= 7; x++){
            outfile << output1 << start_run << output2 << x << ", " << y << output3;
            start_run++;
        }
    }

    start_y = 9;
    for(int x = -7; x<= 7; x++){
        outfile << output1 << start_run << output2 << x << ", " << start_y << output3;
        start_run++;
    }
}