#include <stdio.h>
char ascii[128];
int findsmallest(){
    int i,min,ans,r;
    min=1000;
    ans=-1;
    for(i=32;i<127;++i){
        if(ascii[i]>0){
            if(ascii[i]<min){
                min=ascii[i];
                ans=i;
            }else if(ascii[i]==min){
                if(ans<i){
                    min=ascii[i];
                    ans=i;
                }
            }
        }
    }
    return ans;
}
int main()
{
    char buf[1004];
    int i,r=0;
    while(gets(buf)!=NULL){
        if(r==1)printf("\n");
        for(i=0;buf[i]!='\0';++i){
            ++ascii[buf[i]];
        }
        int thisans;
        while((thisans=findsmallest())>0){
            printf("%d %d\n",thisans,ascii[thisans]);
            ascii[thisans]=0;
        }
        r=1;
    }
}