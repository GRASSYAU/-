#include <stdio.h>
#define MAX 30000
int stack[MAX];
int sp;
int longestValidParentheses(char s[]){
    int longest, valid, i, last;
    last= -1;
    for(i=sp=longest=valid=0;s[i];++i){
        #ifdef TOY
        printf("scan %d:%c\n",i,s[i]);
        #endif
        if(s[i]=='('){
            stack[sp++]=i;
        }else{
            if(sp>0){
                --sp;
                valid=i-(sp==0?last:stack[sp-1]);
                if(valid>longest) longest=valid;
                #ifdef TOY
                printf("match:valid=%d,i=%d, longest=%d, sp=%d\n",valid,i,longest,sp )
                #endif
                continue;;
            }
            sp=0;
            last=i;
        }
    }
    return longest;
}
int main(){
    char s[MAX];
    while (scanf("%s",s)==1)
    {
        printf("%d\n",longestValidParentheses(s));
    }
    
}
