#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char stack[10000];
char *removeDuplicates(const char* s){
    int len = strlen(s);
    int top=-1;

    for(int i=0; i<len; i++){
        if (top>=0 && s[i]==stack[top]){
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
    char str[100];
    printf("Enter string: ");
    gets(str);

    char* result = removeDuplicates(str);
    printf("Output: %s", result);
 }