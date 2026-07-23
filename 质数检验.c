int main()
{
  int num = 0;
  int a = 0;
  scanf("%d", &a);
  for (int i = 2; i <= a; i++)
  {
	  int num2 = 0;
	  for (int o = 2; o < i; o++)
	    {
		  if ( i% o == 0)
		    {
			    num2++;
			    break;
		    }
	    }
	  if (num2 == 0)
	    {
		    num++;
		    printf("%d\n", i);
	    }    
  }
  printf("%d", num);
}
