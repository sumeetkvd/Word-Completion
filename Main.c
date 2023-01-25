#include <stdio.h>

int main() {
    FILE *fp;
    fp = fopen("main.txt", "w");
    fprintf(fp, "This is a string.\nAnother line with the string.\nJust a simple line.");
    fclose(fp);
    return 0;
}
