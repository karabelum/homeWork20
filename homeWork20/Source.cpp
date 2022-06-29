//�������� ������ #20 ������ 1.
#include <iostream>
using namespace std;
template <typename T> void showArr(T arr[], int length);
template <typename T> int searchIndex(T arr[], int length, T key);
template <typename T> T maxElement(T arr[], int length);
template <typename T> T minElement(T arr[], int length);
template <typename T> double meanValue(T arr[], int length);
template <typename T> void range(T arr[], int length, T a, T b);
template <typename T> int counter(T arr[], int length, T a);
int main() {
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	int n, m;
	cout << "������ 1.\n����������� ������:\n";
	int z[100];
	showArr(z, 100);
	cout << endl;
	cout << "������� ������� �������: ";
	cin >> n;
	cout << "������ �������� ��������� � ������ = " << searchIndex(z, 100, n) << endl;
	cout << "������������ ������� ������� = " << maxElement(z, 100) << endl;
	cout << "����������� ������� ������� = " << minElement(z, 100) << endl;
	cout << "������� �������������� ���� ��������� ������� = " << meanValue(z, 100) << endl;
	cout << "�������  ��� �����: \n";
	cin >> n >> m;
	cout << "����� �� ���������� ���������: ";
	range(z, 100, n, m);
	cout << "������� ������� �������: ";
	cin >> n;
	cout << "���������� �������� ��������� = " << counter(z, 100, n) << ".\n";
	cout << endl;

	return 0;
}
template <typename T> void showArr(T arr[], int length) {
	cout << "[";
	for (int i = 0; i < length; i++) {
		arr[i] = rand() % (100 + 100) - 100;
		cout << arr[i] << ", ";
	}
	cout << "\b\b]\n";
}
template <typename T> int searchIndex(T arr[], int length, T key) {
	for (int i = 0; i < length; i++)
		if (arr[i] == key)
			return i;
	return -1;
}
template <typename T> T maxElement(T arr[], int length) {
	int max = arr[0];
	for (int i = 1; i < length; i++)
		if (arr[i] > max)
			max = arr[i];
	return max;
}
template <typename T> T minElement(T arr[], int length) {
	int min = arr[0];
	for (int i = 1; i < length; i++)
		if (arr[i] < min)
			min = arr[i];
	return min;
}
template <typename T> double meanValue(T arr[], int length) {
	double sum = 0;
	for (int i = 0; i < length; i++)
		sum += arr[i];
	return sum / length;
}
template <typename T> void range(T arr[], int length, T a, T b) {
	cout << "[";
	for (int i = 0; i < length; i++) {
		if (arr[i] >= a && arr[i] <= b)
			cout << arr[i] << ", ";
	}
	cout << "\b\b]\n";
}
template <typename T> int counter(T arr[], int length, T a) {
	int count = 0;
	for (int i = 0; i < length; i++)
		if (arr[i] == a)
			count++;
	return count;
}