/* The first code listing from Chapter 3 of The Abcolute Beginner's
Guide to C */
/* Filename Chapterex1.c */
/* Toatals how much money will be spent on holiday gifts. */
#include <stdio.h>
main()
{
      float gift1, gift2, gift3, gift4, gift5; /* Variables to hold costs. */
      float total; /* Variable to hold total amount */

      printf("How much do you want to spend on your mom? ");
      scanf(" %f", &gift1);
      printf("How much do you want to spend on your dad? ");
      scanf(" %f", &gift2);
      printf("How much do you want to spend on your sister? ");
      scanf(" %f", &gift3);
      printf("How much do you want to spend on your brother? ");
      scanf(" %f", &gift4);
      printf("How much do you want to spend on your favorite ");
      printf("C Programming author? ");
      scanf(" %f", &gift5);

      total = gift1+gift2+gift3+gift4+gift5;  /* Computes total amount spent on gifts */
      printf("\n The total you will be spending on gifts is $%.2f", total);
      return 0;  /* Ends the program */

}
