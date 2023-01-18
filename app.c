

//-----------------Робота №12

// Створити масив структур, який містить відомості про експортовані товари. 
// Кожна структура містить поля - найменування товару, країна, що імпортує товар, 
// обсяг поставляється партії в штуках. Написати програму, що видає наступну 
// інформацію: список країн, в які експортується товар Х і обсяг експорту; 
// середній обсяг експорту товару Х. Найменування товару Х вводиться за запитом з клавіатури.

 #include <stdlib.h>
 #include <stdbool.h>
 #include <stdio.h>
 #include <string.h>
 #include <ctype.h>


 struct exportedGoods
 {
     char name[20];
     char country[20];
     unsigned short amount;
     float price;
 }typedef exportedGoods;


 void getNameOfCountryAndExportQuantity(struct exportedGoods goods[3], char nameOfProduct[20]);
 void getAvgAmountExport(struct exportedGoods goods[3], char nameOfProduct[20]);
 void getNameOfProd(struct exportedGoods goods[3], char nameOFProduct[20]);

 int main(void) {

     exportedGoods goods[3] = {
         {"Cars", "Ukraine", 23, 45.5},
         {"Cycles", "GB", 12, 17.33},
         {"T-Shorts", "France", 32, 77.2}
         };

     char nameOfProduct[20];
     printf("Enter the name of prod: ");
     scanf("%s", nameOfProduct);
     getNameOfCountryAndExportQuantity(goods, nameOfProduct);
     getAvgAmountExport(goods, nameOfProduct);
     getNameOfProd(goods, nameOfProduct);
 } 

 void  getNameOfCountryAndExportQuantity(struct exportedGoods goods[3],char nameOfProduct[20]) {
 bool haveProd = false;

     for (int i = 0; i < 3; i++)
     {
         if (toupper(goods[i].name[0]) == toupper(nameOfProduct[0])) {
             printf("Country name is: %s\nexport quantity: %hi\n", goods[i].country, goods[i].amount);
             haveProd = true;
         } 
     }
     if (haveProd == false) {
         printf("We haven`t this product!\n");
     }

 }

 void getAvgAmountExport(struct exportedGoods goods[3], char nameOfProduct[20]) {
     int sumOfExport = 0;
     int counter = 0;
    
     bool haveProd = false;
     for (int i = 0; i < 3; i++)
     {
         if (toupper(goods[i].name[0]) == toupper(nameOfProduct[0])) {
             sumOfExport += goods[i].amount;
             haveProd = true;
             counter++;
         }
     }
     if(haveProd == false) {
         printf("We haven`t this product!");
     }
     int avgExportAmount = sumOfExport / counter;
     printf("Average amount export of product starts on letter %s: %d\n", nameOfProduct, avgExportAmount);
 }

 void getNameOfProd(struct exportedGoods goods[3], char nameOfProduct[20]) {
     bool product = false;
     for (int i = 0; i < 3; i++)
     {
         if (toupper(goods[i].name[0]) == toupper(nameOfProduct[0]))
         {
             printf("Name of product is: %s\n", goods[i].name);
             product = true;
         }
        
     }
     if(product == false) 
     {
         printf("No product on this letter, try again please!");//msg no product
     }
 }


//---------------------------------------------------------------------------------------------------













// if(strcmp(goods[i].name, nameOfProduct) == 0) 
//         {
//             sumOfPrices += goods[i].price;
//             counter++;
//             haveProd = true;
//         }










    //---county and amount

    // bool flag = false;
    // for (int i = 0; i < 3; i++)
    // {
    //     if (toupper(goods[i].name[0]) == toupper(nameOfProduct[0]))
    //     {
    //         printf("Country name: %s\nand quentity of prod is: %hi\n", goods[i].country, goods[i].amount);
    //         flag = true;
    //     }
        
    // }
    // if (flag == false)
    // {
    //     printf("No product sorry, enter another letter please!");
    // }
    // ----average value of X

    // float sumOfPrice = 0;
    // float avgPrice = 0;
    // int i;
    // for (i = 0; i < sizeof(goods) / sizeof(goods[0]); i++)
    // {
    //     if (toupper(goods[i].name[0]) == toupper(nameOfProduct))
    //     {
    //         sumOfPrice += goods[i].price;
    //     }
        
    // avgPrice = sumOfPrice / i;
    // printf("Avg price of %s product is: %f", goods[i].name, avgPrice);
    // }