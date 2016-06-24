#include <cstdio>
int main(){
	double x,y;
	while(1){
		scanf("%lf%lf\n",&x,&y);
		if(x==0)break;
		printf("%.10lf\n",x/y);
	}
	return 0;
}
