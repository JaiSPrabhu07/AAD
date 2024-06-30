//sequential search or linear search for unsorted array

#include <stdio.h>

int unsortsearch(int key){
    int arr[10]={132,3,45,67,78,234,35,350,12,19};
    int element = 0;
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++)
    {
        if (key == arr[i])
        {
            printf("%d is available at index %d\n", key, i);
            element = 1;
            break;
        }
    }

    if (!element)
    {
        printf("%d is not available\n", key);
    }
}
int main()
{
    int key;
    
    printf("Enter the element to be searched: ");
    scanf("%d",&key);
    
    unsortsearch(key);
    return 0;
}