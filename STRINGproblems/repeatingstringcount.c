#include <stdio.h>
#include <string.h>

int main() {
    char arr[100];
    printf("Enter the sequence: ");
    scanf(" %[^\n]s", arr);

    char brr[100]; 
    printf("Enter the word (substring): ");
    scanf(" %[^\n]s", brr);

    int len1 = strlen(arr);
    int len2 = strlen(brr);
    int c = 0;

    for (int i = 0; i <= len1 - len2; i++) {
        int j;
        for (j = 0; j < len2; j++) {
            if (arr[i + j] != brr[j]) {
                break;
            }
        }
        if (j == len2) {  
            c++;
        }
    }

    printf("Number of times '%s' appears as a substring: %d\n", brr, c);

    return 0;
}
