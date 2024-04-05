#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define Max 100
char* removeDup(char *s)
{
    int len=strlen(s);
    char* stack=(char*)malloc((len+1)*sizeof(char));
    int top=-1;
    for(int i=0;i<len;i++){
        if(top>=0 && s[i]==stack[top])
        {
            top--;
        }
        else{
            top++;
            stack[top]=s[i];
        }
    }
    stack[top+1]='\0';
    return stack;
}

int main(){
    char s[Max];
    fgets(s,sizeof(s),stdin);

    char* result=removeDup(s);
    printf("output: %s\n",result);
    free(result);
    return 0;
}