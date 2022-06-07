/*If the total selling price of 15 items and the total profit earned on them is input through the keyboard,
 write a program to find the cost price of one item.*/
 #include<stdio.h>
 int main () {

     float price_of_items,profit_on_them,cost_price_of_one_item;
     printf("Enter the price of 15 item : ");
     scanf("%f",&price_of_items);
     printf("Enter the profit on 15 item : ");
     scanf("%f",&profit_on_them);

     cost_price_of_one_item= (price_of_items-profit_on_them)/15;

     printf("the cost price of one item is : %.f",cost_price_of_one_item);


     return 0;
 }