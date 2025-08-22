#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if(isupper(ch))
        ch = tolower(ch);

    printf("Converted character: %c\n", ch);

    return 0;
}
