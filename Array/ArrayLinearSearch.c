#include<stdio.h>
int main()
{
    int i=0,key;
    int arr[5]={11,22,33,44,55};
    printf("Enter key you want to search for: ");
    scanf("%d",&key);
    // while(i<5)
    // {
    //     if(arr[i]==key)
    //        { printf("key found at %d index",i);
    //          return 0;
    //        }
        
    //     i++;
    // }   
    for ( i = 0; i < 5; i++)
    {
        if(arr[i]==key)
            { printf("key found at %d index",i);
             return 0;
            }
    }
    
       printf("item not found");
    return 0;
}