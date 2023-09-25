#include <stdio.h>
#include <stdlib.h>
#include <getopt.h>

int main(int argc, char *argv[]) {
    int opt;
    int option_index;
    char *option_value;

    static struct option long_options[] = {
        {"output", required_argument, NULL, 'o'},
        {"count", required_argument, NULL, 'c'},
        {NULL, 0, NULL, 0}
    };

    while ((opt = getopt_long(argc, argv, "o:c:", long_options, &option_index)) != -1) {
        switch (opt) {
            case 'o':
                option_value = optarg;
                printf("옵션 'o'가 주어졌습니다. 값: %s\n", option_value);
                break;
            case 'c':
                option_value = optarg;
                printf("옵션 'c'가 주어졌습니다. 값: %s\n", option_value);
                break;
            case '?':
                printf("알 수 없는 옵션\n");
                break;
            default:
                printf("옵션 파싱 중 오류가 발생했습니다.\n");
                return 1;
        }
    }

    return 0;
}
