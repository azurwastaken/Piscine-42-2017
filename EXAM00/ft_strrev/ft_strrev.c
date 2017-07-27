char *ft_strrev(char* str)
{
	int i=0,j=0;
	char tmp;

	while(str[i] != '\0')
	{
		i++;
	}
	i--;

	while(i>j)
	{
		tmp=str[j];
		str[j]=str[i];
		str[i]=tmp;
		j++;
		i--;
	}

return(str)
}
