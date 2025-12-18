#include <iostream>

using namespace std;

int main(){
    // 선언만 -> 쓰레기값
    int a;
    // cout << a << endl;

    // 선언 + 초기화
    int b = 10;
    cout << b << endl;

    // C++ 11 : 자동 타입 추론
    // 변수에 저장하는 값에 형태에 따라 자료형이 자동으로 결정된다.
    // double
    auto c = 3.14;
    cout << c << endl;

    // 정수형 (int, short, long, long long)
    // 2 바이트 정수
    short s = 100;
    // 4 바이트 정수 (기본 자료형)
    int i = 1000;
    // 8 or 16 바이트 정수
    long l = 10000000000000L;
    long long ll = 10000000000000L;

    cout << "short : " << s << endl;
    cout << "int : " << i << endl;
    cout << "long : " << l << endl;
    cout << "long long : " << ll << endl;

    // 부호 없는 정수 (unsigned)
    unsigned int u1 = 400000000;
    cout << "unsigned int : " << u1 << endl;

    unsigned int u2 = -100; // 오류는 아니지만 이상한 값 저장
    cout << "unsigned int : " << u2 << endl;

    // 실수형 (float, double, long double)
    // 4 바이트, 소수점 약 6자리 정밀도
    
    float f = 3.14f;
    // 8 바이트, 소수점 약 15자리 정밀도
    double d = 3.141231241;
    // 더 높은 정밀도
    long double ld = 3.234325452525L;

    cout << "float : " << f << endl;
    cout << "double : " << d << endl;
    cout << "long double : " << ld << endl;

    // 문자형 (char, wchar_t)
    char c1 = 'A';
    cout << "char : " << c1 << endl;

    // 한글은 3바이트임. char은 1바이트라서 overflow
    // char c2 = '가';
    // cout << "char : " << c2 << endl;
    
    // wchar_t c3 = '가';
    // cout << "char : " << c3 << endl;

    string str1 = "가";
    cout << "string : " << str1 << endl;

    // 불리언형
    bool isReady = true;
    bool isDone = false;

    cout << "bool : " << isReady << endl;
    cout << "bool : " << isDone << endl;

    // 문자열 (C vs C++)
    char cstr[] = "Hello C"; //C 스타일
    string cppstr = "Hello C++"; //C++ 스타일

    cout << "C 문자열 : " << cstr << endl;
    cout << "C++ 문자열 : " << cppstr << endl;

    // 상수
    // 프로그램 실행시 변수로 만들어지지만 값 변경이 불가능하다.
    const double PI = 3.14159;
    // 컴파일 단계에서 실제 값으로 코드가 변경되어 실행 파일이 만들어진다.
    constexpr int SIZE = 100;

    cout << "PI : " << PI << endl;
    cout << "SIZE: " << SIZE << endl;

    // 타입 추론
    // 변수에 저장하는 값을 보고 변수의 타입이 결정된다.
    // int
    auto x = 42;
    // double
    auto y = 3.14;
    // 지정해준 변수의 타입과 동일 타입으로 지정된다.
    // 변수 y와 동일한 타입으로 지정된다.
    decltype(y) z = 2.71;


    cout << "x : " << x << endl;
    cout << "y : " << y << endl;
    cout << "z : " << z << endl;

    return 0;
}