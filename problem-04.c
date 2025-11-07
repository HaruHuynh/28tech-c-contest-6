/* 
Cho số tự nhiên N. Nhiệm vụ của bạn là hãy đếm tất cả các số có đúng ba ước số không vượt quá N. Ví dụ N =100, ta có các số 4.
Gợi ý : Số T-prime là số có dạng p^2, với p là số nguyên tố. Nên bài này các bạn chỉ cần tìm được các số nguyên tố <= sqrt(N) là giải quyết được bài toán.

Đầu vào
Dòng duy nhất chứa số nguyên dương N

Giới hạn
1≤N≤10^12

Đầu ra
Đưa ra kết quả mỗi theo từng dòng.
*/

#include <stdio.h>
#include <math.h>

#define ll long long 

int n = 1000000;
int prime[1000001];

void sang() {
    for(int i = 0; i <= n; i++){
        prime[i] = 1;
    }
    prime[0] = prime[1] = 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(prime[i] == 1){
            for(int j = i * i; j <= n; j+=i){
                prime[j] = 0;
            }
        }
    }
}

int main() {
    sang();
    ll n;
    scanf("%lld", &n);
    ll count = 0;
    for(int i = 1; i <= sqrt(n); i++){
        if(prime[i]){
            count++;
        }
    }
    printf("%lld", count);
    return 0;
}