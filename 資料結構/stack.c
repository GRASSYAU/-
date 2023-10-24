#include <stdio.h>
#define MAX 1000
char stack[MAX];
int sp;
void push(char c){
    if (sp >= MAX){
        printf("Stack Overflow!\n");
        return;
    }
    stack[sp++] = c;
}

char pop(void)
{
    if (sp <= 0)
    {
        printf("Stack Underflow!\n");
        return-1;
    }
    return stack[--sp];
}
int match(char s[]){
    int i;
    for (i=0;s[i]!='\0';++i){
        printf("scan %c\n", s[i]);
        switch (s[i]){
            case '(':
            case '[':
            case '{':
            case '<':
                push(s[i]);
                break;
            case '>':
                if(pop!='<') return 0;
                break;
            case '}':
                if(pop!='{') return 0;
                break;
            case ']':
                if(pop!='[') return 0;
                break;
            case ')':
                if(pop!='(') return 0;
                break;
        }
    }
    if(sp!=0) return 0;
    return 1;
}

int main(){
    char buf[MAX];
    while (gets(buf) != NULL){
        printf("buf=#%s#\n",buf);
        if(match(buf))
            printf("Yes\n");
        else
            printf("No\n");
    }
}