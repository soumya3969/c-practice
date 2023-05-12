#include<stdio.h>
int main(){
    int t,n,k,i,j,count;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d%d",&n,&k);
        int arr[n];
        for(j=0;j<n;j++){
            scanf("%d",&arr[j]);
        }
        count=0;
        for(j=0;j<n;j++){
            if(k<arr[j]){
                count++;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}