#include <stdio.h>

int main() {
    FILE *fp;
    char line[200];

    fp = fopen("lines.txt", "r");  // open file for reading
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("File content:\n");
    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);  // print each line as read
    }

    fclose(fp);
    return 0;
}
