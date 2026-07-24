//求一个范围内满足每一位数字之和能等于一个常数
int main()
{
  for (int o = 0;  o < 1000;  o++)
{
	int i = 1;
	int num = 0;//数字的位数
	while (i <= o)
	{
		i *= 10;
		num++;
	}
	int list[10];
	for (int i = 0; i < num; i++)
	{
		int c = 1;
		for (int s = 1; s < num - i; s++)
		{
			c = c * 10;
		}
		list[i] = (o / c) % 10;
	}
	//以上部分会将数字拆分为数组

	int sum = 0;
	for (int e =0;e<num;e++) 
	{
		sum = sum + list[e];
	}
	if (sum == 15) //计算的阈值
	{
		printf("%d\n", o);
	}
}
}
