#pragma once

#include <iostream>

#ifdef __cplusplus
extern "C"
{
#endif

#if defined _WIN32 || defined __CYGWIN__
#ifdef BUILDING_TOGE
#define TOGE_SHARED __declspec(dllexport)
#else
#define TOGE_SHARED __declspec(dllimport)
#endif
#else
#ifdef BUILDING_TOGE
#define TOGE_SHARED __attribute__((visibility("default")))
#else
#define TOGE_SHARED
#endif
#endif

  /**
   * @brief The function DebugLog is the user accessible function for
   * outputting a debug message to the console
   *
   * @param msg the message that should be logged
   * @return std::string
   */
  TOGE_SHARED char* DebugLog(char* msg);

  // the below functions are not exposed by default however
  // can be exposed with certain settings(will be configured in the .NET)
  // wrapper

  /**
   * @brief A warning that is normally not user accessible but can
   * be exposed with certain settings, will log a warning
   * instead of an info or error
   *
   * @param msg the message to be logged
   * @return std::string
   */
   TOGE_SHARED char * DebugWarn(char * msg);

  /**
   * @brief DebugError is what will be run when there is an error
   * normally not user accessible but may be exposed with certain
   * settings
   *
   * @param msg the message to be thrown with the error
   * @return std::string
   */
   TOGE_SHARED char * DebugError(char * msg);

  /**
   * @brief A non-user accessible function that will error
   * with a message and exit the application, this is a fatal
   * error that cannot be recovered from
   *
   * @param msg the message that will be thrown
   */
  TOGE_SHARED char* DebugFatalError(char * msg);

#ifdef __cplusplus
}
#endif
