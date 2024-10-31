#include <iostream>
#include <Windows.h>
using namespace std;

#ifndef LOGGER_H
#define LOGGER_H

enum Colors
{
    GREEN = 10,
    BLUE = 11,
    RED = 12,
    YELLOW = 14
};

struct Logger
{
    static bool is_print_logs;
    static const unsigned short _default = 7;

    static void log(string message, Colors color = GREEN)
    {
        if (is_print_logs)
        {
            HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
            SetConsoleTextAttribute(hConsole, color);
            cout << message << endl;
            SetConsoleTextAttribute(hConsole, _default);
        }
    }
};

bool Logger::is_print_logs = true;

#endif 
