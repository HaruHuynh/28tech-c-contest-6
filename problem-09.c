/*
Tất cả các thành phố của Lineland đều nằm trên trục tọa độ Ox. Do đó, mỗi thành phố được liên kết với vị trí xi - tọa độ trên trục Ox. Không có hai thành phố được đặt tại một điểm. Cư dân Lineland thích gửi thư cho nhau. Một người chỉ có thể gửi thư nếu người nhận sống ở một thành phố khác. Chi phí gửi thư chính xác bằng khoảng cách giữa thành phố của người gửi và thành phố của người nhận. Đối với mỗi thành phố, hãy tính hai giá trị mini và maxi, trong đó mini là chi phí tối thiểu để gửi thư từ thành phố thứ i đến một thành phố khác và maxi là chi phí tối đa để gửi thư từ thành phố thứ i đến một số thành phố khác
Gợi ý : mini = khoảng cách nhỏ nhất giữa 2 thành phố đứng trước và đứng sau của thành phố hiện tại, maxi = khoảng cách lớn hơn tính từ thành phố hiện tại tới thành phố đầu tiên và từ thành phố hiện tại tới thành phố cuối cùng. Vì mảng đã sắp tăng dần nên mới có điều này.
- Đầu vào
Dòng đầu tiên là số nguyên dương n Dòng thứ hai chứa chuỗi n số nguyên khác nhau x1, x2, ..., xn (-10^9<= xi <=10^9), trong đó xi là tọa độ x của thành phố thứ i.
Tất cả các xi là khác biệt và theo thứ tự tăng dần.
- Đầu ra
Đối với mỗi thành phố in ra 2 giá trị mini và maxi trên 1 dòng.
+ Giới hạn
2 ≤ n ≤ 10^6
-10^9 ≤ xi ≤ 10^9
*/
#include <stdio.h>
#include <math.h>

    int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i <= n; i++){
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < n; i++){
        if(i == 0){
            printf("%d %d\n", a[1] - a[0], a[n - 1] - a[0]);
        }else if(i == n - 1){
            printf("%d %d\n", a[n - 1] - a[n - 2], a[n - 1] - a[0]);
        }else{
            printf("%d %d\n", (int)fmin(a[i] - a[i - 1], a[i + 1] - a[i]), (int)fmax(a[i] - a[0], a[n - 1] - a[i]));
        }
    }
    return 0;
}