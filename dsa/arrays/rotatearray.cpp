#include<iostream>
#include<vector>

using namespace std;

// Program that solves the problem: Merge two sorted arrays in c++

// Helper function that utilizes a two pointer approach. 
// First it compares the two arrays at the first element position, the smallest one gets added to the merged array and that index increments by one.
// When we reach the end of any array the comparasion stops and we check each index to verify the position is at the end of its asigned array. If its not we copy the leftover elements of that array to the merged one. 
vector<int> mergeSortedArrays(vector<int> array1, vector<int> array2){
    vector<int> mergedArray; //Vector that stores merged array

    //Lengths of both arrays
    int length1 = array1.size(); 
    int length2 = array2.size();

    //Indexes of arrays
    int i, j = 0;

    //While loop that compares both arrays and adds the smallest number to mergedArray 
    while(i < length1 && j < length2){
        if(array1[i] <= array2[j]){
            mergedArray.push_back(array1[i]);
            i++;
        } else{
            mergedArray.push_back(array2[j]);
            j++;
        }
    }

    //Inserts leftover elements of array1
    while(i < length1){
        mergedArray.push_back(array1[i]);
        i++;
    }

    //Inserts leftover elements of array2
    while(j < length2){
        mergedArray.push_back(array2[j]);
        j++;
    }

    return mergedArray;
}

int main(){
    vector<int> solution;
    
    //Test arrays
    vector<int> testArray1 = {0, 4, 15, 31};
    vector<int> testArray2 = {4, 6, 30};
    
    solution = mergeSortedArrays(testArray1, testArray2);

    //Visualization
    for(int i = 0; i < solution.size(); i++){
        cout << solution[i] << " ";
    }

    return 0;
}
