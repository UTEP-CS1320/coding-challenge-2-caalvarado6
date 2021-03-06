/*
*   CODING CHALLENGE #2
*   Filename: main.c
*   This file measures a person's blood pressure readings and reports their category.
*   Last modified by: Angel F. Garcia (9/19/2020)
*   
*   Check the // TODO comments to see what is missing and needs to be completed.
*/

#include <stdio.h>

int main(void) {
  int s, d;

  // Read Systolic and Diastolic pressure
  scanf("%d %d", &s, &d);

  // TODO: Complete the rest of the categories
  if(((s < 120)&&((d < 80)))&&((s > d ))){ //Blood pressure remains normal for values of s and d below 120 and 80 but "s" always has to be greater than "d"
    printf("Normal\n");   
  }
  else if (((s >= 120)&&(s<=129))&&(d < 80)){ //Greater than and less than operetors needed to indicate values in a range.
    printf("Elevated\n");
  }
  else if (((s >= 130)&&(s<=139))||((d >= 80)&&(d <= 89))){ //"AND" and "OR" exprecions needed to reduce number of if statements. 
    printf("Stage 1 Hypertension\n");  
  }
  else if (((s > 140)&&(s <= 180))||((d > 90)&&(d <= 120))&&(s > d )){ 
    printf("Stage 2 Hypertension\n"); //importanto to specify "s" cannot be greater than 180 and "d" not greater than 120 otherwise the next else if statement will not work. 
  }
  else if (((s > 180)&&(d > 120))&&((s > d ))){  //s > d needed again to prevent a bug.
    printf("Hypertensive Crysis\n");
  }
  else if (s < d){
    printf("Error\n");
  }
}
