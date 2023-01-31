#include <iostream>
#include <cstdio>
#include <cstring>

//-------------------Exrc 1 indeces of two element by sum == target 
void getIndexOfElem();
//-------------------Exrc 2 check if polindrome
void getPolindrome();

//-------------------Exrc 3
//void getRomanNum();
//void isPolindrome();

void getArithmetic(int& x, int& y);
int main(void) {
    //getRomanNum();
    
    //isPolindrome();

    int a = 10; int b = 2;
    getArithmetic(a, b);
    getPolindrome();
    getIndexOfElem();
}

void getIndexOfElem() {
    int nums[] = { 4, 5, 4, 4 };
    int target = 9;

    for (int i = 0; i <= (sizeof(nums) / sizeof(nums[0]) - 1); i++) {
        if (nums[i] + nums[i + 1] == target) {
            std::cout << "I find this indices: " << i << i + 1 << std::endl;
        }
    }
}

void getPolindrome() {
    int number, numberHolder, reminder, revNum = 0;

    std::cout << "Enter the number to reverse: " << std::endl;
    std::cin >> number;
    numberHolder = number;

    while (number > 0)
    {
        reminder = number % 10;
        number /= 10;
        revNum = (revNum * 10) + reminder;
    }
    std::cout << "Reverse number is: " << revNum << std::endl;
    std::cout << "NumberHolder is: " << numberHolder << std::endl;
    (numberHolder == revNum) ? std::cout << "True" : std::cout << "False" << std::endl;
}

void getArithmetic(int &x, int &y) {
    std::cout << "Result: " << x + y << std::endl;
}
//---------why not?
//void isPolindrome() {
//    std::string name = "ama";
//
//    std::string newName;
//
//    for (int i = name.size(); i >= 0; --i) {
//        newName += name[i];
//    }
//    std::cout << newName << std::endl;
//    std::cout << name << std::endl;
//    
//    if (newName.compare(name) == 0) {
//        std::cout << "Strings are equal!" << std::endl;
//    }
//    else {
//        std::cout << "Not equal" << std::endl;
//    }
//}

//--------Roman numbers

//void getRomanNum() {
//    int I = 1, V = 5, X = 10, L = 50, C = 100, D = 500, M = 1000;
//    std::string romanNums;
//    std::cout << "Please enter the roman type of num: " << std::endl;
//    std::cin >> romanNums;
//    int result = 0;
//    int index;
//
//    for (int i = 0; i < romanNums.size(); i++) {
//        
//        if (index[i] < i + 1) {
//            romanNums[i] 
//        }
//
//        if (romanNums[i] == 'I')
//        {
//            index = 0;
//            result += I;
//        }
//        else if (romanNums[i] == 'V') {
//            index = 1;
//            result += V;
//        }
//        else if (romanNums[i] == 'X') {
//            index = 2;
//            result += X;
//        }
//        else if (romanNums[i] == 'L') {
//            index = 3;
//            result += L;
//        }
//        else if (romanNums[i] == 'C') {
//            index = 4;
//            result += C;
//        }
//        else if (romanNums[i] == 'D') {
//            index = 5;
//            result += D;
//        }
//        else if (romanNums[i] == 'M') {
//            index = 6;
//            result += M;
//        }
//        
//    }
//    std::cout << "Result is: " << result << std::endl;
//
//}





























