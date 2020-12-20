// Problem Code: COMM3
// url : https://www.codechef.com/problems/COMM3

#include <stdio.h>
#include <math.h>

double distance(double x1, double x2, double y1,double y2){
    double a = x1 - x2;
    double b = y1 - y2;
    a = a * a;
    b = b * b;
    return sqrt(a+b);
}

int main(){
    int tc,range;
    double x1,y1,x2,y2,x3,y3;
    double dist;
    scanf("%d", &tc);
    while(tc--){
        scanf("%d", &range);
        scanf("%lf%lf %lf%lf %lf%lf",&x1,&y1,&x2,&y2,&x3,&y3);
        // double x12 = sqrt(((x1-x2)*(x1-x2)+(y2-y1)*(y2-y1)));
        // double x23 = sqrt(((x3-x2)*(x3-x2)+(y2-y3)*(y2-y3)));
        // double x13 = sqrt(((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3)));
        double x12 = distance(x1,x2,y1,y2);
        double x23 = distance(x3,x2,y3,y2);
        double x13 = distance(x1,x3,y1,y3);

        // printf("**********");
        
        // printf("\n%lf\n%lf\n%lf\n",x12,x23,x13);
        // if(x12 <= range && x13 <= range && x23 <= range){
        //     printf("yes\n");
        // }else{
        //     printf("no\n");
        // }
        if(x12 <= range && x23 <= range){
            printf("yes\n");
        }else if(x23 <= range && x13 <= range){
            printf("yes\n");
        }else if(x13 <= range && x12 <= range){
            printf("yes\n");
        }else{
            printf("no\n");
        }
    }
    return 0;
}