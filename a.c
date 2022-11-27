#include <stdio.h>
#include <string.h>
#define MAX 104
int caseno;
char a[MAX], b[MAX];
int hasNumbers(){
    if(scanf("%s%s",a,b)<2) return 0;//EOF
    ++caseno;
    return 1 ;
}
int getCaseNo(){
    return caseno;
}
int cmpString(int from,int to){
    int i;
    for(i=from;i<=to;++i){
        if(a[i]==b[i]) continue;;
        if(a[i]<b[i]) return -1;
        if(a[i]>b[i]) return 1;
    }
    return 0;
}
int cmpString2(int from){
    int i;
    for(i=from;a[i]!='\0'&&b[i]!='\0';++i){
        if(a[i]!=b[i]) break;
    }
    if(a[i]<b[i]) return -1;
    if(a[i]>b[i]) return 1;
    return 0;
}
void rmTailingZeros(char arr[]){
    int i;
    for(i=0;arr[i]!='\0';++i);
    for(--i;arr[i]=='0';--i);
    arr[i+1]='\0';
}
int cmpNumbers(){
    int ap, bp, i;
    for(ap=0;a[ap]!='.';++ap);
    for(bp=0;b[bp]!='.';++bp);

    if(ap<bp) return -1;
    if(ap>bp) return 1;
    int retc = strncmp(a,b,ap-1);
    if(retc!=0) return retc;
    rmTailingZeros(&a[ap]);
    rmTailingZeros(&b[bp]);
    return strcmp(&a[ap],&b[bp]);
}
int main(){
    while(hasNumbers()){
    printf("Case %d: ",getCaseNo());
    int retc=cmpNumbers();
    if(retc==0) printf("Same");
    else if(retc<0)printf("Smaller");
    else printf("Bigger");
    printf("\n");
    }
}