#include <stdio.h>
#include <math.h>
int main(){
    int c, s, i=1;
    char g;
    float gpa, ans, a, a1 = 0, score;
    printf("Enter number of subject(s): ");
    scanf("%d", &s);
    if (s == 1){
        printf("Enter credit,grade for subject #1: ");
        scanf("%d,%c", &c, &g);
        if (g == 'A' || g == 'a') {
            gpa = 4;
            printf("GPA = %.2f", gpa);
        }
        else if (g == 'B' || g == 'b') {
            gpa = 3;
            printf("GPA = %.2f", gpa);
        }
        else if (g == 'C' || g == 'c') {
            gpa = 2;
            printf("GPA = %.2f", gpa);
        }
        else if (g == 'D' || g == 'd') {
            gpa = 1;
            printf("GPA = %.2f", gpa);
        }
        else if (g == 'F' || g == 'f') {
            gpa = 0;
            printf("GPA = %.2f", gpa);
        }
    }
    else {
        while (i <= s){
            printf("Enter credit,grade for subject #%d: ", i);
            scanf("%d,%c", &c, &g);
            if (g == 'A' || g == 'a'){
                score = (c*4); a1 += score; a += c; score = 0; c = 0; i += 1;
            }
            else if (g == 'B' || g == 'b'){
                score = (c*3); a1 += score; a += c; score = 0; c = 0; i += 1;
            }
            else if (g == 'C' || g == 'c'){
                score = (c*2); a1 += score; a += c; score = 0; c = 0; i += 1;
            }
            else if (g == 'D' || g == 'd'){
                score =(c*1); a1 += score; a += c; score = 0 ; c = 0; i += 1;
            }
            else if (g == 'F' || g == 'f'){
                score = (c*0); a1 += score; a += c; score = 0; c = 0; i += 1;
            }
        }
        score = (a1 / a);
        printf("GPA = %.2f", score);
    }

}
