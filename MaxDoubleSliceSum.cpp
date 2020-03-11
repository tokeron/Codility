//Codibility: maximum slice problem
//Task description: https://app.codility.com/programmers/lessons/9-maximum_slice_problem/max_double_slice_sum/

#include <iostream>
#include <stack>
#include <vector>
using namespace std;


int solution(vector<int> &A) {
    int N = A.size();
    vector<int> max_from_right(A.size(),0);
    vector<int> max_from_left(A.size(),0);
    for (int i = 1; i < N; i++){
        max_from_left[i] =
                (max_from_left[i-1] < 0) ? A[i] : max_from_left[i-1] + A[i];
    }
    for (int i = N-2; i >= 0; i--){
        max_from_right[i] =
                (max_from_right[i+1] < 0) ? A[i] : max_from_right[i+1] + A[i];
    }
    int max_double_slice = 0;
    for (int i = 1; i < N-1; i++){
        int max_sum_for_i = 0;
        if (max_from_left[i-1] > 0) max_sum_for_i += max_from_left[i-1];
        if (max_from_right[i+1] > 0) max_sum_for_i += max_from_right[i+1];
        if (max_sum_for_i > max_double_slice) {
            max_double_slice = max_sum_for_i;
        }
    }
    return max_double_slice;
}
