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


const char* DebugLog(const char* msg)
{
    return msg;
}

const char * DebugWarn(const char * msg)
{
    return msg;
}

const char * DebugError(const char *msg)
{
    return msg;
}

const char* DebugFatalError(const char *msg)
{
    return msg;
}
