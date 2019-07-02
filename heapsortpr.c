#include <stdio.h>
void main()
{
int heap[10], no, i, j,p,c, temp;
printf ("*******MOHINI VAISH*******\n");
printf("\n Enter no of elements :");
scanf("%d", &no);
printf("\n Enter the nos : ");
for (i = 0; i < no; i++)
scanf("%d", &heap[i]);
for (i = 1; i < no; i++)
{
p = i;
do
{
c = (p - 1) / 2;
if (heap[c] < heap[p])
{
temp = heap[c];
heap[c] = heap[p];
heap[p] = temp;
}
p = c;
} while (p != 0);
}
printf("Heap array : ");
for (i = 0; i < no; i++)
printf("%d\t ", heap[i]);
for (j = no - 1; j >= 0; j--)
{
temp = heap[0];
heap[0] = heap[j];
heap[j] = temp;
c = 0;
do
{
p = 2 * c+ 1;
if ((heap[p] < heap[p + 1]) && p < j-1)
p++;
if (heap[c]<heap[p] && p<j)
{
temp = heap[c];
heap[c] = heap[p];
heap[p] = temp;
}
c = p;
} while (p < j);
}
printf("\n The sorted array is : ");
for (i = 0; i < no; i++)
printf("\t %d", heap[i]);
}
