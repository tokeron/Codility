//Codility: Stacks and Queues
//Task: https://app.codility.com/programmers/lessons/90-tasks_from_indeed_prime_2015_challenge/flood_depth/

#include <ostream>
#include <vector>
#include <algorithm>
#include <string>
#include <bits/stdc++.h>

using std::vector;
using std::string;
using namespace std;
using std::set;
using std::max;



int solution(vector<int> &A) {
    int N = A.size();
    vector<int> max_from_left(N, 0);
    vector<int> max_from_right(N, 0);
    //initialize vector of max height from left
    for (int i = 1 ; i < N; i++){
        max_from_left[i] = max(max_from_left[i-1], A[i-1]);
    }
    //initialize vector of max height from right
    for (int i = N-2 ; i >= 0; i--){
        max_from_right[i] = max(max_from_right[i+1], A[i+1]);
    }
    int max_depth=0;
    //find the max depth for each place. its 0 if no boundary from left or from right
    for (int i = 0 ; i < N; i++){
        int curr_depth = max(0, min(max_from_left[i], max_from_right[i]) - A[i]);
        max_depth = max(max_depth ,curr_depth);
    }
    return max_depth;
}
