#include<iostream>
#include <ctime>
using namespace std;

void sort(int arr[],int x, int y,int r)
{
    int num1=y-x+1,i,j,k;
    int num2=r-y;
    int left[num1], right[num2];
    for(i=0; i<num1; i++)
    {
        left[i]=arr[x+i];
    }
    for(j=0; j<num2; j++)
    {
        right[j]=arr[y+j+1];
    }
    i=0,j=0;
    for(k=x; i<num1 && j<num2; k++)
    {
        if(left[i]<right[j])
        {
            arr[k]=left[i++];
        }
        else
        {
            arr[k]=right[j++];
        }
    }
    while(i<num1)
    {
        arr[k++]=left[i++];
    }
    while(j<num2)
    {
        arr[k++]=right[j++];
    }
}

void mergeSort(int arr[],int x,int r)
{
    int y;
    if(x<r)
    {
        y=(x+r)/2;
        mergeSort(arr,x,y);
        mergeSort(arr,y+1,r);
        sort(arr,x,y,r);
    }
}
int main()
{
    const int arr_size = 10;
    int array_1[arr_size];
    srand(time(0));
    // populate the array
    for(int i=0;i<arr_size;i++){
        array_1[i] = rand()%100+1; // random value between 1-100;
    }
    // Print the unsorted array
    cout<<"Before Sorting :\n"<<endl;
    for(int i=0;i<arr_size;i++){
        cout<<array_1[i]<<",";
    }
    cout<<endl;


    mergeSort(array_1,0,arr_size-1);

    cout<<"Sorted elements  : ";

    for(int i=0;i<arr_size;i++){
        cout<<array_1[i]<<",";
    }
    cout<<endl;
    return 0;
}
