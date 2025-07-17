#include <iostream>

// //입출력
// int main(){
//     int i,j;
//     std::cout << "Enter num_1 "; //문자열 출력
//     std::cin >> i; // 사용자에게 정수를 입력받아 i에 저장

//     std::cout << "Enter num_2 "; //문자열 출력
//     std::cin >> j; // 사용자에게 정수를 입력받아 2에 저장

//     std::cout << "num_1 + num_2 = " << i+j << std::endl; //두 수의 합 출력 

//     return 0;
// }

// 아스키 코드 출력ㄴ하기
int main(){
    std::cout<<"아스키 코드 출력하기 [32~126]:\n";

    for (char i=32; i<=126; i++){
        std::cout<<i<<((i%16==15) ? '\n' : ' ');
    }
    
    return 0;
}