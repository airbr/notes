#include<iostream>
#include<stdlib.h>
#include<fstream>
#include<time.h>
#include<vector>
using namespace std;
int main()
{
    string line;
    vector<string> lines;
    
    srand(time(0));
    
    //input file stream
    ifstream file("../edited/Law notes.txt");
    
    //count number of total lines in the file and store the lines in the string vector
    int total_lines=0;
    while(getline(file,line))
    {
       total_lines++; 
    lines.push_back(line);  
  }
   
    //generate a random number between 0 and count of total lines
    int random_number=rand()%total_lines;
    
    
    
    //fetch the line where line index (starting from 0) matches with the random number
    
    cout<<lines[random_number];
  
    
    return 0;
}