#include <stdio.h>
#include <string.h>

#define MAX_STR_LEN 100

int main() {
    char str1[MAX_STR_LEN+1], str2[MAX_STR_LEN+1];
    int n;

    printf("Digite a primeira string: ");
    fgets(str1, MAX_STR_LEN, stdin);
    printf("Digite a segunda string: ");
    fgets(str2, MAX_STR_LEN, stdin);
    printf("Digite o valor de N: ");
    scanf("%d", &n);
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    int len1 = strlen(str1);
    int len2 = strlen(str2);
    int i;
    for (i = 0; i < n && i < len2; i++) {
        str1[len1+i] = str2[i];
    }
    str1[len1+i] = '\0';

    printf("A string resultante e: %s\n", str1);

    return 0;
}
