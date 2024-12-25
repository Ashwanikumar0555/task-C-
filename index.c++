//////////short an arry in ascending order //////

#include <iostream>  
#include <algorithm>  

using namespace std;  
void sortArray(int arr[], int size) {
    sort(arr, arr + size); 
}

int main() {
    
    int nums[] = {4, 2, 8, 5, 1};
    int size = sizeof(nums) / sizeof(nums[0]);  
    
    
    sortArray(nums, size);  
    

    cout << "Sorted array in ascending order: ";
    for (int i = 0; i < size; i++) {
        cout << nums[i] << " ";  
    }
    cout << endl;
    
    return 0;  
}


//////////////2//////////////////////
#include <iostream>
#include <algorithm>
using namespace std;

bool isSortedBruteForce(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {  
        if (arr[i] > arr[i + 1]) {         
            return false;                  
        }
    }
    return true;  
}

int main() {
    int arr[] = {1, 2, 3, 4, 5,8};
    int size = sizeof(arr) / sizeof(arr[0]);

    bool result = isSortedBruteForce(arr, size);
    if (result) {
        cout << "True" << endl;  
    } else {
        cout << "False" << endl; 
    }

    return 0;
}

/////second apporach que1////////

#include <iostream>
using namespace std;

bool isSortedOptimized(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        if (arr[i] > arr[i + 1]) {  
            return false;            
        }
    }
    return true;  
}

int main() {
    int arr[] = {1, 2, 3, 4, 5,8};
    int size = sizeof(arr) / sizeof(arr[0]);

    bool result = isSortedOptimized(arr, size);
    if (result) {
        cout << "True" << endl;  
    } else {
        cout << "False" << endl; 
    }

    return 0;
}



/////////question ///////////


#include <iostream>
using namespace std;

void countPositiveNegativeBruteForce(int arr[], int size) {
    int positiveCount = 0; 
    int negativeCount = 0; 

    for (int i = 0; i < size; i++) { 
        if (arr[i] > 0) {            
            positiveCount++;
        } else if (arr[i] < 0) {     
            negativeCount++;
        }
    }

    cout << "Positive count: " << positiveCount << endl;
    cout << "Negative count: " << negativeCount << endl;
}

int main() {
    int arr[] = {1, 2, 3, -4, 5, -6};
    int size = sizeof(arr) / sizeof(arr[0]);

    countPositiveNegativeBruteForce(arr, size);

    return 0;
}


////////////
////////second apporach 2 //////////////////////


#include <iostream>
using namespace std;

void countPositiveNegativeOptimal(int arr[], int size) {
    int positiveCount = 0, negativeCount = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] > 0) {
            positiveCount++; 
        } else {
            negativeCount++;  
        }
    }

    cout << "Positive count: " << positiveCount << endl;
    cout << "Negative count: " << negativeCount << endl;
}

int main() {
    int arr[] = {1, 2, 3, -4, 5, -6};
    int size = sizeof(arr) / sizeof(arr[0]);

    countPositiveNegativeOptimal(arr, size);

    return 0;
}

//////// 3 ////////////////////////////

#include <iostream>
using namespace std;

void PositiveCountOptimal(int arr [] , int size) {
    int postive count = 0,

    for( int i =0; i < size; i++) {
        if(arr[i] > 0 ){
            PositiveCount++;
        }else {
            NegativeCount++;
        }
    }

    cout <<" PositiveCount:" << positivecount << endl;
    cout << "NegativeCount:"  << negativecount << endl;

}

int main() {
   int size = sizeof(arr) / sizeof(arr[0]);

    countPositiveNegativeOptimal(arr, size);

    return 0;
}



