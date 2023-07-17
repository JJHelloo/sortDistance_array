/*
 * INSTRUCTION:
 *     This is a C++ starting code for hw1_1.
 *     When you finish the development, download this file.
 *     Note that the current filename is "main.cpp".
 *     But rename it to "main_hw1_1.cpp". Please DO NOT change
 *     the name of the main procecure "main()"
 *     After that, upload the renamed file on Canvas.
 */

// Finish the head comment with Abstract, Name, and Date.
/*
 * Title: main_hw1_1.cpp
 * Abstract: 
 * Justin Johnson: 
 * 10/31/2022:
 */

#include <iostream>
using namespace std;

int temp = 0;
int umin ;

//function declare
void distance(int array[], int arrayLength);
void sortNum(int array[], int numum);

int main()
{
  
  int takeNum = 0;
  cin >> takeNum;
  int myArray[takeNum];

// take values into an array
  for(int i = 0; i < takeNum; i++) {
    cin >> myArray[i];
  } 
  // call functions
  sortNum(myArray, takeNum);
  distance(myArray, takeNum);
  
  return 0;
}

// sort the array into acending order
void sortNum(int array[], int num) {
  for(int i = 0; i < num; i++) {
    for(int j = i+1; j < num; j++) {
      if(array[i] > array[j]) {
        temp = array[i];
        array[i] = array[j];
        array[j] = temp;
      }
    }
  }
}
// find distance of nums
void distance(int myArray[], int takeNum) {
    int pair1[takeNum];
    int pair2[takeNum];

    for(int i =0; i<takeNum; i++) {
    for(int j = i+1; j < takeNum; j++) {
      if (i == 0 && j == 1) { // declare min distance 
        if((myArray[j] - myArray[i]) < (myArray[j] - myArray[i])) { // to not get a negative number
    	  umin = (myArray[i]-myArray[j]);
        } else {
          umin = (myArray[j]-myArray[i]);
        }
      }
      if(myArray[i] > myArray[j] ) {
        if(umin >= (myArray[i] - myArray[j]) ) {
           umin = myArray[i] - myArray[j];
        }  // end of if
      } // end of first if   
        if(myArray[i] < myArray[j] ) {
         if(umin >= (myArray[j] - myArray[i]) ) {
            umin = myArray[j] - myArray[i];
           } // end of if
        }// end of if
    }// end of for loop
  } // end of for loop
      // output min
        cout << "Min Distance:" << umin << endl;
  
        //output pairs
        for(int i = 0; i < takeNum; i++) {
         for(int j = i+1; j < takeNum; j++) {
          if ((myArray[i]-myArray[j]) == umin) {
            pair1[i] = myArray[j];
            pair2[j] = myArray[i];
            cout << "Pair:" <<  pair1[i] << " " << pair2[i] << endl;
          } else if ( (myArray[j]-myArray[i]) == umin) {
              pair1[i] = myArray[i];
              pair2[i] = myArray[j];
             cout << "Pair:" <<  pair1[i] << " " << pair2[i] << endl;
            }
      }
    }
}