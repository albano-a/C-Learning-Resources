#include <stdio.h>

int main()
{
    char ch;
    int vowels = 0;

    printf("Enter a sentence: ");
    while ((ch = getchar()) != '\n'){
        switch (ch) {
            case 'a': case 'A':
                vowels++;
                break;
            case 'e': case 'E':
                vowels++;
                break;
            case 'i': case 'I':
                vowels++;
                break;
            case 'o': case 'O':
                vowels++;
                break;
            case 'u': case 'U':
                vowels++;
                break;
            default:
                continue;
        }
    };
    printf("Your sentence contains %d vowels", vowels);
    
    return 0;
}
