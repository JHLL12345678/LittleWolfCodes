int main()
{
  int a = 0;
  int i = 1;
  int num = 0;
  scanf("%d", &a);
  while (i <= a) 
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
  int aaa = 1 ;
  for (int g = 0;  g < e;  g++)
  {
	  if (list[g]!=list[num-1-g])
	  {
	  	aaa = 0;
		}
  } 
	printf("%d%s回文数",a,aaa?"是":"不是");
}
//以上为未修改版本
