//
//  main.cpp
//  BetweenTwoSets
//
//  Created by princeraj on 20/02/21.
//

#include <iostream>
using  namespace::std;


int getTotalX(int a[],int b[],int m, int n){

    int count=0;
    
    
//    int storeElement[20];
    
    int i=0;
    int j=0;
    int k=0;
    
    int number;

    number=a[0];
    
    while(number<=b[0]){
        if(number%a[i]==0){
            i++;
            if(i>=n){
                i=0;
                
                
                for(int s=0;s<m;s++){
                    
                    if(b[s]%number==0){
                        k++;
                        if(k>=m){
                            k=0;
//                            storeElement[j]=number;
                            count++;
                            number++;
                            j++;
                            break;
                        }
                    }else{
                        k=0;
                        number++;
                        break;
                    }
                    
                    
                }
            
            }

        }else{
            i=0;
            number++;

            
        }

    }
    
    
  
    

    
    return count;
    
}


int main() {
    
    
        int n, m;
    
        cout<<"enter number"<<endl;
        cin>>n>>m;

    
        int a[n];
        int b[m];
        
        for(auto &x:a)
            cin>>x;
    
        for(auto &x:b)
            cin>>x;
    
    cout<<getTotalX(a, b, m, n);
    
   
    
    return 0;
}
