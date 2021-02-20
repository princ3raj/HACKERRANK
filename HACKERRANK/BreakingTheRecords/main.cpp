//
//  main.cpp
//  BreakingTheRecords
//
//  Created by princeraj on 21/02/21.
//

#include <iostream>
using namespace std;


void BreakingRecords(int arr[],int n){
    
    int most=0;
    int least=0;
    int min=0;
    int max=0;
    
    min=arr[0];
    max=arr[0];
    
    
    
    for(int i=1;i<n;i++){
        
        if(arr[i]>max){
            
            max=arr[i];
            most++;
        }
        
        if(arr[i]<min){
            
            min=arr[i];
            least++;
        }
        
    }
    
    
    cout<<"max is"<<most<<endl;
    cout<<"min is"<<least<<endl;
    
    
    
    
}



int main() {
    
    int n;
    cin>>n;
    
    int arr[n];
    for(auto &x:arr){
        cin>>x;
    }
    
    
    BreakingRecords(arr,n);
 
}
