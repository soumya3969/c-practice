#include<stdio.h>
int main(){
    
    int t,d,n,i,j;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&d);
        char n[d];
        int count=0;
        scanf("%s",n);
        for(j=0;j<d;j++){
            if(n[j]=='0' ||n[j]=='5'){
                count++;}}
            if(count>0){
                printf("yes\n");
            }else{
            printf("No\n");
                
            }
        
    }
}
