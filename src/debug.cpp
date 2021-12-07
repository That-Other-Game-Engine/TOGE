#include <debug.hpp>

/**
 * @file debug.cpp
 * @author Sable (sable262021@gmail.com)
 * @brief Holds any functions needed for debugging whether it be
 * logging, errors, warning, trace, info, or fatal errors to crash
 * the program this file holds them
 * @version 0.1
 * @date 2021-12-02
 *
 * @copyright Copyright (c) 2021
 *
 *
 * TODO: Make sure all of these get wrapped in a polymoprhic function
 * when the wrapper is made
 */

#include <iostream>
#include <stdexcept>
#include <cstring>
#include <chrono>
#include <string.h>

#include <memory>

// extern "C" inline const char * getTime()
// {
//     return std::chrono::system_clock::now();
// }

char* DebugLog(char* msg)
{
    return msg;
}

char * DebugWarn(char * msg)
{
    // "[WARN " + getTime() + "] " + msg;
    // char *ret = strcat("[WARN ", getTime());
    // ret = strcat(ret, "] ");
    // ret = strcat(ret, msg);
    // return ret;
    return msg;
}

char * DebugError(char *msg)
{
    // "[ERROR " + getTime() + "] " + msg;
    // char *ret = strcat("[ERROR ", getTime());
    // ret = strcat(ret, "] ");
    // ret = strcat(ret, msg);
    // return ret;
    return msg;
}

char* DebugFatalError(char *msg)
{
    return msg;
}
