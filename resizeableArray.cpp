#include<iostream>

using namespace std;


class ResizeArray
{
private:
	int SIZE;
	int *arr;
	int count;
public:
	ResizeArray() {
		count = 0;
		SIZE = 10;
		arr = new int[SIZE];
	}

	~ ResizeArray() {
		//cout << "Destructor" << endl;
		delete[] arr;
	}

	int getLen() {
		return count;
	}

	void push(int num) {
		if (count < SIZE) {
			arr[count] = num;
			count++;
		} else if (count == SIZE || count > SIZE) {
			SIZE += 10;
			arr[count] = num;
			count++;
		}

	}

	void pop() {
		if (count > 0) {
			count--;
		}
		else {
			cout << "Already Empty!" << endl;
		}

	}

	int get(int index) {
		if (index >= getLen()) {
			return arr[index];
		} else {
			cout << "Index greater than size." << endl;
		}

	}

	void print() {
		int len = getLen();
		for (int i = 0; i < len; i++) {
			cout << arr[i] << " ";
		}
		cout << endl;
	}

};



int main()
{
	ResizeArray arrayList;
	arrayList.push(10);
	arrayList.push(20);
	arrayList.push(30);
	arrayList.push(40);
	arrayList.push(50);
	arrayList.push(60);
	arrayList.push(70);
	arrayList.push(80);
	arrayList.push(90);
	arrayList.push(100);
	arrayList.push(110);
	arrayList.print();
	arrayList.pop();
	arrayList.print();

	return 0;
}