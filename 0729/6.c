/***********************
 ***********************
 ***********************
     能被3整除的个数
 ***********************
 **********************/
int main(int argc, char* argv[])
{
	int i = 0;
	scanf("%d",&i);
	
	void chu_3(int i);
	chu_3(i);
	return 0;
}

void chu_3(int i)
{
	int x = i,j=0;
	for(i=0; i<=x; i++)
	{
	if(i%3==0)
	 {
	  printf("%d\t",i);
	  j++;
	 }
	}
	printf("\n");
	printf("\n");
	printf("The number is %d",j);
	printf("\n");
}
