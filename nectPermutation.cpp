#include <bits/stdc++.h>
using namespace std;

// approach
// * reverse from behind and get arr[i] < arr[i+1] and store idx = 1
// * again reverse from behind and get idx2 where arr[idx2] > arr[idx1]
// * swap the idx1 and idx2
//  we do this to get the closest permuation from the number
// * reverse it from idx1 + 1 till last array element to get lowest possible permutation


void nextPermutation(vector<int>& nums) {
        int n = nums.size(), k, l;
    	for (k = n - 2; k >= 0; k--) {
            if (nums[k] < nums[k + 1]) {
                break;
            }
        }
    	if (k < 0) {
    	    reverse(nums.begin(), nums.end());
    	} else {
    	    for (l = n - 1; l > k; l--) {
                if (nums[l] > nums[k]) {
                    break;
                }
            } 
    	    swap(nums[k], nums[l]);
    	    reverse(nums.begin() + k + 1, nums.end());
        }
    }

    int main(){
    vector<int> vect;
    vect.push_back(1);
    vect.push_back(2);
    vect.push_back(3);
    nextPermutation(vect);
    for (int x : vect)
        cout << x << " ";
    return 0;
}
