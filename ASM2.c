/******************************************************************************
 * Họ và tên: Phan Lạc Đoàn Long
 * MSSV:      PS47837
 * Lớp:       CS21301
 *****************************************************************************/

// Tạo file asm2.c và hoàn thiện nội dung Assignment từ nội dung file asm1.c


// Danh sách các chức năng trong ASM1:
// 1. Chức năng số 1: Kiểm tra số nguyên
// 2. Chức năng số 2. Tìm Ước số chung và bội số chung của 2 số 
// 3. Chức năng số 3: Chương trình tính tiền cho quán Karaoke
// 4. Chức năng số 4: Tính tiền điện 
// 5. Chức năng số 5: Chức năng đổi tiền 
// 6. Chức năng số 6: Xây dựng chức năng tính lãi suất vay ngân hàng vay trả góp 
// 7. Chức năng số 7: Xây dựng chương trình vay tiền mua xe
// 8. Chức năng số 8: Sắp xếp thông tin sinh viên
// 9. Chức năng số 9: Xây dựng game FPOLY-LOTT
// 10. Chức năng số 10: Xây dựng chương trình tính toán phân số 
// Viết chương trình C thực hiện các chức năng trên

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

// khai báo các hàm chức năng
void chucNang1(); void chucNang2(); void chucNang3(); 
void chucNang4(); void chucNang5(); void chucNang6(); 
void chucNang7(); void chucNang8(); void chucNang9(); 
void chucNang10();


int main() {
    int chonChucNang;

    do {
        printf("Chon chuc nang:\n");
        printf("1. Kiem tra so nguyen\n");
        printf("2. Tim Uoc so chung va boi so chung cua 2 so\n");
        printf("3. Tinh tien cho quan Karaoke\n");
        printf("4. Tinh tien dien\n");
        printf("5. Chuc nang doi tien\n");
        printf("6. Tinh lai suat vay ngan hang vay tra gop\n");
        printf("7. Vay tien mua xe\n");
        printf("8. Sap xep thong tin sinh vien\n");
        printf("9. Game FPOLY-LOTT\n");
        printf("10. Tinh toan phan so\n");
        printf("0. Thoat\n");
        printf("Nhap lua chon cua ban: ");
        scanf("%d", &chonChucNang);

        switch (chonChucNang) {
            case 1:
                // Gọi hàm kiểm tra số nguyên
                printf("DA CHON CHUC NANG 1: KIEM TRA SO NGUYEN\n");
                chucNang1();
                break;
            case 2:
                // Gọi hàm tìm Ước số chung và bội số chung
                printf("DA CHON CHUC NANG 2: TIM UOC SO CHUNG VA BOI SO CHUNG CUA 2 SO\n");
                chucNang2();
                break;
            case 3:
                // Gọi hàm tính tiền cho quán Karaoke
                printf("DA CHON CHUC NANG 3: TINH TIEN CHO QUAN KARAOKE\n");
                chucNang3();
                break;
            case 4:
                // Gọi hàm tính tiền điện
                printf("DA CHON CHUC NANG 4: TINH TIEN DIEN\n");
                chucNang4();
                break;
            case 5:
                // Gọi hàm đổi tiền
                printf("DA CHON CHUC NANG 5: DOI TIEN\n");
                chucNang5();
                break;
            case 6:
                // Gọi hàm tính lãi suất vay ngân hàng
                printf("DA CHON CHUC NANG 6: TINH LAI SUAT VAY NGAN HANG VAY TRA GOP\n");
                chucNang6();
                break;
            case 7:
                // Gọi hàm vay tiền mua xe
                printf("DA CHON CHUC NANG 7: VAY TIEN MUA XE\n");
                chucNang7();
                break;
            case 8:
                // Gọi hàm sắp xếp thông tin sinh viên
                printf("DA CHON CHUC NANG 8: SAP XEP THONG TIN SINH VIEN\n");
                chucNang8();
                break;
            case 9:
                // Gọi hàm game FPOLY-LOTT
                printf("DA CHON CHUC NANG 9: GAME FPOLY-LOTT\n");
                chucNang9();
                break;
            case 10:
                // Gọi hàm tính toán phân số
                printf("DA CHON CHUC NANG 10: TINH TOAN PHAN SO\n");
                chucNang10();
                break;
            case 0:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le. Vui long chon lai.\n");
        }
    } while (chonChucNang != 0);

    return 0;
}    

void chucNang1() {
        // ktra số nguyên
        double n;
        printf("Nhập số cần kiểm tra: ");
        scanf("%lf", &n);

        if (n == (int)n) {
            printf("%.1lf là số nguyên.\n", n);
        } else {
            printf("%.1lf không phải là số nguyên.\n", n);
        }

        // ktra số nguyên tố
        if (n < 2) {
            printf("%.1lf không phải là số nguyên tố.\n", n);
        } else {
            int laSoNguyenTo = 1; // Giả sử n là số nguyên tố
            for (int i = 2; i <= sqrt(n); i++) {
                if ((int)n % i == 0) {
                    laSoNguyenTo = 0; // n không phải là số nguyên tố
                    break;
                }
            }
            if (laSoNguyenTo) {
                printf("%.1lf là số nguyên tố.\n", n);
            } else {
                printf("%.1lf không phải là số nguyên tố.\n", n);
            }
        }

        // ktra số chính phương
        if (n < 0) {
            printf("%.1lf không phải là số chính phương.\n", n);
        } else {
            int sqrtN = (int)sqrt(n);
            if (sqrtN * sqrtN == (int)n) {
                printf("%.1lf là số chính phương.\n", n);
            } else {
                printf("%.1lf không phải là số chính phương.\n", n);
            }
        }
    }

