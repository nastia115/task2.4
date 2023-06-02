Задача 4
#include <math.h>
#include <iostream>
#include <cmath>
using namespace std;
int main() 
{ 
int N;
	cout<<"N:";
	cin>>N;
	while(N>0) N-=3;
	if (N==0){
		cout<<"True";
	}
	else {
		cout<<"False";
	}																																				                                        
}
_______________________________________________
Задача 7
#include <math.h>
#include <iostream>
#include <cmath>
using namespace std;
int main() 
{ 
int N,K;
K=1;
cout<<"N:";
cin>>N;
while (K*K<=N){
	++K;
} 
cout<<"min number K:"<<K<<endl;
}
Задача 10
#include <iostream>
using namespace std;
int main()
int n;
	cout<<"N:";
	cin>>n;
	int k=0, temp=3;
	while(temp<n){
		temp *=3;
		++k;
	}
	cout<<k;
}
Задача 16
#include <iostream>
using namespace std;
int main()
float p;
    cout << "Input P:";
    cin >> p;
    int k = 1;
    float a = 10, s = 10;
    while (s <= 200) {
        ++k;
        a += a * p / 100;
        s += a;
    }
    cout<<"k:"<<k<<endl<<"nS:"<< s;
}
Задача 14
#include <iostream>
using namespace std;
int main()
int n;
	cout<<"Input N:";
	cin>>n;	
	int f1=1, f2=1,f=0;
	while (f < n) {
		f=f2+f1;
		f2=f1;
		f1=f;
	}									 								                      
	if (f==n)
	cout<<"True";
	else 
	cout<<"false";
}
