#include "greeting.h"

ErrorCode night_greeting(const char* person_name)
{
    ErrorCode result = greeting("night", person_name);
    return result;
}
