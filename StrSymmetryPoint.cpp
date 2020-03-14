//Codility: Future training
//Task: https://app.codility.com/programmers/lessons/99-future_training/array_inversion_count/


#include <ostream>
using std::string;



int solution(string &S) {
    int N = S.length();
    if ((N == 0) || (N % 2 == 0)) return -1;
    if (N == 1) return 0;
    for (int i = 0; i < (N + 1) / 2; i++) {
        if (S[i] != S[N - 1 - i]) {
            return -1;
        }
    }
    return (N + 1) / 2;
}
