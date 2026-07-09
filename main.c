#include "morning.h"
#include "night.h"
#include <stdio.h>

extern char message[256];

int main(void)
{
    ErrorCode result = ERROR_NONE;

    result |= morning_greeting("Bob");

    if (result == ERROR_NONE) {
        printf("%s", message);
    }

    result |= night_greeting("Alice");

    if (result == ERROR_NONE) {
        printf("%s", message);
    }

    return result;
}
