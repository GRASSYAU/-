#include <stdio.h>
void dump(char msg[], int a[], int n){
    printf("%s[%d", msg ,a[0]);
    int idx=1;
    while (idx<n)
    {
        printf("%d",a[idx]);
        idx++;
    }
    printf("]\n");
}
int load(int a[]){
    int x;
    int idx;
    while(scanf("%d",&x)==1){
        a[idx]=x;
        idx++;
    }
    return idx;
}

int main(){
int a[100];
int n,x,j,last,i;
int cmps=0,move=0;
n = load(a);
dump("The input a[]=",a,n);
for(i=0;i<n;i++){
    x = a[i];
    printf("Pass %d:\n",i);
    printf("***(%d)***move a[%d]:%d to a[%d]\n",++move,j,x);
    printf("***insert x:%d ",x);
    

}
}