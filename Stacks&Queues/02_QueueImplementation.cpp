#include <iostream>
using namespace std;

int arr[1000];
int front=0;
int last=0;
void push(int data){
    arr[last] = data;
    last++;
}

void pop(){
    if(front==last) cout<<"No Element !!!";
    else front++;
}

void display(){
    if(front==last) cout<<"NO Element !!!";
    for(int i=front;i<last;i++) cout<<arr[i]<<" "; 
}


int main() {
    push(1);
    push(2);
    pop();
    display();
    
    
	return 0;
}
