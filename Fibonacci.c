# include<stdio.h>

int fibonacci(int n){
    if (n<2)
        return n;
    else
        return fibonacci(n-1) + fibonacci(n-2);
}
int main(){
    int num, res, i;
    printf("Ingrese numero: ");
    scanf("%i",&num);
    for(i=1;i<=num;i++){
        res = fibonacci(i);
        printf("%i  ", res);
    }
    printf("\n");
    return 0;
}


