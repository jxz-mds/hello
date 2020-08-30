void reOrderArray(int *array, int length)
{
    int i=0, j = length - 1,t;
    while (i < j)
    {
        while (i < j && array[i] % 2 == 1)//澶存寚閽?
            i++;
        while (i < j && array[j] % 2 == 0)//灏炬寚閽?
            j--;
            t=array[i];
            array[i]=array[j];
            array[j]=t;
    }
}
