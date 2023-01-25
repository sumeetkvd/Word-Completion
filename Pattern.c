#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp;
    char buffer[100];
    char word[100];
    printf("Enter the word to match: ");
    scanf("%s", word);
    fp = fopen("main.txt", "r");
    while (fgets(buffer, 100, fp) != NULL) {
        if (strstr(buffer, word) != NULL) {
            printf("Line contains the word '%s': %s", word, buffer);
        }
    }
    fclose(fp);
    return 0;
}
