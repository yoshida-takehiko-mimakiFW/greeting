typedef enum ErrorCode {
    ERROR_NONE      = 0x00000000,
    ERROR_ARG       = 0x00000001,
    ERROR_UNDEFINED = 0xFFFFFFFF
} ErrorCode;

ErrorCode morning_greeting(const char* person_name);
ErrorCode night_greeting(const char* person_name);

int main(void)
{
    ErrorCode result = ERROR_NONE;

    result |= morning_greeting("Bob");
    result |= night_greeting("Alice");

    return result;
}
