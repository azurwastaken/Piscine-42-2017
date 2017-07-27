int verif(char a)
{
	int flag=0;
	if(a>='0' && a<='9')
		flag=1;
	if(a==' ')
		flag=2;
	if(a=='+')
		flag=3;
	if(a=='-')
		flag=4;
	if(a==32 || a==9 || a==10 || a==11 || a==12 || a==13)
		flag=5;
	if((a>='a' && a<='z') || (a>='A' && a<='Z'))
		flag=6;	
return(flag);
}

int	ft_atoi(const char *str)
{
	int res=0,i=0,es,negative;
	
	while(str[i] && es==0 && verif(str[i])!=6)
	{
		while(str[i]==' ')
			i++;
		if((verif(str[i])==3 && verif(str[i+1])==4) || (verif(str[i])==3 && verif(str[i-1])==4))
			es=1;
		if(verif(str[i])==5 && verif(str[i-1])!=2)
			es=1;
		if(verif(str[i])==1 && (verif(str[i-1])==2 || i==0))
			res=str[i]-0x30;
		if(verif(str[i])==1 && i>0)
			res=res*10+str[i]-0x30;
		if(verif(str[i])==4 && es != 1)
			negative=1;		
	i++;
	}
	if(negative != 0)
		res = -res;
	return res;
}
