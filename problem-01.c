// Ở bài tập này yêu cầu bạn kiểm tra số nguyên tố với nhiều trường hợp khác nhau.
// Đầu vào
// Dòng đầu tiên là số lượng test case T

// Mỗi test case là một số nguyên n
// Giới hạn: 1≤T≤1000 - 0≤n≤10^6

// Đầu ra
// In ra kết quả mỗi test case trên một dòng. In YES nếu n là số nguyên tố, ngược lại in NO.

#include <stdio.h>
#include <math.h>

int n = 1000000;
int prime[1000001];

void sang(){
    for(int i = 0; i <= n; i++){
        prime[i] = 1; // Giả sử tất cả các số đều là số nguyên tố
    }

    prime[0] = prime[1] = 0; // 0 và 1 không phải số nguyên tố
    for(int i = 2; i <= sqrt(n); i++){ // Sàng từ 2 đến căn bậc hai của n
        if(prime[i] == 1){ // Nếu i là số nguyên tố
            for(int j = i * i; j <= n; j += i){ // Loại bỏ các bội số của i bắt đầu từ i*i, j += i tức là tăng j lên i đơn vị
                prime[j] = 0; // Đánh dấu j không phải số nguyên tố
            } 
        }
    }
}

int main() {
    sang();
    int T;
    scanf("%d", &T);
    while(T--){
        int n;
        scanf("%d", &n);
        if(prime[n]) {
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
    return 0;
}




// int isPrime(int n){
//     if(n < 2) return 0;
//     for(int i = 2; i <= sqrt(n); i++){
//         if(n % i == 0) return 0;
//     }
//     return 1;
// }

// int main() {
//     int T;
//     scanf("%d", &T);
//     int a[T];
//     for(int i = 0; i < T; i++) scanf("%d", &a[i]);

//     for(int i = 0; i < T; i++){
//         if(isPrime(a[i])) printf("YES\n");
//         else printf("NO\n");
//     }
//     return 0;
// }