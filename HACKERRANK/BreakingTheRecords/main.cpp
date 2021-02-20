//
//  main.cpp
//  BreakingTheRecords
//
//  Created by princeraj on 21/02/21.
//


/*
 
 Maria plays college basketball and wants to go pro. Each season she maintains a record of her play. She tabulates the number of times she breaks her season record for most points and least points in a game. Points scored in the first game establish her record for the season, and she begins counting from there.

 For example, assume her scores for the season are represented in the array . Scores are in the same order as the games played. She would tabulate her results as follows:

                                  Count
 Game  Score  Minimum  Maximum   Min Max
  0      12     12       12       0   0
  1      24     12       24       0   1
  2      10     10       24       1   1
  3      24     10       24       1   1
 Given the scores for a season, find and print the number of times Maria breaks her records for most and least points scored during the season.

 Function Description

 Complete the breakingRecords function in the editor below. It must return an integer array containing the numbers of times she broke her records. Index is for breaking most points records, and index is for breaking least points records.

 breakingRecords has the following parameter(s):

 scores: an array of integers
 **/

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
