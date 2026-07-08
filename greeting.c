#include <stdio.h>

typedef enum ErrorCode {
    ERROR_NONE      = 0x00000000,
    ERROR_ARG       = 0x00000001,
    ERROR_UNDEFINED = 0xFFFFFFFF
} ErrorCode;

ErrorCode greeting(const char* period_name,const char* person_name)
{
    if (period_name == NULL) {
        return ERROR_ARG;   // 引数エラー
    }

    if (person_name == NULL) {
        return ERROR_ARG;   // 引数エラー
    }

    printf("Good %s, %s!\n", period_name, person_name);

    return ERROR_NONE;      // エラーなし（成功）
}
