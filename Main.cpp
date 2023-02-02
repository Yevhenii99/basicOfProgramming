#include <iostream>
#include <string>



void getBudgetAndProfit();
void getAddressAndValue();
void getTwoPointers();
void getPlusToPointerValue();
void getCompareTwoPtrs();
void getVoidPtr();
void getConstPtrs();
void funcPlusTwoNum();

int main(void)
{
    //getAddressAndValue();
    //getBudgetAndProfit();
    //getTwoPointers();
    //getPlusToPointerValue();
    //getCompareTwoPtrs();
    //getConstPtrs();
    //getVoidPtr();
    //funcPlusTwoNum();
    //funcPlusTwoNum();
    //funcPlusTwoNum();

}

//Exr--2.1
void getBudgetAndProfit() {
    int budget = 1000, profit = 200;
    int* pBudget = &budget;
    int* pProfit;
    pProfit = &profit;
    std::cout << "Address of var budget: " << pBudget << " Value of var budget: " << *pBudget << std::endl;
    std::cout << "Address of var profit: " << pProfit << " Value of var profit: " << *pProfit << std::endl;
    *pBudget = 1456; //Change first value by using pointer 
    std::cout << "New value of budget: " << budget << std::endl;//Value of var budget was changed on 1456
}

//Exr--1
void getAddressAndValue() {
    std::string name;

    std::cout << "Enter your name " << std::endl;
    std::cin >> name;
    std::string* pName = &name;

    int age;
    std::cout << "Enter your age please " << std::endl;
    std::cin >> age;
    int* pAge = &age;

    std::cout << "Address of var name " << pName << std::endl;
    std::cout << "Value in var name " << *pName << std::endl;
    std::cout << "Addres of variable age " << pAge << std::endl;
    std::cout << "Value of variable age " << *pAge << std::endl;
}

void getTwoPointers() {
    int price = 1200;
    int amount = 10;

    int* pPrice = &price;
    int* pAmount = &amount;
    std::cout << "Address of var amount: " << pAmount << std::endl;
    pAmount = (int*)100;//Change the address of var amount
    std::cout << "Address of var amount: " << pAmount << std::endl;//It`s changed correctly on address 100
    pPrice = (int*)108;//Changed address of price var on 108;
    std::cout << "Address of price var: " << pPrice << std::endl;
    
    std::cout << "Address of first var minus address of second var. Result: " << pPrice - pAmount << std::endl;//It`s acctually did (108-100)/sizeof(int)
}


void getPlusToPointerValue() {
    int value = 2400;
    int* pValue = &value;
    std::cout << "First address of var value: " << pValue << std::endl;
    std::cout << "Do plus 3 to ptr value " << pValue + 3 << std::endl;//it`s acctually do 3 * siseof(int) => 3 * 4 = 12
    std::cout << "Do ++ for pointer var pValue: " << ++pValue << std::endl;//It takes the seed address and plus 1 * sizeof(int);
}

//---Exr7&8
void getCompareTwoPtrs() {
    int goodsAmount = 200;
    float pricePerOne = 15.5;

    int* pGoodsAmount = &goodsAmount;
    float* pPricePerOne = &pricePerOne;
    (pGoodsAmount > (int*)pPricePerOne) ? std::cout << "First pointer > second ptr" << std::endl : std::cout << "First ptr NOT > than second" << std::endl;
    (pGoodsAmount < (int*)pPricePerOne) ? std::cout << "First pointer < second ptr" << std::endl : std::cout << "First ptr NOT < than second" << std::endl;
    (pGoodsAmount == (int*)pPricePerOne) ? std::cout << "First pointer == second ptr" << std::endl : std::cout << "First ptr NOT == to second" << std::endl;
    //std::cout << "Multiply two ptrs: " << pGoodsAmount * (int*)pPricePerOne << std::endl;//Error it does not have a sens
}


//Exr9
void getVoidPtr() {
    int workExpr = 15;
    float yearsLeft = 3.5;
    void* pWorkExpr = &workExpr;
    *(int*)pWorkExpr = 12;
    void* pYearsLeft = &yearsLeft;
    *(float*)pYearsLeft = 5.5;
    std::cout << *(int*)pWorkExpr << std::endl;
    std::cout << *(float*)pYearsLeft << std::endl;
}

//Exr10
void getConstPtrs() {
    int burgerPrice = 3;
    const int* pBurgerPrice = &burgerPrice;
    pBurgerPrice = (int*)0x00ff;//We can change only address 
    //*pBurgerPrice = 10;//Error (can`t change value of const on pointer);
    //int* const pBurgerPr; //Error (we need to sign value when declare const pointer)
    int* const pBurgerPr = &burgerPrice;//Sign value from the start
    *pBurgerPr = 10;
    std::cout << "New value for var burgerPrice: " << *pBurgerPr << std::endl;//As result we change value of burgerPrie to 10;
    //pBurgerPr = (int*)0xffff55dc33ffaacd;//error (we can`t change the address in const pointer. We can change only value like previous instance); 
}

//Exr11


void funcPlusTwoNum() {
    static int counter = 0;//static var will work during our progr execution and will accumulate the counter of calls 
    int num1, num2;
    num1 = 10, num2 = 13;
    int res = num1 + num2;
    std::cout << "Res of func execution: " << res << std::endl;
    std::cout << "this func was called " << ++counter << " times" << std::endl;
}

//Exr12
//¬ результат≥ виконанн€ наступного коду буде викликатись перша функц≥€.
//як≥ зм≥ни треба виконати в код≥, щоб викликалась друга функц≥€. (стандарт C++11)
// 
//void func(int i) {
//    std::cout << "int" << "\n";
//}
//void func2(int* i) {
//    std::cout << "nullptr\n";
//}
//void main() {
//    func2(NULL);//i just change the name of second func
//}
