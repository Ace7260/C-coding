#include <iostream>
#include "chalenge.h"
int SaisirEntier()
{
	int nb;
   do
   {
   	cout<<"Saisir un entier >0:";
   	cin>>nb;
   } while (nb<1);
   return nb;
}
int SaisirNote()
{
	int n;
	do
	{
	  cout<<"\nNote[0,20]:";
	  cin>>n;
	} while (n<0 || n>20);
}
void SaisirNnote(int t[],int u)
{
	int i;
	for (int i = 0; i < u; ++i)
	{
		t[i]=SaisirNote();
	}
}
void Menu()
{
	cout<<"\nCHOISISSER\n";
	cout<<"============\n";
	cout<<"-1 ARRETER\n";
	cout<<" 0 AFFICHER\n";
	cout<<" 1 REMPLIR/SAISIE\n";
	cout<<" 2 OCCURENCE\n";
	cout<<" 3 EXISTENCE\n";
	cout<<" 4 OCCURENCES\n";
	cout<<" 5 PETITE NOTE\n";
	cout<<" 6 GRANDE NOTE\n";
	cout<<" 7 SOMME\n";
	cout<<" 8 MOYENNE\n";
	cout<<" 9 TRIER\n";
}
void Arreter()
{
	cout<<"fin du programme";
}
void Afficher(int t[],int u)
{
 for (int i = 0; i < u; ++i)
  {
 	cout<<"\t"<<t[i];
  }
}
void Remplir(int t[],int u)
{
	int i;
	for (int i = 0; i < u; ++i)
	{
		t[i]=SaisirNote();
	}
}
int Occurence(int t[],int Taille,int v)
{
	int i,occ=0;
	for (int i = 0; i < Taille; ++i)
	{
		if (t[i]==v)
		{
			occ++;
		}
	}
	return occ;		
}
bool Existence(int t[],int Taille,int ex)
{
	int i;
	while(t[i]!=ex && Taille-1)
	{
		i++;
	}
	if (t[i]==ex)
		return true;
	else
		return false;
}
void Occurences(int t[],int Taille)
{
	int i=0,key;
 bool Exist;
	key=Occurence(t,Taille,t[i]);
	cout<<t[i]<<"Revient"<<key<<"Fois"<<endl;
	for (int i = 1; i < Taille; ++i)
	{
		 Exist=Existence(t,Taille,t[i-1]);
		 if (Exist==false)
		{
			key=Occurence(t,Taille,t[i]);
			cout<<t[i]<<"Revient"<<key<<"Fois"<<endl;
		}
	}

}
int PetiteNote(int t[],int Taille)
{
	int i,min=t[0];
	for (int i = 0; i < Taille; ++i)
	{
		if (min>t[i])
		{
			min=t[i];
		}
	}
	return min;
}
int GrandeNote(int t[],int u)
{
	int i,max=t[0];
	for (int i = 0; i <u ; ++i)
	{
		if (max<t[i])
		{
			max=t[i];
		}
	}
	return max;
}
int somme(int t[],int u)
{
	int i,som=0;
	for (int i = 0; i <u; ++i)
	{
		som=som+t[i];
	}
 return som;
}
int moyenne(int t[],int Taille)
{
	int i,moy=0;
	for (int i = 0; i < Taille; ++i)
	{
		moy=somme(t,Taille)/Taille;
	}
	return moy;
}
void Trier(int t[],int u)
{
	int i,j;
	for (int i = 0; i <u; ++i)
	{	
	}
}
int Search()
{ int d;
	cout<<"\nTapez la valeur a chercher:";
	cin>>d;
	return d;
}
