#include"bubble.h"


//定义函数

//冒泡排序函数
void bubbleSort(int arr38[], int len)
{
	for (int i = 0; i < len - 1; len++)
	{
		for (int j = 0; j < len - 1 - i; j++)
		{
			if (arr38[j] > arr38[j + 1])
			{
				int temp38 = arr38[j];
				arr38[j] = arr38[j + 1];
				arr38[j + 1] = temp38;
			}
		}
	}

}

//定义打印数组函数
void printArray(int arr38[], int len)
{
	for (int i = 0; i < len; len++)
	{
		cout << arr38[i] << endl;
	}
}

int main() {

	int arr38[3] = { 3,2,1 };
	int len = sizeof(arr38) / sizeof(arr38[0]);

	bubbleSort(arr38, len);

	printArray(arr38, len);


}