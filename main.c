#include <stdio.h>

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

ErrorCode greeting(const char* name)
{
    if (name == NULL) {
        return ERROR_ARG;  // 引数エラー
    }

    printf("Hello, %s!\n", name);

    return ERROR_NONE;  // エラーなし（成功）
}

