#include <iostream>
#include <string>
#include <locale.h>
struct aluno{
char id[200];
int matricula;
float n1;
float n2;
};
using namespace std;
void separador(){
cout<<"---------------------------------";
}
int main()
{
int tam, i;
setlocale(LC_ALL, "");
cout<<"Quantos alunos deseja cadastrar: ";
cin>>tam;
separador();
struct aluno cadastro [tam];
for(i=0; (i<tam); i++){
cout<<"\nCadastro do aluno "<<i+1<<endl;
cout<<"\nDigite o nome do aluno: ";
cin>>cadastro[i].id;
cout<<"Digite a matricula do aluno: ";
cin>>cadastro[i].matricula;
cout<<"Digite a primeira nota: ";
cin>>cadastro[i].n1;
cout<<"Digite a segunda nota: ";
cin>>cadastro[i].n2;
separador();
}
for(i=0; (i<tam); i++){
cout<<"\nMatricula: "<<cadastro[i].matricula;
cout<<"\nNome: "<<cadastro[i].id;
cout<<"\nMédia: "<<(cadastro[i].n1+cadastro[i].n2)/2<<endl;
separador();
}
return 0;
}
