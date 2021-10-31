
# include <stdio.h>

void bubbleSort(int arr[],int n)
{
	int flag = 0,tmp;
	for(int i=0;i<n;i++)
	{
		for(int j = 0 ; j< n-i-1;j++)
		{
			if(arr[j] > arr[j+1])
			{
				tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
				flag = 1;
			}
		}
		if(flag == 0)
		{
			break;
		}
	}
	
}

int main()
{
	int arr[] = {8,5,6,1,4,5};
	int n = sizeof(arr)/sizeof(int);
	bubbleSort(arr,n);
	printf("Sorted array is\n");
	for(int i = 0; i<n ;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
