#include<stdio.h>
#include<string.h>
#define N 100
int main(void)
{
	int i,j,k,m,len=0;
	char ch;
	char str1[N];
	char str2[N];
	printf("请输入（并以#结尾）：");
	ch = getchar();//输入字符串
	for (i=0;ch !='#';i++)
	{
		str1[i]=ch;
		len++;
		ch=getchar();
	}//获取字符串

//提前赋值
	for(m=0;m<len;m++)
	{
		str2[m]=str1[m];
	}

	//处理大小写，保存在str2中
#ifdef CONVERT
	for(j=0;j<len;j++)
	{
		if(str1[j]>='A'&&str1[j]<='Z')
		{
			str2[j]=str1[j]+32;
		}
		else if(str1[j]>='a'&&str1[j]<='z')
		{
			str2[j]=str1[j]-32;
		}		
		else
		{
			str2[j]=str1[j];
		}
	}
#endif
	//输出结果
	for(k=0;k<len;k++)
	{
		printf("%c",str2[k]);
	}
	return 0;

	

	

	


}
