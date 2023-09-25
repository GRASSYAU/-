#include <stdio.h>   
int load(int a[],int x){  
    int i;   
    printf("The input a[]=[");   
    for(i=0;i<x;i++){   
        if(i>0){   
            printf(",");   
        }   
        printf("%d",a[i]);   
    }   
    printf("]\n");  
}    
int dump(char msg[],int a[],int n){   
    int i,k,pivot,x,y,com=0,move=0,z,ins,mov,mo,comp;  
    for(i=0;i<n;i++){  
        if(i>0){  
            printf("Pass %d:\n",i);  
            pivot=a[i];  
            k=i-1;  
            ins=0;  
            mov=0;  
            mo=0;  
            comp=0;  
            if(mov==0){  
                    move++;  
                    printf("***(%d)***move a[%d] to x:%d\n",move,i,a[i]);  
                    mov++;  
            }  
            if(ins==0){  
                    printf("***insert x:%d into the sorted a[]=[",a[i],a[k]);  
                    for(z=0;z<i;z++){  
                        if(z>0){  
                            printf(",");  
                        }  
                        printf("%d",a[z]);  
                    }  
                    printf("]\n");  
                    ins++;  
            }  
            if(comp==0){  
                com++;  
                printf("---[%d]---compare x:%d with a[%d]:%d\n",com,pivot,k,a[k]);  
                comp++;  
            }  
            while(k>=0&&a[k]>pivot){  
                a[k+1]=a[k];  
                move++;  
                printf("***(%d)***move a[%d]:%d to a[%d]\n",move,k,a[k],k+1);  
                --k;  
                if(i>1&&k>=0){  
                    com++;  
                    printf("---[%d]---compare x:%d with a[%d]:%d\n",com,pivot,k,a[k]);  
                }  
                a[k+1]=pivot;  
            }  
            if(mo==0){  
                    move++;  
                    printf("***(%d)***move x:%d to a[%d]\n",move,a[k+1],k+1);  
                    mo++;  
            }  
            if(i>0){  
                printf("***the sorted a[]=[");  
                for(y=0;y<=i;y++){  
                    if(y>0){  
                        printf(",");  
                    }  
                    printf("%d",a[y]);  
                }  
                printf("]\n");  
            }  
        }  
    }  
    printf("The total number of comparisons is %d.\n",com);  
    printf("The total number of data movement is %d.\n",move);  
}  
int main(){   
    int a[100],i;   
    char msg[1000];  
    int n=0;  
    while(scanf("%d",&a[n])==1){   
        //printf("n=%d\n",n);   
        n++;   
    }  
    load(a,n);   
    dump(msg,a,n);   
}