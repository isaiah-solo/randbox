#include <stdlib.h>
#include <stdio.h>

#include "RandBox.h"

int main (char** argv, int argc)
{
   RandBox *rb;
   char **multpick;
   
   randbox_init(&rb);
   
   randbox_add(&rb, "red", 2);
   randbox_add(&rb, "blue", 7);
   
   printf("Red = %f\n", randbox_probability(&rb, "red"));
   printf("Blue = %f\n", randbox_probability(&rb, "blue"));
   
   printf("Random strings:\n");
   
   randbox_mult_pick(&rb, &multpick, 10);
   
   for (int i; i < 10; i++) {
      printf("%s\n", multpick[i]);
   }

   randbox_delete_all(&rb);
   
   /*
   RandBox *rb;
   char *test_text = "hello";
   char *other_test_text = "bruh";

   char **random = malloc(sizeof(char*) * 10);
   for (int i = 0; i < 10; i++) {
      random[i] = malloc(sizeof(char) * 100);
   }
   int* test = malloc(sizeof(int));
   float *percent;

   test += init_randbox(rb);
   size_randbox(rb, test);
   printf("Size: %d\n", test);
   test += add_randbox_elem(rb, test_text, 5);
   test += add_randbox_elem(rb, other_test_text, 1);
   test += pick_randbox_elem_mult(rb, random, 10);
   for (int i = 0; i < 10; i++) {
      printf("%s\n", random[i]);
   }
   size_randbox(rb, test);
   printf("Size: %d\n", test);
   chance_of_randbox(rb, percent, test_text);
   printf("works 1\n");
   printf("%f\n", *percent);
   printf("works 2\n");
   delete_randbox_all(rb);
   //free(random);
   */
   return 0;
}
