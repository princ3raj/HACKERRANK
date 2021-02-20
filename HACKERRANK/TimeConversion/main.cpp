//
//  main.cpp
//  TimeConversion
//
//  Created by princeraj on 20/02/21.
//

//just change cout to fout on hackerrank for this particular question
//bcoz it uses this  ofstream fout(getenv("OUTPUT_PATH"));


#include <iostream>
using namespace std;

#define number 12


static string extracted(string time) {
//    string time;
//    cin>>time;
    
    //checking if it's AM and time is 12:01:00 on a 12-hour clock
    
    if(time[8]=='A'){
        
        
        if((time[0]==48)&&(time[1]>48&&time[1]<=57)){
            
            
            
            return time;
            
            
        }
        
        
        
        
        
        if(time[0]=='1'&& time[1]=='2'){
            
            
            time.replace(0, 1,"0");
            time.replace(1, 1,"0");
            
        
            return time;
            
            
            
         
        }else if(time[0]=='1'&& time[1]=='0'){
            
            
          
          
            return time;
            
        }else if (time[0]=='1'&& time[1]=='1'){
       
            return time;
            
        }
    }
    
    
    if(time[8]=='P'){
        
        
        if(time[0]=='1'&& time[1]=='2'){
            
            
            return time;
        }
    }
    
    
    if(time[8]=='P'){
        
        
        if(time[0]=='1'&&time[1]=='1'){
            
            
            time.replace(0, 1, "2");
            time.replace(1, 1, "3");
        
            return time;
        
        }
        
        if(time[0]=='1'&&time[1]=='0'){
            
            
            time.replace(0, 1, "2");
            time.replace(1, 1, "2");
            return time;
            
            
            
        }
        
        
        

        
    }
    
    return time;
    
}
    
    





int main() {
    
    string s;
    cin>>s;
    
    string time=extracted(s);
    
    
    if(time[8]=='P'){
        
        
        
        
        if((time[0]==48)&&(time[1]>48&&time[1]<=57)){
            
            
            
            cout<<(time[1]-48)+number;
            
            
            
            
            for(int i=2;i<time.length()-2;i++){
                
                cout<<time[i];
            }
            
            cout<<endl;
      
            
          
            

            
        }else{
            
            for(int i=0;i<time.length()-2;i++){
                
                cout<<time[i];
            }
            cout<<endl;
        }
        
        
        
        
    }
    
    
    if(time[8]=='A'){
        
        for(int i=0;i<time.length()-2;i++){
            
            cout<<time[i];
        }
        cout<<endl;
        
        
        
    }
   
   
    
    return 0;
    
   
}
