#include <iostream>

using namespace std;

//merge function
void Merge(int arr[],int l, int m , int r)
{
    int i=l; //starting index for left sub array
    int j=m+1;//starting index for right sub array
    int k=l;//starting index for temporary#

    int temp[5];

    while(i<=m && j<=r)
    {
        if(arr[i]<=arr[j])
        {
            temp[k]=arr[i];
            i++;
            k++;
        }
        else
        {
            temp[k]=arr[j];
            j++;
            k++;
        }
    }
    while(i<=m)
    {
        temp[k]=arr[i];
            i++;
            k++;
    }
    while(j<=r)
    {
        temp[k]=arr[j];
            j++;
            k++;
    }
     for(int s=l; s<=r; s++)
    {
        arr[s] = temp[s];
    }

}

//merge sort function
void mergeSort(int arr[], int l , int r)
{
    if(l<r)
    {
        int m = (l+r)/2;
        mergeSort(arr,l,m);
        mergeSort(arr,m+1,r);
        Merge(arr,l,m,r);
        }
}

int main()
{
    //int arr[5] = {4,5,2,8,9};
    cout << "Enter 5 elements in the array : " << endl;
    int myarr[5];
    for(int i=0; i<5; i++)
    {
        cin >> myarr[i];
    }
    cout << "Before Merge Sort: " <<endl;
    for(int i=0; i<5; i++)
    {
        cout << myarr[i] << "  ";
    }


    //Mergesort function
    mergeSort(myarr,0,4);

 cout <<endl<< "After Merge Sort: " <<endl;
    for(int i=0; i<5; i++)
    {
        cout << myarr[i] << "  ";
    }

    return 0;
}
