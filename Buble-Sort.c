
void swap(int *p1, int *p2)
{
    *p1 ^= *p2;
    *p2 ^= *p1;
    *p1 ^= *p2;
}
void BubbleSort(int *array, int size)
{
    for (uint8_t i = 0; i < size; i++)
    {
        if (array[i] > array[i + 1])
        {
            swap(&array[i], &array[i + 1]);
        }
    }
}
void PrintArray(int* array, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d", (array[i]));
    }
}
int main(void)
{
	srand(time(0));
      int array[100];
for(int i = 0; i<100;i++)
{
	array[i] = rand()%100;
}
BubbleSort(array,100);
PrintArray(array,100);
	return 0;
}