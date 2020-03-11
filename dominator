//codibility: Leader
//task description: https://app.codility.com/programmers/lessons/8-leader/dominator/

#include <iostream>
#include <stack>
#include <vector>
using namespace std;


int solution(vector<int> &A) {
    if (A.empty())
        return -1;
    stack<int> B;
    for (auto it : A){
        if (B.empty()) B.push(it);
        else{
            if (B.top() == it){
                B.push(it);
            }else{
                B.pop();
            }
        }
    }int counter = 0;
    int candidate = B.top();
    int index = 0;
    for (int i = 0; i < A.size(); i++){
        if (A[i] == candidate) {
            counter++;
            index = i;
        }
    }
    if (counter > (A.size()/2)) return index;
    return -1;
}
