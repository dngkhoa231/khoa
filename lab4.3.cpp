#include <iostream>
using namespace std;
char tim_ky_tu(char* chuoi, int i, int n) {
  // Kiểm tra tính hợp lệ của i
  if (i <= 0 || i > n) {
    return '!';
  }
  // Tạo mảng đếm số lần xuất hiện của mỗi ký tự
  int dem[256] = {0};
  for (int j = 0; j < n; j++) {
    dem[chuoi[j]]++;
  }
  // Duyệt qua mảng đếm
  for (int j = 0; j < 256; j++) {
    // Nếu ký tự xuất hiện i lần
    if (dem[j] == i) {
      return (char)j;
    }
  }
  // Không tìm thấy ký tự xuất hiện i lần
  return '!';
}
int main() {
  // Nhập chuỗi
  char chuoi[100];
  cout << "Nhap chuoi: ";
  cin >> chuoi;
  // Nhập số lần xuất hiện
  int i;
  cout << "Nhap so lan xuat hien: ";
  cin >> i;
  // Tìm ký tự
  int n = strlen(chuoi);
  char ky_tu = tim_ky_tu(chuoi, i, n);
  // Xuất kết quả
  if (ky_tu != '!') {
    cout << "Ky tu xuat hien " << i << " lan la: " << ky_tu << endl;
  } else {
    cout << "Khong tim thay ky tu xuat hien " << i << " lan!" << endl;
  }
  return 0;
}
