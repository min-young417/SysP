#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
    int opt;
    char *option_value;

    while ((opt = getopt(argc, argv, "o:a:")) != -1) {
        switch (opt) {
            case 'o':
                option_value = optarg;
                printf("옵션 'o'가 주어졌습니다. 값: %s\n", option_value);
                break;
            case 'a':
                option_value = optarg;
                printf("옵션 'a'가 주어졌습니다. 값: %s\n", option_value);
                break;
            default:
                printf("알 수 없는 옵션: %c\n", opt);
                return 1;
        }
    }

    for (int i = optind; i < argc; i++) {
        printf("인수: %s\n", argv[i]);
    }

    return 0;
}
