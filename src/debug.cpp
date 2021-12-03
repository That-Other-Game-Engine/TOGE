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
#include <ctime>
#include <stdexcept>
#include <cstring>

extern "C" inline std::string getTime()
{
    time_t now = std::time(0);
    return std::strtok(std::ctime(&now), "\n");
}

std::string DebugLog(std::string msg)
{
    return "[LOG " + getTime() + "] " + msg;
}

std::string DebugWarn(std::string msg)
{
    return "[WARN " + getTime() + "] " + msg;
}

std::string DebugError(std::string msg)
{
    return "[ERROR " + getTime() + "] " + msg;
}

void DebugFatalError(std::string msg)
{
    throw std::runtime_error(getTime() + msg);
}
