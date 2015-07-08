#include <string>
#include <vector>
using namespace std;
class FallingSand{
	int width, height;
	vector<string> res;

	public:
		vector<string> simulate(vector<string> board){
			width = board[0].size();
			height = board.size();
			res = board;
			for(int i=height-1;i>=0;i--){
				for(int j=0;j<width;j++){
					if(board[i][j] == 'o'){
						res[i][j] = '.';
						res[i+move(i,j)][j] = 'o';
					}
				}
			}
			return res;
		}

	int move(int i, int j){
		if(i == height-1) return 0;
		if(res[i+1][j] == '.'){
			return 1+move(i+1,j);
		}else{
			return 0;
		}
	}

};