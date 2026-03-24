#include <iostream>
#include <string>

using namespace std;

int main() {
    string hoten;
    string mssv;
    string khoa;

    // In l?i chào và h?i tên
    cout << "Xin chao! Vui long nhap ho va ten: ";
    getline(cin, hoten);

    // Nh?p mã s? sinh viên
    cout << "Vui long nhap MSSV: ";
    getline(cin, mssv);

    // Nh?p khóa
    cout << "Vui long nhap khoa: ";
    getline(cin, khoa);

    // In thông tin th? sinh viên
    cout << endl;
    cout << "----------The sinh vien----------" << endl << endl;
    cout << "Ho va ten:  " << hoten << endl << endl;
    cout << "MSSV:  " << mssv << endl << endl;
    cout << "Khoa:   " << khoa << endl;

    return 0;
}
