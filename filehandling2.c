#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp;
    char line[200];

    fp = fopen("lines.txt", "w"); // open file for writing
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter text (type END to stop):\n");
    while (1) {
        gets(line);  // read one line
        if (strcmp(line, "END") == 0)
            break;
        fputs(line, fp);
        fputs("\n", fp);  // add newline after each line
    }

    fclose(fp);
    printf("Data written successfully to lines.txt\n");
    return 0;
}
