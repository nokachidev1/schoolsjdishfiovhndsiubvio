#include <stdio.h>

int main(void) {
  int product_one_price = 450;
  int product_two_price = 320;
  int product_three_price = 380;
  int subtotal = product_one_price + product_two_price + product_three_price;
  int point_gained = subtotal / 50;
  int check = subtotal > 1000;
  int point;

  if (check == 1) {
    /* apply 20% bonus to points when subtotal > 1000 */
    point = (point_gained * 20) / 100;
  } else {
    point = 0;
  }

  printf("Total = %d\n", subtotal);
  printf("Point = %d\n", point_gained);
  printf("Bonus Point = %d\n", point);
  printf("Total Point = %d\n", point_gained + point);
  printf("Over1000 = %d\n", check);

  return 0;
}
