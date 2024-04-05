#include<stdio.h>
#include<string.h>

#define max 100
int top,  stack[max];
void push(char x){
    if (top==max-1){
        printf("Stack overflow");
    }
    else {
        stack[++top]=x;
    }
}

void pop(){
    printf("%c", stack[top--]);
}
 int main(){
    char str[100];
    printf("Enter string: ");
    gets(str);
    int len = strlen(str);
    printf("Reversed string:\n");
    for (int i=0; i<len; i++){
        push(str[i]);
    }
    for (int i=0; i<len; i++){
        pop();
    }
 }