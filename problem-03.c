/*
Cho số tự nhiên N. Nhiệm vụ của bạn là hãy liệt kê tất cả các số có đúng ba ước số không vượt quá N.
Ví dụ : N =100, ta có các số 4, 9, 25, 49.

Gợi ý : Số có 3 ước là số có dạng p^2 trong đó p là số nguyên tố, bây giờ bạn cần liệt kê các số p <= √N. Khi đó bạn chỉ cần liệt kê các số nguyên tố từ 1 tới √N rồi in ra dạng bình phương của nó là được.

Đầu vào
Số nguyên dương N

Giới hạn
1≤N≤10^12

Đầu ra
Đưa ra kết quả trên một dòng
*/

#include <stdio.h>
#include <math.h>
#define ll long long 

int n = 1000000;
int prime[1000001];

void sang(){
    for(int i = 0; i <= n; i++){
        prime[i] = 1;
    }
    prime[0] = prime[1] = 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(prime[i] == 1){
            for(int j = i * i; j <= n; j += i){
                prime[j] = 0; 
            }
        }
    }
}

int main() {
    sang();
    ll n;
    scanf("%lld", &n);
    for(int i = 1; i <= sqrt(n); i++){
        if(prime[i]) {
            printf("%lld ", (ll)i * i);
        }
    }
    return 0;
}