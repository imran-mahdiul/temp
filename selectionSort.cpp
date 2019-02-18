#include<iostream>
#include<stdio.h>
#include <ctime>
using namespace std;

int main()
{
    int index,key,temp;
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

    for (int i = 0; i <= arr_size - 1; i++)
    {
        index = i;
        key = array_1[i];
        for (int j = i + 1; j <= arr_size; j++)
        {
            if (array_1[j] < key)
            {
                key = array_1[j];
                index = j;
            }
        }
        temp = array_1[i];
        array_1[i] = array_1[index];
        array_1[index] = temp;
    }
    cout<<"After sorting: \n";
    for (int k = 0; k < arr_size; k++)
    {
        cout<<array_1[k]<<endl;
    }
    return 0;
}
