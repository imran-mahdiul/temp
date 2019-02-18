#include <iostream>
#include <ctime>
using namespace std;

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

    // insertion sorting
    int index_val,temp;

    for(int j=1; j<arr_size; j++)
    {
        index_val=array_1[j];
        int i=j-1;
        while((i>=0)&&(array_1[i]>=index_val))
        {
            temp=array_1[i+1];
            array_1[i+1]=array_1[i];
            array_1[i]=temp;
            i=i-1;
        }
        array_1[i+1]=index_val;
    }

    cout<<"\nAfter Sorting:  "<<endl;
    for(int i=0; i<num; i++)
    {
        cout<<array_1[i]<<",";
    }

    return 0;
}
