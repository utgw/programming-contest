#include <cstdio>
#include <utility>
#define REP(i,n) for(int i=0;i<n;i++)
using namespace std;
int main(){
	int w,n,a,b;
	int res[30];
	scanf("%d\n%d\n",&w,&n);
	REP(i,w)res[i]=i+1;
	REP(i,n){
		scanf("%d,%d",&a,&b);
		swap(res[a-1],res[b-1]);
	}
	REP(i,w)printf("%d\n",res[i]);
	return 0;
}