#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* decimalToBinary(int decimal_value) {
    char *binary_string = malloc(17 * sizeof(char));
    binary_string[16] = '\0';  // 문자열 끝에 널 문자 추가

    for (int i = 0; i < 16; i++) {
        binary_string[15 - i] = (decimal_value & (1 << i)) ? '1' : '0';
    }

    return binary_string;
}

int main() {
    char input[50];
    printf("16비트 데이터를 입력하세요: ");
    fgets(input, sizeof(input), stdin);

    // 개행 문자 제거
    if (input[strlen(input) - 1] == '\n') {
        input[strlen(input) - 1] = '\0';
    }

    // 입력된 데이터를 토큰으로 분리하여 처리
    char *token = strtok(input, " :");
    while (token != NULL) {
        int decimal_value = strtol(token, NULL, 2);  // 2진수를 10진수로 변환
        char *binary_string = decimalToBinary(decimal_value);
        printf("%s\n", binary_string);
        free(binary_string);

        token = strtok(NULL, " :");
    }

    return 0;
}
