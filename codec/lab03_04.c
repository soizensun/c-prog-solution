#include <stdio.h>
int main(){
    int sed, suan, ans, num = 1;
    scanf("%d/%d", &sed, &suan);
    if (sed <= 10000 && suan <= 10000){
        if (sed % suan == 0){
            ans = sed / suan;
            printf("= %d", ans);
        }
        else if (sed % suan != 0){
            while (num <= sed){
                if (sed % num == 0 && suan % num == 0){
                    sed = sed / num;
                    suan = suan / num;
                    num = 1;
                }
                num = num + 1;
            }
            printf("= %d/%d", sed, suan);
        }
    }
    return 0;
}
