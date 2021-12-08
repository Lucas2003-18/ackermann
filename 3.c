// Lucas Rafael Barbosa Ribeiro - 2760482111004
// Otavio Custodio Zampar - 2760482111011

//Fun��o Ackermann
//Sinceramente prof, me superei bastante nesse c�digo kkkk

#include <stdio.h>

int acker(int, int); //chamando a fun��o

int main(){
	int m, n;
	
	printf("Entre com o valor para m e n: ");
	scanf("%d %d", &m, &n);
	
	printf("A resposta para Ackermann � %d %d", acker(m, n), not_acker(m,n));
	
	return 0;
}

//fun��o recursiva ackermann
int acker(int m, int n){ 
	
	if(m == 0){
		return n + 1;
	}else if(m > 0 && n == 0){
		return acker(m-1, 1);
	}else{
		return acker(m -1, acker(m, n-1));
	}
}

//fun��o n�o recursiva (olha eu juro que tentei fazer mas essa foi complicada)
int not_acker(int m, int n){
	push(m);
	while(!isEMPTY()){
		pop(&m);
		if(m == 0){
			n = n + 1;
		}else if(n == 0){
			n = 1;
			push(m-1);
		}else{
			n = n -1;
			push(m-1);
			push(m);
		}
	}
	return (n);
}

	


