#include <iostream>
using namespace std;

int findMax(int arr[], int n)
{
    int index, maxNum=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>maxNum)
        {
            maxNum=arr[i];
            index=i;
        }
    }
    return index;
}

int findMin(int arr[], int n)
{
    int index, minNum=100;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<=minNum)
        {
            minNum=arr[i];
            index=i;
        }
    }
    return index;
}

int main()
{
    int n, count=0;
    cin >> n;
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }

    count = findMax(arr,n);
    count = count+n-1-findMin(arr,n);

    if(findMax(arr,n)>findMin(arr,n))
    {
        count--;
    }

    cout << count << endl;
    return 0;
}
