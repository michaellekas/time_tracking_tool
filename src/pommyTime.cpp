#include "../include/pommyTime.h"
#include <algorithm>
// #include <unistd.h>
// #include <getopt.h>
#include <string>

string getCurrentDateTime()
{
    time_t tt;
    struct tm *st;

    time(&tt);
    st = localtime(&tt);
    return asctime(st);
}

string zeroPadNumber(int num, int digits)
{
	stringstream ss;
	
	// the number is converted to string with the help of stringstream
	ss << num; 
	string ret;
	ss >> ret;
	
	// Append zero chars
	int str_length = ret.length();
	for (int i = 0; i < digits - str_length; i++)
		ret = "0" + ret;
	return ret;
}

string formatTime(int min, int sec)
{
	string minPad = zeroPadNumber(min, 2);
	string secPad = zeroPadNumber(sec, 2);
	string currentTime = minPad + ":" + secPad;
	return currentTime;
}

project::project(string name)
{
    int total_time = 0; // minutes accumulated
    int last_time = 0; // minutes on most recent event
	name = name;
}

task::task(string name, string proj)
{
    int last_time = 0; // minutes on most recent event
	int total_time = 0;
    project_name = proj; // 
	name = name;
}

// event::event(int dur, string desc, string task, string proj)
// {
// 	duration = dur;
// 	description = desc;
// 	project_name = proj;
// 	task_name = task;
// }

event::event(int argc, char **argv)
{
	int duration; // minutes 
	char description; // what you did

	// // string task_name;
	// // string project_name;
	// // string out = begin[1];
	// // cout<< "task: " << out << endl;

	// // char out = getopt(argc, argv, "task");
	// // cout<< "out: " << out << endl;
	// int out;
	// char *cvalue = NULL;
	// while((out = getopt(argc, argv, "p:t:")) != -1)
	// {
	// 	// char out = getopt_long(argc, argv, "-task");
	// 	// cout<< "task: " << out << endl;
	// 	switch(out)
	// 	{
	// 		case 'p':
	// 			project_name = *optarg;
	// 		case 't':
	// 			task_name = *optarg;
	// 		// case 'd':
	// 		// 	duration = atoi(optarg);
	// 		default:
	// 			break;

	// 	}
	// }

	std::string task_name(1, *argv[2]);
	cout<< "task_name: " << task_name << endl;
	cout<< "project_name: " << project_name << endl;
	// printf("task_name: %s, project_name: %s\n", task_name, project_name);
	// printf ("project_name = %s, task_name = %s, duration = %s\n", project_name, task_name, duration);
	
	// char **itr = std::find(begin, end, "-task");
	// task_name = *itr;
	// cout<< "task: " << task_name << endl;
    // if (itr != end && ++itr != end)
    // {
    //     task_name = *itr;
	// 	cout<< "task: " << task_name << endl;
    // }

}

