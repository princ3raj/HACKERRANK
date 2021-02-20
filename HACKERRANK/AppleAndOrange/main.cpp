//
//  main.cpp
//  AppleAndOrange
//
//  Created by princeraj on 20/02/21.
//

/**
 
 
 s: integer, starting point of Sam's house location.
 t: integer, ending location of Sam's house location.
 a: integer, location of the Apple tree.
 b: integer, location of the Orange tree.
 apples: integer array, distances at which each apple falls from the tree.
 oranges: integer array, distances at which each orange falls from the tree.
 
 
 The first line contains two space-separated integers denoting the respective values of  and .
 The second line contains two space-separated integers denoting the respective values of  and .
 The third line contains two space-separated integers denoting the respective values of  and .
 The fourth line contains  space-separated integers denoting the respective distances that each apple falls from point .
 The fifth line contains  space-separated integers denoting the respective distances that each orange falls from point .
 */

#include <iostream>
using namespace::std;



void countApplesAndOranges(long int s,long int t, long int a,long int b,long int m, long int n, long int apples[],long int oranges[]){
    
    
    int flagForApple=0;
    int flagForOrange=0;

    
    
    //for apples
    
    
    
    
    for(int i=0;i<m;i++){
        
        
        if(apples[i]>0){
            
            long int d=apples[i]+a;
            
            if(d>=s&&d<=t){
                
                flagForApple++;
            }
        }
        
        
    }
    
    //for oranges
    
     
    
    for(int j=0;j<n;j++)
    {
        
        
        if(oranges[j]<0){
            
            long int d=oranges[j]+b;
            
            if(d>=s&&d<=t){
                
                flagForOrange++;
            }
        }
        
        
    }
    
    cout<<flagForApple<<endl;
    
    cout<<flagForOrange<<endl;
    
    
    
    
    
    
    
    
    
    
}

int main(int argc, const char * argv[]) {
    
    
    
    cout<<"start"<<endl;
    
    
    
    long int s, t, a, b, m, n;
  
    
    cin>>s>>t; //starting and end points of sams house
    cin>>a>>b; //ending point for sams house
    cin>>m>>n; //no of apples and oranges
    
    long int apples[m];
    for(auto &x:apples)
        cin>>x;
        
        
    long int oranges[n];
    for(auto &x:oranges)
        cin>>x;
    
    
    
    
    
    countApplesAndOranges(s, t, a, b,m,n ,apples, oranges);
   
}
