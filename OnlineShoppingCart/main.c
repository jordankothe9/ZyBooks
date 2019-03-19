#include <stdio.h>
void makeItemBlank(Item* itemToBlank){
        //make item's attributes blank
}

void PrintItemCost(Item* item){
        //print item in this format: Bottled Water 10 @ $1 = $10
}

int main()
{
        //todo: intake user strings, for loop to intake the corret number of items
typedef struct Item_struct {
        char itemName[20];
        int itemPrice;
        int itemQuantity;
} Item;

Item testItem;
testItem.itemPrice = 5;

printf("%d", testItem.itemPrice);

return 0;
}
