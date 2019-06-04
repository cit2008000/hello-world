/* progC.c*/
int add1(x){
	return x + 1;
}
int	main(){
	int	val = 0;
	int i = 1;
	for(i = 1;i <= 10; i++){
		val += i + add(i);
	}
	return 0;
}