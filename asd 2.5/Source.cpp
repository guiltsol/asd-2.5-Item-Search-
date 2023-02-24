#include <iostream>
#include <time.h>
using namespace std;
void search(int* arr, int i,int el) {
	int h = 0;
	for (int j = 0;j < i;j++) {
		if (el == arr[j]) {
			cout << "Item "<<arr[j]<<" found and his index : " << j << endl;
			h++;
			
		}
	}
	if (h == 0) cout << "Element "<<el<<" not found!" << endl;
}
int main() {
	int* a;
	int x,n,s;
	srand(time(NULL));
	cout << "Enter the size of the array: " << endl;
	cin >> n;
	a = new int[n];
	for (int j = 0;j < n;j++) {
		x = rand() % 50;
		a[j] = x;
	}
	cout << "Array: "<<endl;
	for (int j = 0; j < n;j++)
	{
		cout << "arr[" << j << "]= " << a[j] << endl;
	}
	cout << endl;
	cout << "Enter the number of the item you want to find: " << endl;
	cin >> s;
	search(a, n, s);
	cout << endl;
	system("pause");
	return 0;
}