#include<stdio.h>
#define MAX 104
int caseno;
char a[MAX], b[MAX];
int hasNumbers(){
    if(scanf("%s%s", a, b)<2) return 0;//EOF
    ++caseno;
    return 1;
}
int getCaseno(){
    return caseno;
}
int cmpString(int from, int to){
    int i;
    for(i=from; i<=to; ++i){
        if(a[i]==b[i]) continue;
        if(a[i]<b[i]) return -1;//a<b
        if(a[i]>b[i]) return 1;//a>b
    }
    return 0;//a==b
}
int cmpString2(int from){
    int i;
    for(i=from; a[i]!='\0' && b[i]!='\0'; ++i){
        if(a[i]!=b[i]) break;
    }
    if(a[i]<b[i]) return -1;//a<b
    if(a[i]>b[i]) return 1;//a>b
    return 0;//a==b
}
void rmTailigZeros(char arr[]){
    int i;
    for(i=0; arr[i]!='\0'; ++i);
    for(--i; arr[i]=='0'; --i);
    arr[i+1]='\0';
}
int cmpNumbers(){
    int ap, bp, i;
    for(ap=0; a[ap]!='.'; ++ap);
    for(bp=0; b[bp]!='.'; ++bp);
    //interger part
    if(ap<bp) return -1;//a<b
    if(ap>bp) return 1;//a>b
    int retc = cmpString(0, ap-1);
    if(retc!=0) return retc;
    //fractional part
    rmTailigZeros(&a[ap]);
    rmTailigZeros(&b[bp]);
    return cmpString2(ap+1);
}
int main(){
    while(hasNumbers()){
        printf("Case %d: ", getCaseno());
        int retc = cmpNumbers();
        if(retc==0) printf("Same");
        else if(retc<0) printf("Smaller");
        else printf("Bigger");
        printf("\n");
    }
}