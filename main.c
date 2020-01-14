#include<stdio.h>

int main()
{
	int n,m,k;
	int max,tmp;

	scanf("%d %d %d",&n,&m,&k);

	max = 0;
	for(int i=0;i<=k;i++){
		if(n-i < 0 || m-(k-i) < 0)
			continue;

		if( (int)((n-i)/2) < m-(k-i) )
			tmp = (int)((n-i)/2);
		else
			tmp = m-(k-i);

		if(max < tmp)
			max = tmp;
	}

	printf("%d\n",max);

	return 0;	
}
