#include <iostream>
using namespace std;
int xuat_hien(char* chuoi_hien_tai, char* chuoi_con) {
  int vi_tri = -1;
  int i = 0;
  int j = 0;
  while (chuoi_hien_tai[i] != '\0') {
    if (chuoi_hien_tai[i] == chuoi_con[j]) {
      vi_tri = i;
      j++;
    } else {
      j = 0;
    }
    i++;
  }
  if (chuoi_con[j] == '\0') {
    return vi_tri;
  } else {
    return -1;
  }
}
int main() {
  // Nhập chuỗi hiện tại
  char chuoi_hien_tai[100];
  cout << "Nhap chuoi hien tai: ";
  cin >> chuoi_hien_tai;
  // Nhập chuỗi con
  char chuoi_con[100];
  cout << "Nhap chuoi con: ";
  cin >> chuoi_con;

  // Tìm vị trí xuất hiện cuối cùng
  int vi_tri = xuat_hien(chuoi_hien_tai, chuoi_con);
  // Xuất kết quả
  if (vi_tri == -1) {
    cout << "Khong tim thay chuoi con trong chuoi hien tai!" << endl;
  } else {
    cout << "Vi tri xuat hien cuoi cung cua chuoi con la: " << vi_tri << endl;
  }
  return 0;
}
