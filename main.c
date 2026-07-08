#include "morning.h"
#include "night.h"

int main(void)
{
    ErrorCode result = ERROR_NONE;

    result |= morning_greeting("Bob");
    result |= night_greeting("Alice");

    return result;
}
