#include <iostream>

using namespace std;

int main(){

    // 산술 연산자
    
    int a = 10;
    int b = 3;

    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;
    cout << "a / b = " << a / b << endl;
    cout << "a % b = " << a % b << endl;

    cout << "-----------------------------------------" << endl;

    // 대입 연산자
    // 우측의 값을 좌측의 변수에 저장한다.
    int x = 5;

    // x = x + 5
    x += 5;
    cout << "x : " << x << endl;

    // x = x - 5
    x -= 5;
    cout << "x : " << x << endl;

    cout << "-----------------------------------------" << endl;

    // 증감 연산자
    int a2 = 5;
    cout << "a2 : " << a2 <<endl;

    a2++;
    cout << "a2 : " << a2 <<endl;

    ++a2;
    cout << "a2 : " << a2 <<endl;

    a2--;
    cout << "a2 : " << a2 <<endl;

    --a2;
    cout << "a2 : " << a2 <<endl;

    int z1 = ++a2;
    cout << "a2, z1 : " << a2 << "," << z1 <<endl;

    int z2 = a2++;
    cout << "a2, z2 : " << a2 << "," << z2 <<endl;

    cout << "-----------------------------------------" << endl;
    
    // 비교 연산자
    int a3 =10, b3 = 20;
    cout << (a3 == b3) << endl; // 0
    cout << (a3 != b3) << endl; // 1
    cout << (a3 < b3) << endl; // 1

    cout << "-----------------------------------------" << endl;

    // 논리 연산자
    bool t = true, f = false;

    cout << (t && f) << endl;  // 0
    cout << (t || f) << endl;  // 1
    cout << (!t) << endl;  // 0

    cout << "-----------------------------------------" << endl;

    // 조건(삼함) 연산자
    int a4 = 10, b4 = 20;
    int max = (a4>b4) ? a4 : b4; 
    cout << "max : " << max << endl; 

    cout << "-----------------------------------------" << endl;

    // sizeof

    cout << sizeof(int) << endl;
    cout << sizeof(long) << endl;


    return 0;
}