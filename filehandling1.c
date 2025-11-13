#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char ch;
    int lines = 0, words = 0, chars = 0, spaces = 0;
    int inWord = 0;

    fp = fopen("data.txt", "r");  // open existing file
    if (fp == NULL) {
        printf("Error! File not found.\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        chars++;
        if (ch == ' ' || ch == '\t')
            spaces++;
        if (ch == '\n')
            lines++;

        if (isspace(ch))
            inWord = 0;
        else if (inWord == 0) {
            inWord = 1;
            words++;
        }
    }

    fclose(fp);

    printf("Characters: %d\nWords: %d\nLines: %d\nSpaces: %d\n", chars, words, lines, spaces);
    return 0;
}
