#include <stdio.h>
#include <iostream>
using namespace std;

int Q[] = { 500, 200, 100, 50, 20, 10 };
int main(){
    int n, a, b;
    cin >> n;
    a=0; //���������� �����, r������� ����� ������
    for(int i = 0; i < 6; ++i){
        b = Q[i];
        a += n / b; //�������, ������� ��� ������ ������ � �����
        n = n % b;  //����� ������������� ������� �� ������� �� ������ ������
 }
 if(n > 0){
        a = -1;//��������� ������� �������, ������� �������� �� ������ ������
 }
     cout << a;
     return 0;
}
