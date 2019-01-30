#include <stdio.h>
#include <math.h>
 
struct Point {
    double x;
    double y;
};
 
int main() {
    int n;
    double length;
 
    printf("Number of Points: ");
    scanf("%d",&n);
    struct Point points[n];
 
    for(int i = 0; i < n; i++){
        printf("P%d.X: ", i + 1);
        scanf("%lf", &points[i].x);
        printf("P%d.Y: ", i + 1);
        scanf("%lf", &points[i].y);
    }
 
    printf("Length:\n");
    for(int i = 0; i < n-1; i++){
        length = sqrt(pow(points[i].x - points[i+1].x, 2) + pow(points[i].y - points[i+1].y, 2));
        printf("Length from P%d(%.2f, %.2f) to P%d(%.2f, %.2f) is %.2f\n", i+1, points[i].x, points[i].y, i+2, points[i+1].x, points[i+1].y, length);
    }
 
    return 0;
}