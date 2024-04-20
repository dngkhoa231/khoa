#include <iostream>
#include <string>
using namespace std;

struct Ngay {
    int ngay;
    int thang;
    int nam;
} ngay;

struct Thoitiet {
    Ngay ngay;
    int nhietDoCaoNhat;
    int nhietDoThapNhat;
    int tocDoGioLonNhat;
};
void nhapNgayThang(){
    
    cout << "Nhap thang: "<<endl;
    cin >> ngay.thang;
    cout << "nhap nam: "<<endl;
    cin >>ngay.nam;
}
void nhapThoiTiet(Thoitiet& thoiTiet,Ngay& ngay) {
    cout << "Nhap ngay: ";
    cin >> thoiTiet.ngay.ngay;
    thoiTiet.ngay.thang = ngay.thang;
    thoiTiet.ngay.nam = ngay.nam;
}

void nhietDoThapNhat(Thoitiet arr_thoi_tiet[], int size) {
    int min_temp = arr_thoi_tiet[0].nhietDoThapNhat;
    Ngay min_temp_day = arr_thoi_tiet[0].ngay;

    for (int i = 1; i < size; i++) {
        if (arr_thoi_tiet[i].nhietDoThapNhat < min_temp) {
            min_temp = arr_thoi_tiet[i].nhietDoThapNhat;
            min_temp_day = arr_thoi_tiet[i].ngay;
        }
    }
    cout << "Ngay co nhiet do thap nhat: " << min_temp_day.ngay << "/" << min_temp_day.thang << "/" << min_temp_day.nam << endl;
}

int main() {
    nhapNgayThang();
    Thoitiet arr_thoi_tiet[30];
    for (int i = 0; i < 30; i++) {
        nhapThoiTiet(arr_thoi_tiet[i],ngay);
    }
    nhietDoThapNhat(arr_thoi_tiet, 30);
    return 0;
}