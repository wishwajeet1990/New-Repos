#include<stdio.h>
int featurec();
int main()
{
	printf("%s :Begins\n",__func__);
	printf("Feature added by wishu-featureb branch\n");
	featurec();
	printf("%s :End\n",__func__);
	return 0;
}
int featurec()
{
	printf("This is %s function \n",__func__);
	return 0;
}
