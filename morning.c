typedef enum ErrorCode {
    ERROR_NONE      = 0x00000000,
    ERROR_ARG       = 0x00000001,
    ERROR_UNDEFINED = 0xFFFFFFFF
} ErrorCode;

ErrorCode greeting(const char* period_name, const char* person_name);

ErrorCode morning_greeting(const char* person_name)
{
    ErrorCode result = greeting("morning", person_name);
    return result;
}
