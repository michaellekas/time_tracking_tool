#ifndef POMMYTIME_H
#define POMMYTIME_H
#include <string>
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

std::string getCurrentDateTime();
std::string zeroPadNumber(int, int);
std::string formatTime(int, int); // prototype

/*
Hierarchy of pomodoro objects
project - contains tasks
task - thing you are doing; event, date, time; may be repeated many times to accumulate hours on the task
event - a time you did a task; duration, description
Usage: 
- Create event on command line with an associated task and project
- If task doesn't exist, create in database
- If project doesn't exist, create in database
- If existing, log the event to the given project and task
- Increment total time of task and project
- Update last time of task and project
*/

class project {
    int total_time; // minutes accumulated
    int last_time; // minutes on most recent event
    string name;
  public:
    project(string);
};

class task {
    int total_time; // minutes accumulated
    int last_time; // minutes on most recent event
    string name;
    string project_name; // 
  public:
    task(string, string);
};

// class event
// {
//   public:
//     int duration; // minutes 
//     string description; // what you did
//     string task_name;
//     string project_name;
//     event (int, string, string, string); // constructor
// };

class event
{
    public:
        int duration; // minutes 
        string description; // what you did
        string task_name;
        string project_name;
        event(int, char **);
};

#endif