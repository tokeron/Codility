//Codibility: maximum slice problem
//Task description: https://app.codility.com/programmers/lessons/9-maximum_slice_problem/max_profit/

#include <vector>
using namespace std;
using std::min;
using std::max;

int solution(vector<int> &A) {
    if (A.size() < 2) return 0;
    int N = A.size();
    vector<int> max_from_here(N);
    int maximun = A[N-1];
    for (int i = N-1; i >=0 ; i-- ){
        maximun = max(maximun, A[i]);
        max_from_here[i] = maximun;
    }
    int max_profit = 0;
    for (int i = 0; i < N;i++){
        max_profit = max(max_profit, (max_from_here[i] - A[i]));
    }
    return max_profit;
}
