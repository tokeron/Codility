//codibility: Stacks and Queues
//task description: https://app.codility.com/programmers/lessons/7-stacks_and_queues/brackets/

#include <iostream>
#include <string>
using namespace std;

int solution(string &S) {
    stack<char> B;
    for (int i = 0; i < S.size(); i++){
        if (S[i] == '(' || S[i] == '[' || S[i] == '{'){
            B.push(S[i]);
        }else{
            if (S[i] == ')'){
                if (B.top() != '('){
                    return 0;
                }else B.pop();
            }else if (S[i] == '}'){
                if (B.top() != '{'){
                    return 0;
                }else B.pop();
            }else if (B.top() != '['){
                return 0;
            }else B.pop();
        }
    }
    if (B.empty()) return 1;
    else return 0;
}
