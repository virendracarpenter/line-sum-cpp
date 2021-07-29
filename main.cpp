#include <iostream>
using namespace std;

class Input{
  public:
    int x;
    int getSum();
};

int Input::getSum(){
        int sum = 0;
        
        while (x != 0) {
            sum = sum + x % 10;
            x = x / 10;
        }
        return sum;
    }


int main() {
	int n;
	cin>>n;
	Input value[n];
	for (int i = 0; i < n; ++i){
	    cin >> value[i].x;
	}
	for (int i = 0; i < n; ++i){
	    cout<<value[i].getSum()<<endl;
	}
	
	
	return 0;
}
//Program by Virendra Carpenter
