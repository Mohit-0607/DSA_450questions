#include <iostream>
using namespace std;

void rightrotation(int arr[],int wi,int i){
    int temp = arr[i];
    for(int x=i;x>wi;x--){
        arr[x] = arr[x-1];
    }
    arr[wi] = temp;
}
void alternateposneg(int arr[], int n){
    int wi=-1;
    for(int i=0;i<n;i++){
        if(wi==-1){
            if((i%2==0 and arr[i]<0) or (i%2==1 and arr[i]>=0)) wi=i;
        }
        else{
            if((arr[wi]>=0 and arr[i]<0) or (arr[wi]<0 and arr[i]>=0)){
                rightrotation(arr,wi,i);
                if(i-wi>=2) wi+=2;
                else wi=-1;
            }
        }
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    alternateposneg(arr,n);
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    return 0;
}
