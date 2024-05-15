#include <stdio.h>  

int main()
{
    int arr[100],i,j,temp,size;
    
    printf("Enter a size of arry : ");
    scanf("%d", &size);
    printf("Enter elements : ");
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    
    for (i=1; i < size; i++) 
    {
        temp = arr[i];
        j = i-1;
        while ((temp < arr[j]) && (j >= 0))
        {
            arr[j+1]= arr[j];
          j=j-1;
        }
            arr[j+1]= temp;
    }
    printf("Sorted Arry is : ");
    for(i=0;i<size;i++){
        printf("%d  ", arr[i]);
    }
    
    return 0;
}
