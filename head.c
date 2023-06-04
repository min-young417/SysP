#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int opt;
    int verbose = 0;
    int quiet = 0;

    int num_lines = 10;
    const char *file_name;
    FILE *file;
    char line[256];
    int line_count = 0;

    	
    while ((opt = getopt(argc, argv, "vqn:")) != -1) {
        switch (opt) {
            case 'v':
                verbose = 1;
                break;
	    case 'q':
		quiet = 1;
		break;
	    case 'n':
		num_lines = atoi(optarg);
		break;
            default:
                fprintf(stderr, "사용법: %s [옵션] [파일]\n", argv[0]);
                return 1;
        }
    }

    if (optind >= argc) {
        fprintf(stderr, "사용법: %s [옵션] [파일]\n", argv[0]);
	return 1;
    }

    for (int i = optind; i < argc; i++) {
        const char *file_name = argv[i];

        file = fopen(file_name, "r");
        if (file == NULL) {
            perror("fopen");
            continue;
        }

        if ((verbose || argc-optind >= 2) && !quiet) {
            printf("==> %s <==\n", file_name);
        }

        line_count = 0;
        while (fgets(line, sizeof(line), file) != NULL && line_count < num_lines) {
            printf("%s", line);
            line_count++;
        }

	if (!(i == argc-1) && !quiet){
            printf("\n");
        }

        fclose(file);
    }

    return 0;
}
