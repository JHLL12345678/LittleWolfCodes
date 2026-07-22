int main()
  {
    int a;
    int b = 1;
    scanf("%d", &a);
    int num = 0;
    while (b<a) 
    {
	    b *= 10;
	    num++;
    }
    int list[1000];//这个数值随意，不要太大也不要太小
    printf("(%d)\n", num);
    for (int i = 0; i < num; i++)
    {
	    int c = 1;
	  for (int o = 1; o < num-i ; o++)
	  {
		  c = c * 10;
	  }
	    list[i] = (a / c) % 10; 
    }
    for (int i = num-1;  i >=0; i--)
    {
	    printf("%d", list[i]);
    }
  }
