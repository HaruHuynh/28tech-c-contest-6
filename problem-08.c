/*
Bộ phim "Die Hard" mới vừa được phát hành! Có n người tại phòng vé rạp chiếu phim đứng thành một hàng lớn. Mỗi người trong số họ có một tờ tiền mệnh giá 100, 50 hoặc 25 rúp. Một vé "Die Hard" có giá 25 rúp. Nhân viên đặt phòng có thể bán vé cho mỗi người và trả tiền thừa nếu ban đầu anh ta không có tiền và bán vé theo đúng thứ tự mọi người trong hàng không?
Gợi ý : Khi người khách mua vé đưa tờ 50 hoặc 100 thì cần kiểm tra xem có trả lại được hay không, đưa tờ 25 thì không cần trả lại. Việc trả lại không phải cứ lấy số tiền đang có và so sánh với số tiền cần trả mà quan trọng là có tờ 25 hay không? Ví dụ nhân viên đang có 10 tờ 50 rúp nhưng không thể trả lại khi khách đưa tờ 100 hay 50 vì không có tờ 25 rúp để trả.
*/
#include <stdio.h>

int check(int a[], int n){
    int dem25 = 0, dem50 = 0;
    for(int i = 0; i < n; i++){
        if(a[i] == 25) ++dem25;
        else if(a[i] == 50){
            if(dem25 == 0) return 0;
            --dem25;
            ++dem50;
        }
        else{
            if(dem25 == 0 || (dem25 * 25 + dem50 * 50 < 75)) return 0;
            if(dem50 != 0){
                --dem50; --dem25;
            }
            else{
                dem25 -= 3;
            }
        }
    }
    return 1;
}

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    if(check(a, n)) printf("YES\n");
    else printf("NO\n");
    return 0;
}








// int main() {
//     int n;
//     scanf("%d", &n);
//     int count25 = 0;
//     int count50 = 0;
//     for(int i = 0; i < n; i++){
//         int bill;
//         scanf("%d", &bill);
//         if(bill == 25){
//             count25++;
//         } else if(bill == 50){
//             if(count25 > 0){
//                 count25--;
//                 count50++;
//             } else {
//                 printf("NO\n");
//                 return 0;
//             }
//         } else if(bill == 100){
//             if(count50 > 0 && count25 > 0){
//                 count50--;
//                 count25--;
//             } else if(count25 >= 3){
//                 count25 -= 3;
//             } else {
//                 printf("NO\n");
//                 return 0;
//             }
//         }
//     }
//     printf("YES\n");
//     return 0;
// }
