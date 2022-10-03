    #include <stdio.h>

    int main(){
        int cases,loop,from,to;
        scanf("%d",&cases);
        for(loop=1;loop<=cases;loop++){
            scanf("%d%d",&from,&to);
            
            for(int i=1;i<=9;i++){
                for(int n=from;n<=to;n++){
                    if(n<to){
                        printf("%d*%d=%2d,",n,i,n*i);
                    }else{
                        printf("%d*%d=%2d\n",n,i,n*i);
                    }
                }   
            }
        }
        return 0;
    }   