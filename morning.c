#include "morning.h"

ErrorCode morning_greeting(const char* person_name)
{
    ErrorCode result = greeting("morning", person_name);
    return result;
}
