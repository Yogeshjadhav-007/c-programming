#include<stdio.h>
#include<string.h>
int main(){
	char fullname[20];
	printf("enter your name:");
	scanf("%s", fullname);
	printf("your name is = %s \n",fullname);
	printf("enter your full name \n");
	fgets(fullname,sizeof(fullname),stdin);
	printf("fullname : %s \n", fullname);

	//strlen
//	char name[] = "yogesh";
//	printf("length = %d \n", strlen(name));
//	
//	//strcpy
//	char a[20] = "hello";
//	char b[20];
//	strcpy(b,a);
//	printf("copied string =%s \n",b);
//	
//	//concatenation strcat
//	char x[10] = "yogesh";
//	char y[10] = "jadhav";
//	strcat(x,y);
//	printf("%s \n",x);
	
	//concat 2
//	char a[10] = "Hi";
//	char b[10] = "I am";
//	char c[10]	= "yogesh";
//	strcat(a,b);
//	printf("%s \n",a);
//	strcat(b,c);
//	printf("%s", c);
	
	//comapre strcmp
//	char s1[10] = "hello";
//	char s2[10] = "Hello";
//	if(strcasecmp(s1,s2)==0){
//		printf("string are equal \n");
//	}else{
//		printf("string are not equal \n");
//	}
//	//strupr
//	char a[10] ="yogesh";
//	strupr(a);
//	printf("%s \n",a);
//	//strlwr
//	char b[10] ="YOGESH";
//	strlwr(b);
//	printf("%s \n",b);
//	//reverse
//	char c[10] ="yogesh";
//	strrev(c);
//	printf("%s \n",c);
//	// first and last letter are in uppercase seprate
//	char d[10] = "yogesh";
//	int len = strlen(d);
//	printf("first:%c \n", d[0]);
//	printf("last :%c \n",d[len-1]);
//	//count characters without using strlen
//	int i = 0;
//	while(d[i] != '\0')
//	i++;
//	printf("length = %d",i);
//	// count words
//	char str[] = "banana";
//	int j;
//	for(j=0;str[j] !='\0';j++)
//	if(str[j]=='a')
//	str[j] = '@';
//	printf("%c",j);
	// palindrome or not
//	char p[20],rev[20];
//	printf("enter string");
//	scanf("%s",p);
//	strcpy(rev,p);
//	strrev(rev);
//	if(strcmp(p,rev)==0)
//		printf("palindome string");
//		else
//		printf("not palindrome string");
	
	
	
	return 0;
}
