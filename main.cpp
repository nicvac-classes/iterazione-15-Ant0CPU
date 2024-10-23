#include <iostream>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    //Primo esercizio

    string nome;
    int i, N;

    cout<<"Quanti altleti ci sono in gara?"<<endl;
    cin>>N;
    
    for(i=0; i<N; i++)
    {
        cout<<"Inserisci il nome dell'atleta"<<endl;
        cin>>nome;
        cout<<"Ciao "<<nome<<endl;
    }

    //Secondo esercizio
    {
    int n, M, i;

    cout<<"Elenco i numeri da N a M con passo 2."<<endl;
    cout<<"Inserisci N"<<endl;
    cin>>n;

    cout<<"Inserisci M"<<endl;
    cin>>M;

    for (i=n; i<=M; i=i+2)
    {
        cout<<i<<endl;
    }
}

//Terzo esercizio
{
    int i, N, contPari, contDispari, restoDue, x;

    do
    {
        cout<<"Quanti numeri da generare?"<<endl;
        cin>>N;
    }
    while(N<0);

    contPari=0;
    contDispari=0;

    for(i=0; i<N; i++)
    {
        x = rand() % 1001;
        
        restoDue=x%2;

        if(restoDue==0)
        {
            contPari=contPari+1;
        }
        else
        {
            contDispari=contDispari+1;
        }
        cout<<i+1<<" numero generato: "<<x<<endl;
    }

    cout<<"Sono stati generati "<<contPari<< " nuemeri pari e " <<contDispari<< " numeri dispari"<<endl;
    }
}