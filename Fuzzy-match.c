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
        int len = strlen(buffer);
        int j = 0;
        for (int i = 0; i < len; i++) {
            if (buffer[i] == word[j]) {
                j++;
                if (j == strlen(word)) {
                    printf("Line contains the word '%s': %s", word, buffer);
                    break;
                }
            }
        }
    }
    fclose(fp);
    return 0;
}
