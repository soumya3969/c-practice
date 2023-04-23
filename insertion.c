#include <stdio.h>
int main()
{
    int size ,i,j,hold;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    int a[size];
    printf("Enter %d Element: ",size);
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    for(i=1;i<size;i++){
        hold = a[i];
        j=i-1;
        while(j>=0 && a[j]>hold){
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=hold;
    }
    printf("Array after insertion sort:\n");
    for(i=0;i<size;i++){
        printf("%d\t",a[i]);
    }
    return 0;
}