#include <stdio.h>


int main()
{
    char ball[50];
    int backet,length;
    int num_ball;
    int ans,max = 0;
    int i;
    scanf("%s %d",ball,&backet);
    num_ball = strlen(ball);
    length = num_ball - backet + 1;
    char temp_ball[length];
    if (num_ball >= backet && backet > 0){

        for (i = 0; i < backet;i++){
            memcpy(temp_ball, &ball[i], length);
            sscanf(temp_ball,"%d",&ans);
            if(ans > max){
                max = ans;
            }
        }
        printf("%d",max);
    }
    else{
        printf("ERROR");
    }

    return 0;
}