void chucNang2() {
        // Tìm Ước số chung và bội số chung của 2 số 
        int a, b;
        printf("Nhập số thứ nhất: ");
        scanf("%d", &a);
        printf("Nhập số thứ hai: ");
        scanf("%d", &b);

        // Tìm Ước số chung lớn nhất (UCLN)
        int ucln = 1;

        int min = (a < b);
        if (min) {
            min = a;
        } else {
            min = b;
        }

        for (int i = 1; i <= min; i++) {
            if (a % i == 0 && b % i == 0) {
                ucln = i;
            }
        }
        printf("Ước số chung lớn nhất là: %d\n", ucln);

        // Tính bội số chung nhỏ nhất (BCNN)
        int bcnn = (a * b) / ucln;
        printf("Bội số chung nhỏ nhất là: %d\n", bcnn);
}

void chucNang3() {
        // Chương trình tính tiền cho quán Karaoke
        float batDau, ketThuc;
        printf("Nhập giờ bắt đầu (12-23): ");
        scanf("%f", &batDau);
        printf("Nhập giờ kết thúc (12-23): ");
        scanf("%f", &ketThuc);

        if (batDau < 12 || batDau > 23 || ketThuc < 12 || ketThuc > 23 || ketThuc <= batDau) {
            printf("Giờ không hợp lệ.\n");
            return;
        }

        float gioSuDung = ketThuc - batDau;
        float tongTien;

        if (gioSuDung <= 3){
            tongTien = gioSuDung * 150000;
        } else {
            tongTien = 3 * 150000 + (gioSuDung - 3) * 150000 * 0.7;
        }

        if (batDau >= 14 && ketThuc <= 17){
            tongTien = tongTien * 0.9;
        }

        printf("Tổng tiền phải trả: %.2f VND\n", tongTien);
}

void chucNang4() {
    // Tính tiền điện 
    int kwh;
    int tongTien;
    printf("Nhập số kWh tiêu thụ: ");
    scanf("%d", &kwh);

    if (kwh <= 50) {
        tongTien = kwh * 1678;
    } else if (kwh <= 100) {
        tongTien = 50 * 1678 + (kwh - 50) * 1734;
    } else if (kwh <= 200) {
        tongTien = 50 * 1678 + 50 * 1734 + (kwh - 100) * 2014;
    } else if (kwh <= 300) {
        tongTien = 50 * 1678 + 50 * 1734 + 100 * 2014 + (kwh - 200) * 2536;
    } else if (kwh <= 400) {
        tongTien = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + (kwh - 300) * 2834;
    } else {
        tongTien = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + 100 * 2834 + (kwh -400) *2927;
    }

    printf("Tổng tiền điện phải trả: %d VND\n", tongTien);
}

void chucNang5() {
        // Chức năng đổi tiền 
        int money;
        int d[] = {500,200,100,50,20,10,5,2,1};
        printf("Nhập số tiền cần đổi: ");
        scanf("%d", &money);

        for (int i = 0; i < 9; i++) {
            if (money >= d[i]) {
                int count = money / d[i];
                printf("%d tờ %d\n", count, d[i]);
                money %= d[i];
            }
        }
}

void chucNang6() {
    // Tính lãi suất vay ngân hàng vay trả góp
    double tienVay;
    printf("Hãy nhập số tiền vay: ");
    scanf("%lf", &tienVay);

    double laiSuat = 0.05; // Lãi suất 5% mỗi tháng
    int kyHan = 12; // Kỳ hạn vay 12 tháng

    double gocPhaiTra = tienVay / kyHan; // Số tiền gốc phải trả mỗi tháng
    double tongTienPhaiTra = 0; // Tổng tiền phải trả

    printf("Tháng\tLãi phải trả\tGốc phải trả\tTổng phải trả\tCòn lại\n");
    for (int thang = 1; thang <= kyHan; thang++) {
        double laiPhaiTra = tienVay * laiSuat; // Lãi phải trả tháng này
        double tienPhaiTra = gocPhaiTra + laiPhaiTra; // Tổng tiền phải trả tháng này
        tongTienPhaiTra += tienPhaiTra; // Cộng dồn tổng tiền phải trả

        tienVay -= gocPhaiTra; // Giảm số tiền vay còn lại
        
        printf("%d\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n", thang, laiPhaiTra, gocPhaiTra, tienPhaiTra, (tienVay < 1) ? 0 : tienVay  );

    }
}

