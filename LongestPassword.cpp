//Codility: LongestPassword
//Task description: https://app.codility.com/programmers/lessons/90-tasks_from_indeed_prime_2015_challenge/longest_password/

#include <ostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <string>
#include <bits/stdc++.h>
using std::vector;
using std::string;
using std::unordered_map;
using namespace std;
using std::set;
using std::max;

bool checkValidity(string &S){
    int counter_char = 0;
    int counter_num = 0;
    for (auto ch : S){
        if (ch >= '0' && ch <= '9'){
            counter_num++;
        }else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')){
            counter_char++;
        }else{
            return false;
        }
    }
    if ((counter_char % 2 == 0) && (counter_num % 2 == 1)){
        return true;
    }else{
        return false;
    }
}

int solution(string &S) {
    vector<string> words;
    string temp;
    for (int i = 0; i < S.length(); i++){
        if (S[i] == ' '){
            words.push_back(temp);
            temp = "";
        }else if (i == S.length()-1){
            temp += S[i];
            words.push_back(temp);
        }else{
            temp += S[i];
        }
    }
    int max_len = -1;
    for (auto pass : words){
        if (checkValidity(pass)){
            int len = pass.length();
            max_len = max(max_len, len);
        }
    }
    return max_len;
}
