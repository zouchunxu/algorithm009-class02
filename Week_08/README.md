学习笔记

# 冒泡排序
````
void BubbleSort(int arr[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - i - 1; j++)
        {
            if(arr[j] > arr[j+1])
                std::swap(arr[j],arr[j+1]);
        }
    }
}
````

# 插入排序
````
void insertSort(int a[],  int length)
{
	for (int i = 1; i < length; i++)
	{
		for (int j = i - 1; j >= 0 && a[j + 1] < a[j]; j--)
		{
			swap(a[j], a[j + 1]);
		}
	}
 
}
````

# 选择排序
````
void SelectSort( int a[], int length )
{
    //对数组a排序,length是数组元素数量
    for( int i = 0; i < length; i++ ) {
        // 找到从i开始到最后一个元素中最小的元素,k存储最小元素的下标.
        int k = i;
        for( int j = i + 1; j < length; j++ ) {
            if( a[j] < a[k] ) { k = j; }
        }

        // 将最小的元素a[k] 和 开始的元素a[i] 交换数据.
        if( k != i ) {
            int temp;
            temp= a[k];
            a[k] = a[i];
            a[i] = temp;
        }
    }
}
````