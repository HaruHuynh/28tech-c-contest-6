// Ở bài tập này yêu cầu bạn kiểm tra số nguyên tố với nhiều trường hợp khác nhau.
// Đầu vào
// Dòng đầu tiên là số lượng test case T

// Mỗi test case là một số nguyên n
// Giới hạn: 1≤T≤1000 - 0≤n≤10^6

// Đầu ra
// In ra kết quả mỗi test case trên một dòng. In YES nếu n là số nguyên tố, ngược lại in NO.

#include <stdio.h>
#include <math.h>

int isPrime(int n){
    if(n < 2) return 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int T;
    scanf("%d", &T);
    int a[T];
    for(int i = 0; i < T; i++) scanf("%d", &a[i]);

    for(int i = 0; i < T; i++){
        if(isPrime(a[i])) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}