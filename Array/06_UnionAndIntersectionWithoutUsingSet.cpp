#include <iostream>
using namespace std;

void sort(int a[], int n){
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(a[i]>a[j]){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

void unionof(int a[], int b[], int n, int m){
    int l=0,arr[m+n];
    for(int i=0;i<n;i++){
        arr[l++] = a[i];
    }
    for(int i=0;i<m;i++){
        arr[l++] = b[i];
    }
    
    for(int i=0;i<m+n;i++){
       if(arr[i]!=arr[i+1]){
           cout<<arr[i]<<" ";
       }
    }
    cout<<endl;
}

void intersectionof(int a[], int b[], int n, int m){
    sort(a,n);
    int l=0,arr[n],count=0;
    for(int i=0;i<n;i++){
        if(a[i]!=a[i+1]){
            arr[l++]=a[i];
        }
        else{
            count++;
        }
    }
    int size = n-count;
    for(int i=0;i<size;i++){
        for(int j=0;j<m;j++){
            if(arr[i]==b[j]){
                cout<<arr[i]<<" ";
                break;
            }
        }
    }
    cout<<endl;
}

int main() {
    int n,m;
    cin>>n>>m;
    int a[n],b[m];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<m;i++)
        cin>>b[i];
    unionof(a,b,n,m);
    intersectionof(a,b,n,m);
	return 0;
}
