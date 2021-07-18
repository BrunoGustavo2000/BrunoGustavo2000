//Calculadora Aritimetica:
//02-05-2021
#include<iostream>
//biblioteca de entrada e saida.

using namespace std;
//caminho das funcoes dentro da biblioteca.
//sempre necessario em c++.

//função principal:
int main (){
//Variaveis:
float valorN1, valorN2, valorFinal;
valorN1=valorN2=valorFinal=0;
//Switch e etc.
int menuOp;
char loopW = ' ';

menuOp=0;

do{

//painel inicial.
cout<<"|---------------------------------|"<<endl;
cout<<"|            Bem vindo            |"<<endl;
cout<<"|---------------------------------|"<<endl;	
cout<<"|	Calculadora Basica	  |"<<endl;// ajuste para a Resolução da tela. 	
cout<<"|---------------------------------|"<<endl;
cout<<endl;
//fim do painel.

//menu de opcões:
cout<<"A seguir as opcoes de calculo:"<<endl;
cout<<"1 - Adicao.........(+)"<<endl;	
cout<<"2 - Subtracao......(-)"<<endl;	
cout<<"3 - Multiplicacao..(*)"<<endl;	
cout<<"4 - Divisao........(/)"<<endl;	
cout<<"5 - Sair...........(#)"<<endl;	
cout<<endl;
//fim.

//Escolha de ações:
cout<<"Escolha uma das opcoes: "<<endl;
	cin>>menuOp;//varialvel do switch.
system("cls");//limpa o prompt.

//fim.






//Opções de escolha:
switch(menuOp){

//----------------------|
//		NEW OPTION:		|
//----------------------|

case 1:
//Opção de Adição:
cout<<"|--------------------|"<<endl;
cout<<"|        Adicao      |"<<endl;
cout<<"|--------------------|"<<endl;
cout<<endl;
//painel de apresentação.

cout<<"Digite o primeiro valor: "<<endl;
	cin >> valorN1;
cout<<endl;
//primeiro valor.

cout<<"Digite o segundo valor: "<<endl;
	cin >> valorN2;
cout<<endl;
//segundo valor.

valorFinal = (valorN1+valorN2);
//calculo.
cout<<"O resuldo e: "<<+valorFinal<<endl;
//exibir resultaldo.
cout<<endl;

//loop de execulção.
cout<<"Deseja continuar...(s/n):"<<endl;
	cin >> loopW;
system("cls");
//fim
break;

//----------------------|
//		NEW OPTION:		|
//----------------------|

case 2:
//Opção de Adição:
cout<<"|--------------------|"<<endl;
cout<<"|     Subtracao      |"<<endl;
cout<<"|--------------------|"<<endl;
cout<<endl;
//painel de apresentação.

cout<<"Digite o primeiro valor: "<<endl;
	cin >> valorN1;
cout<<endl;
//primeiro valor.

cout<<"Digite o segundo valor: "<<endl;
	cin >> valorN2;
cout<<endl;
//segundo valor.

valorFinal = (valorN1-valorN2);
//calculo.
cout<<"O resuldo e: "<<+valorFinal<<endl;
//exibir resultaldo.
cout<<endl;

//loop de execulção.
cout<<"Deseja continuar...(s/n):"<<endl;
	cin >> loopW;
system("cls");
//fim
break;

//----------------------|
//		NEW OPTION:		|
//----------------------|

case 3:
//Opção de Adição:
cout<<"|--------------------|"<<endl;
cout<<"|    Multiplicacao   |"<<endl;
cout<<"|--------------------|"<<endl;
cout<<endl;
//painel de apresentação.

cout<<"Digite o primeiro valor: "<<endl;
	cin >> valorN1;
cout<<endl;
//primeiro valor.

cout<<"Digite o segundo valor: "<<endl;
	cin >> valorN2;
cout<<endl;
//segundo valor.

valorFinal = (valorN1*valorN2);
//calculo.
cout<<"O resuldo e: "<<+valorFinal<<endl;
//exibir resultaldo.
cout<<endl;

//loop de execulção.
cout<<"Deseja continuar...(s/n):"<<endl;
	cin >> loopW;
system("cls");
//fim
break;

//----------------------|
//		NEW OPTION:		|
//----------------------|
case 4:
//Opção de Adição:
cout<<"|--------------------|"<<endl;
cout<<"|       Divisao      |"<<endl;
cout<<"|--------------------|"<<endl;
cout<<endl;
//painel de apresentação.

cout<<"Digite o primeiro valor: "<<endl;
	cin >> valorN1;
cout<<endl;
//primeiro valor.

cout<<"Digite o segundo valor: "<<endl;
	cin >> valorN2;
cout<<endl;
//segundo valor.

valorFinal = (valorN1/valorN2);
//calculo.
cout<<"O resuldo e: "<<+valorFinal<<endl;
//exibir resultaldo.
cout<<endl;

//loop de execulção.
cout<<"Deseja continuar...(s/n):"<<endl;
	cin >> loopW;
system("cls");
//fim
break;

case 5:
loopW = 'n';

break;	

default:
//Se alguma erro desconhecido ocorrer.
cout<<"nenhuma opcao...."<<endl;

}//fim do switch.





}while(loopW == 'S' || loopW == 's');
	
	cout<<endl;
	cout<<"|---------------------------|"<<endl;
	cout<<"|      Fim do programa !    |"<<endl;
	cout<<"|---------------------------|"<<endl;
	cout<<endl;
return 0;

}
