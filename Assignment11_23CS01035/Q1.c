#include <stdio.h>
#include <string.h>


#define MaxLen 150

void reverseString(char* str)
{
    int len = strlen(str);
    static char stack[MaxLen];
    int start = -1;
    int i;
    for(i = 0; i < len; i++)
    {
        ++start;
        stack[start] = str[i];
       
    }
    for(i =0; i< len;i++)
    {
        str[i] = stack[start];
        start--;
    }
    return;
}


int main()
{
    char str[MaxLen];
    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);

    reverseString(str);
    printf("\nThe Reversed String is: %s\n", str);
    return 0;
}