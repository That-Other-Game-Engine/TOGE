#include <debug.hpp>

int main(void)
{
    printf("Testing DebugLog\n");
    const char * logMsg = "test";
    printf("%s\n", DebugLog(logMsg));
    return 0;
}
