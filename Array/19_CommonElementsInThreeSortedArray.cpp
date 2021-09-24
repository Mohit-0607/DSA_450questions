#include <iostream>
#include <vector>
using namespace std;

vector<int> CommonElements(int arr1[],int arr2[],int arr3[],int n1,int n2,int n3){
    int i=0,j=0,k=0;
    vector<int> ans;
    while(i<n1 and j<n2 and k<n3){
        if(arr1[i]==arr2[j] and arr2[j]==arr3[k]){
            ans.push_back(arr1[i]);
            i++;
            j++;
            k++;
        }
        else{
            if(arr1[i]>arr2[j]) j++;
            if(arr2[j]>arr3[k]) k++;
            else i++;
        }
        while(arr1[i]==arr1[i-1]) i++;
        while(arr2[j]==arr2[j-1]) j++;
        while(arr3[k]==arr3[k-1]) k++;
        
    }
    if(ans.size()==0) return {-1};
    else return ans;
}

int main(){
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    int arr1[n1],arr2[n2],arr3[n3];
    for(int i=0;i<n1;i++) cin>>arr1[i];
    for(int i=0;i<n2;i++) cin>>arr2[i];
    for(int i=0;i<n3;i++) cin>>arr3[i];
    vector<int> ans = CommonElements(arr1,arr2,arr3,n1,n2,n3);
    for(auto X:ans){
        cout<<X<<" ";
    }
}
