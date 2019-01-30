// #include <stdio.h>
// int change(int dec){
// 	if (dec > 0){
// 	int ans; 
// 	ans = (dec % 2);
// 	return ans + (change(dec/2)*10);		
// 	}
// 	else return 0;
// }

// int main(){
// 	int dec;
// 	scanf("%d", &dec);
// 	printf("%d",change(dec));
// }
//__________________________________________________________________________________
#include <stdio.h>
void change(int dec){
	if (dec > 0){
	int ans;
	change(dec/2);
	ans = (dec % 2);
	printf("%d", ans);
	}

}
void main(){
	int dec;
	scanf("%d", &dec);
	change(dec);
}
