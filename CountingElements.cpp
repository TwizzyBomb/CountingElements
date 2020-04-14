#include "CountingElements.h"

int CountingElements::countElements(vector<int>& arr) {
	int count = 0;

	/* an unordered set contains one of each element */
	unordered_set<int> setOfNums;
	
	/* fill into a hash set */
	for (int i = 0; i < arr.size(); i++)
		setOfNums.insert(arr.at(i));
	
	/* check if arr.at(i)+1 is found, increase count if so*/
	for (int i = 0; i < arr.size(); i++)
		if (setOfNums.find(arr.at(i) + 1) != setOfNums.end())
			count++;

	return count;
}