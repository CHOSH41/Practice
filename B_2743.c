#include <stdio.h>
#include <string.h>

int main(void) {
    char word[100];
    int length = 0;

    scanf("%s", word);

    length = strlen(word);
    printf("%d", length);

    return 0;
}