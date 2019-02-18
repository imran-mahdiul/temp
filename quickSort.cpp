#include<iostream>
#include <ctime>
using namespace std;


int Sort(int low,int high,int *x)
{
    int i,h=high,l=low,pivot,t;
    pivot=x[low];
    while(low<high)
    {
        while(x[l]<pivot)
        {
            l++;
        }
        while(x[h]>pivot)
        {
            h--;
        }
        if(l<h)
        {
            t=x[l];
            x[l]=x[h];
            x[h]=t;
        }
        else
        {
            t=pivot;
            pivot=x[l];
            x[l]=t;
            break;
        }
    }
    return h;
}

void quickSort(int l,int h,int *x)
{
    int index,i;
    if(l<h)
    {
        index=Sort(l,h,x);
        quickSort(l,index-1,x);
        quickSort(index+1,h,x);
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

    int h=arr_size-1;
    int l=0;
    quickSort(l,h,array_1);

    cout<<"Sorted elements: ";

    for(int i=0;i<arr_size;i++){
        cout<<array_1[i]<<",";
    }
    cout<<endl;
    return 0;

}
