#include <stdio.h>
#include <string.h>

int main() {
    char ip[15];
    printf("enter your ip address");
    scanf("%s",ip);
    int len = strlen(ip);

    
    int defangedLen = len + 2 * 3 + 1; 

    
    char defangedIP[defangedLen];

    int j = 0;
    for (int i = 0; i < len; i++) {
        if (ip[i] == '.') {
            defangedIP[j++] = '[';
            defangedIP[j++] = '.';
            defangedIP[j++] = ']';
        } else {
            defangedIP[j++] = ip[i];
        }
    }

    // Null-terminate the defanged IP string
    defangedIP[j] = '\0';

    printf("Original IP: %s\n", ip);
    printf("Defanged IP: %s\n", defangedIP);

    return 0;
}
