typedef enum ErrorCode {
    ERROR_NONE      = 0x00000000,
    ERROR_ARG       = 0x00000001,
    ERROR_UNDEFINED = 0xFFFFFFFF
} ErrorCode;

ErrorCode greeting(const char* period_name, const char* person_name);

ErrorCode night_greeting(const char* person_name)
{
    ErrorCode result = greeting("night", person_name);
    return result;
}
