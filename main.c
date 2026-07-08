typedef enum ErrorCode {
    ERROR_NONE      = 0x00000000,
    ERROR_ARG       = 0x00000001,
    ERROR_UNDEFINED = 0xFFFFFFFF
} ErrorCode;

ErrorCode greeting(const char* name);

int main(void)
{
    ErrorCode result = greeting("Bob");

    return result;
}
