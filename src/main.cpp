// #include <iostream>
// #include <string>
// #include <unistd.h>
#include <stdio.h>
#include <sstream>
#include <stdlib.h>
#include <algorithm>
// #include <mysql.h>
// #include "../include/blah.h"
#include "../include/pommyTime.h"
using namespace std;

/* 
- Install needs to point to a database file; hardcoded for debugging: 
/Users/mike_lekas/google_drive/personal_projects/time_tracking_tool/tests
*/



int main(int argc, char *argv[])
{
    // Parse input
    // string task_name;
    // string project_name;
    // int duration;
    // for(int i = 1; i < argc - 1; i++){
    //     if(strcmp(argv[i], "-task") == 0)
    //     {
    //         task_name = argv[i+1];
    //         cout<< "i task: " << i << endl;
    //         i++;
    //         cout<< "i task: " << i << endl;
    //     }
    //     else if(strcmp(argv[i], "-project") == 0)
    //     {
    //         project_name = argv[i+1];
    //         cout<< "i project: " << i << endl;
    //         i++;
    //         cout<< "i project: " << i << endl;
    //     }
    //     else if(strcmp(argv[i], "-duration") == 0)
    //     {
    //         duration = atoi(argv[i+1]);
    //         cout<< "i duration: " << i << endl;
    //         i++;
    //         cout<< "i duration: " << i << endl;
    //     }
    // }


    // if missing task, project, duration... ask if reuse last
    // if first ever, throw error

    // int minutes;
    // int secondsTotal;
    // int updateTimeMicroseconds = 1e6*0.1;
    // string currentTime;
    // cout<< "Enter total minutes for the counter"<<endl;
    // cin >> minutes;
    // secondsTotal = minutes * 60;
    // while(secondsTotal-- >= 1){ // decrement secondsTotal
    //     int secondsCurrent = secondsTotal % 60; // seconds to print on update are remainder 
    //     int minCurrent = secondsTotal / 60; // minutes to print are quotient
    //     currentTime = formatTime(minCurrent, secondsCurrent); // formatted string of time
    //     cout<< "\e[A"<<currentTime<<" : " + getCurrentDateTime(); // overwrites line after printing
    //     usleep(updateTimeMicroseconds);
    // }
    // cout<<"TAKE A BREAK!\n";

    // Init event obj on startup, parse command line args directly into obj
    event event1(argc, argv);


    // cout<< "task_name: " << task_name << endl; //
    // cout<< "project_name: " << project_name << endl; //
    // cout<< "duration: " << duration << endl; //

    // event event1(25, "description blah", "task blah", "project blah");
    // for (size_t i = 0; i < count; i++)
    // {
    //     /* code */
    // }
    
    // cout << "event duration: " << event1.duration << endl;
    // cout << "event description: " << event1.description << endl;

}


