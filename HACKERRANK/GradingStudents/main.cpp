//
//  main.cpp
//  GradingStudents
//
//  Created by princeraj on 20/02/21.
//

/**
 
 HackerLand University has the following grading policy:
 Every student receives a  in the inclusive range from  to .
 Any  less than  is a failing grade.
 Sam is a professor at the university and likes to round each student's  according to these rules:
 If the difference between the  and the next multiple of  is less than , round  up to the next multiple of .
 If the value of  is less than , no rounding occurs as the result will still be a failing grade.
 Examples
  round to  (85 - 84 is less than 3)
  do not round (result is less than 40)
  do not round (60 - 57 is 3 or higher)
 Given the initial value of  for each of Sam's  students, write code to automate the rounding process.
 Function Description
 Complete the function gradingStudents in the editor below.
 gradingStudents has the following parameter(s):
 int grades[n]: the grades before rounding
 Returns
 int[n]: the grades after rounding as appropriate
 Input Format
 The first line contains a single integer, , the number of students.
 Each line  of the  subsequent lines contains a single integer, .
 Constraints
 
 
 NOTE:-
 
 this code works on Hackerrak as it's grading student function is completely valid, however it runs non xcode but not giving any ouputs


 */

#include <iostream>
#include <vector>
#include <sstream>
#include <fstream>
using namespace std;

string ltrim(const string &);
string rtrim(const string &);


vector<int> gradingStudents(vector<int> grades, int n) {
    
   
    int difference;
    int number=0;
    int nextMultipleOfFive=0;
    int rem=0;
    
   for(long unsigned int i=0;i<n;i++){
       
       
       if(grades[i]<38){
           
           
       }else if(grades[i]>=38){
           
           number=grades[i];
           
           rem=number%5;
           rem=5-rem;
           
           nextMultipleOfFive=number+rem;
           
           difference=nextMultipleOfFive-number;
           
           if(difference<3){
               
               grades[i]=nextMultipleOfFive;
           }else{
               
               
           }
        
           
       }
       
       
       
   }
    
    
    
 
return grades;
}


int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string grades_count_temp;
    getline(cin, grades_count_temp);

   long unsigned int grades_count = stoi(ltrim(rtrim(grades_count_temp)));

    vector<int> grades(grades_count);

    for (long unsigned int i = 0; i < grades_count; i++) {
        string grades_item_temp;
        getline(cin, grades_item_temp);

        int grades_item = stoi(ltrim(rtrim(grades_item_temp)));

        grades[i] = grades_item;
    }

    vector<int> result = gradingStudents(grades, grades_count);

    for (long unsigned int i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";


    return 0;
}


string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
