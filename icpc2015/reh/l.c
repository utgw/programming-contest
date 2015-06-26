#include <stdio.h>
int main(){
	int n;
	scanf("%d\n",&n);
	for(int i=0;i<n;i++){
		int len;
		char ch[10000];
		gets(ch);
		for(len=0;ch[len]!=0;len++);
		printf("%d\n",len);
	}
	return 0;
}
