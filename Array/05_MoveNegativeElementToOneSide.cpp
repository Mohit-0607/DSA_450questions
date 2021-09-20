#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    int pivot = 0;
    int i = 0;
    int j = n-1;
    int temp;
    for(int x=0;x<n;x++){
        while(arr[i]>pivot)
            i++;
        while(arr[j]<pivot)
            j--;
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    for(int x=0;x<n;x++)
        cout<<arr[x]<<" ";
    return 0;
}
