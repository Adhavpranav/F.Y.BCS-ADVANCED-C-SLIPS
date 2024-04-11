/*
Slip 12
2] Write a C program to count the vowels and consonants in a string
*/
#include <stdio.h>
int main() 
{
    char s1[20];
    printf("ENTER A STRING: ");
    gets(s1);
    int i, v = 0, c = 0;
    for (i = 0; s1[i] != '\0'; i++) {
        if ((s1[i] >= 'a' && s1[i] <= 'z') || (s1[i] >= 'A' && s1[i] <= 'Z')) {
            if (s1[i] == 'a' || s1[i] == 'e' || s1[i] == 'i' || s1[i] == 'o' || s1[i] == 'u' ||
                s1[i] == 'A' || s1[i] == 'E' || s1[i] == 'I' || s1[i] == 'O' || s1[i] == 'U') {
                v++;
            } else {
                c++;
            }
        }
    }
    printf("\nVOWEL COUNT: %d", v);
    printf("\nCONSONANT COUNT: %d", c);
    return 0;
}
