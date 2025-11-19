#include<iostream>
#include<string>

using namespace std;

// Program that solves the problem: Reverse a string in c++

//Helper function using a two pointer approach
string reverseString(string &s){
    int left = 0; //Left pointer
    int right = s.length() - 1; //Right pointer
    
    //Loop that swaps the content of the right pointer and the left pointer on the string and moves both pointers by one until left reaches right.
    while (left < right){

        swap(s[left], s[right]);
        
        left++;
        right--;
    
    }
    
    return s;
}

int main(){

    string testString = "Hi, I'm a test";
    string reversedString;
    
    reversedString = reverseString(testString);
    cout << reversedString;
    
    return 0;
}
