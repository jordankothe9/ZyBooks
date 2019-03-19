  GNU nano 2.9.8                                  main.c                                   Modified  

#include <stdio.h>


typedef struct Item_struct {
        char itemName[20];
        int itemPrice;
        int itemQuantity;
} Item;

void makeItemBlank(Item* itemToBlank){
        //make item's attributes blank
}

void PrintItemCost(Item* item){
        //print item in this format: Bottled Water 10 @ $1 = $10
}

int main()
{
        //todo: intake user strings, for loop to intake the corret number of items

for(int i = 0; i < 2; i++){
        printf("Item %d\n", i);
        //Enter Item name
        //get item name 
        //Enter the item price:
        //get item price
        //enter the item quantity
        //get item quantity
}

Item testItem;
testItem.itemPrice = 5;

printf("test item: %d\n", testItem.itemPrice);

return 0;
}

