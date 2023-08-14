#include < stdio.h >
#include < conio.h >
int main(void)
{
//v_num é a variável que
//será apontada pelo ponteiro
int v_num = 10;

//declaração de variável ponteiro
int *ptr;

//atribuindo o endereço da variável v_num ao ponteiro
ptr = &v_num;

printf("Utilizando ponteiros\n\n");
printf("Conteúdo da variável v_num: %d\n", v_num);
printf("Endereço da variável v_num: %x \n", &v_num);
printf("Conteúdo da variável ponteiro ptr: %x", ptr);

getch();
return(0);
}
