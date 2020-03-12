//Codility: Demo
//Task description: https://app.codility.com/programmers/lessons/7-stacks_and_queues/brackets/

#include <vector>
using std::vector;
using namespace std;
int solution(vector<int> &A) {
    int N = A.size();
    if (N == 0)
        return 1;
    vector<int> array(N+1, 0);
    for (auto it : A){
        if (it > 0 && it < N+1){
            array[it]++;
        }
    }
    for (int it = 1; it < N+1; it++){
        if (array[it] == 0){
            return it;
        }
    }
    return N+1;
}
