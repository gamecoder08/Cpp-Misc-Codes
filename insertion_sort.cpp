#include <stdio.h>

void insertion_sort(int A[],int size){
    for(int i=1;i<size;i++){
        int key=A[i];
        int j = i - 1;
        while(j>=0 && key<A[j]){
            A[j+1]=A[j];
            j = j - 1;
        }
        A[j+1]=key;
    }
}
int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    char arr1[n];
    printf("Enter the string: ");
    scanf("%s",&arr1);

    int arr2[n];
    for(int i=0;i<n;i++){
        int temp=arr1[i];
        arr2[i]=temp;
    }
    printf("Before Sorting: ");
    for(int i=0;i<n;i++){
        printf("%c ",arr2[i]);
    }
    printf("\nAfter sorting: ");
    insertion_sort(arr2,n);
    for(int i=0;i<n;i++){
        printf("%c ",arr2[i]);
    }
    return 0;
}