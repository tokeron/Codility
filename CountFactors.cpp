//Codility: Stacks and Queues
//Task description: https://app.codility.com/programmers/lessons/10-prime_and_composite_numbers/count_factors/

int solution(int N) {
    if (N == 1)
        return 1;
    int counter = 0;
    int i = 0;
    for (; i*i < N; i++){
        if (N % i == 0){
            counter +=2;
        }
    }
    if (i*i == N){
        counter++;
    }
    return counter;
}
