/*
Adrian Brocke
Count Elements leet code challenge
Given an integer array arr, count element x such that x + 1 is also in arr.

If there're duplicates in arr, count them seperately.
*/

#include "CountingElements.h"


int main(void) 
{

	vector<int> test = { 4, 1, 2, 1, 2, 3, 7, 56, 23, 10};
	
	
	cout << "diameter of tree:" << CountingElements::countElements(root) << endl; 

	cin.get();
	return 0;
}