void chucNang7() {
    // Chức năng vay tiền mua xe
    float phanTramVay;
    printf("Nhập vào số phần trăm vay: ");
    scanf("%f", &phanTramVay);
    
    double tongVay = 500 * 1000000 * (phanTramVay / 100); // Tổng số tiền vay
    double traTruoc = 500 * 1000000 - tongVay; // Số tiền trả trước
    int kyHan = 24 * 12; // Kỳ hạn vay 24 năm (tính theo tháng)
    double laiSuat = 0.072 / 12; // Lãi suất hàng
    double gocPhaiTra = tongVay / kyHan; // Số tiền gốc phải trả mỗi tháng
    double tongTienPhaiTra = 0; // Tổng tiền phải trả

    printf("Số tiền trả trước: %.2f triệu VND\n", traTruoc);
    printf("Tháng\tLãi phải trả\tGốc phải trả\tTổng phải trả\tCòn lại\n");
    for (int thang = 1; thang <= kyHan; thang++) {
        double laiPhaiTra = tongVay * laiSuat; // Lãi phải trả tháng này
        double tienPhaiTra = gocPhaiTra + laiPhaiTra; // Tổng tiền phải trả tháng này
        tongTienPhaiTra += tienPhaiTra; // Cộng dồn tổng tiền phải trả

        tongVay -= gocPhaiTra; // Giảm số tiền vay còn lại
        
        printf("%d\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n", thang, laiPhaiTra, gocPhaiTra, tienPhaiTra, (tongVay < 1) ? 0 : tongVay  );

    }
}

void chucNang8() {
    // Chức năng sắp xếp thông tin sinh viên

    int n;
    printf("Nhap so sinh vien: ");
    scanf("%d", &n);
    getchar();

    char ten[n][50];
    float diem[n];

    // Nhập dữ liệu
    for (int i = 0; i < n; i++) {
        printf("Nhap ten sinh vien %d: ", i+1);
        fgets(ten[i], sizeof(ten[i]), stdin);
        ten[i][strcspn(ten[i], "\n")] = 0;

        printf("Nhap diem: ");
        scanf("%f", &diem[i]);
        getchar();
    }

    // Sắp xếp giảm dần theo điểm (đổi cả tên và điểm)
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (diem[i] < diem[j]) {
                float tempDiem = diem[i];
                diem[i] = diem[j];
                diem[j] = tempDiem;

                char tempTen[50];
                strcpy(tempTen, ten[i]);
                strcpy(ten[i], ten[j]);
                strcpy(ten[j], tempTen);
            }
        }
    }

    // kết quả sếp loai học lực
    printf("\nDanh sach hoc luc:\n");
    for (int i = 0; i < n; i++) {
        printf("%s - %.2f - ", ten[i], diem[i]);
        if (diem[i] >= 9.0) {
            printf("Hoc luc xuat sac\n");
        } else if (diem[i] >= 8.0) {
            printf("Hoc luc gioi\n");
        } else if (diem[i] >= 6.5) {
            printf("Hoc luc kha\n");
        } else if (diem[i] >= 5.0) {
            printf("Hoc luc trung binh\n");
        } else {
            printf("Hoc luc yeu\n");
        }
    }

    // Xuất kết quả
    printf("\nDanh sach sau sap xep:\n");
    for (int i = 0; i < n; i++) {
        printf("%s - %.2f\n", ten[i], diem[i]);
    }
}

void chucNang9() {
    // Chức năng game FPOLY-LOTT
    int so1, so2;
    printf("Nhap so thu 1 (01-15): ");
    scanf("%d", &so1);
    printf("Nhap so thu 2 (01-15): ");
    scanf("%d", &so2);

    srand(time(NULL));
    int may1 = rand() % 15 + 1; 
    int may2 = rand() % 15 + 1;
    printf("Ket qua he thong: %d va %d\n", may1, may2);

    int count = 0;
    if (so1 == may1 || so1 == may2) count++;
    if (so2 == may1 || so2 == may2) count++;

    if (count == 2) printf("Chuc mung ban da trung giai nhat\n"); 
    else if (count == 1) printf("Chuc mung ban da trung giai nhi\n"); 
    else printf("Chuc ban may man lan sau\n");
}

void chucNang10() {
    // Chức năng tính toán phân số 
    int tu1, mau1, tu2, mau2;
    printf("Nhap phan so 1 (tu mau): ");
    scanf("%d / %d", &tu1, &mau1); 
    printf("Nhap phan so 2 (tu mau): ");
    scanf("%d / %d", &tu2, &mau2); 

    if (mau1 == 0 || mau2 == 0) {
        printf("Mau so phai khac 0!\n");
        return;
    }

    printf("Tong: %d/%d\n", (tu1 * mau2 + tu2 * mau1), (mau1 * mau2));
    printf("Hieu: %d/%d\n", (tu1 * mau2 - tu2 * mau1), (mau1 * mau2)); 
    printf("Tich: %d/%d\n", (tu1 * tu2), (mau1 * mau2)); 
    if (tu2 != 0) {
        printf("Thuong: %d/%d\n", (tu1 * mau2), (mau1 * tu2)); 
    } else {
        printf("Khong the chia vi phan so thu 2 bang 0\n");
    }
}



