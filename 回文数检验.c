int main()
{
  int a = 0;
  int i = 1;
  int num = 0;
  scanf("%d", &a);
  while (i < a) 
  {
  	i*= 10;
  	num++;
  }
  int list[100];
  printf("(%d)\n", num);
  for (int i = 0; i < num; i++)
  {
  	int c = 1;
  	for (int o = 1; o < num - i; o++)
  	{
  		c = c * 10;
  	}
  	list[i] = (a / c) % 10;
  }
  int e = num / 2;
  for (int g = 0;  g < e;  g++)
  {
	  if (list[g]==list[num-1-g])
	  {
	  	printf("%d是回文数",a);
	  }
    else
    {
      printf("%d不是回文数",a);
    }
  } 
}
