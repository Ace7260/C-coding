#include <iostream>
#include <chalenge.c>
using namespace std;

int main(int argc, char const *argv[])
{   cout<<"\t\t\t\t*********\n";
	cout<<"\t\t\t\t*Welcome*\n";
	cout<<"\t\t\t\t*********\n";

	int a,b,c,v,d;
	int t[100];
	a=SaisirEntier();
	SaisirNnote(t,a);
	Menu();
	cout<<"\nVotre choix:";
	cin>>c;
	switch(c)
	{
		case -1:Arreter();
		   break;
		case 0: {
			     cout<<"ces valeur sont:\n";
			     Afficher(t,a);
			     break;
			    }
		case 1: {
			cout<<"\nTapez de nouveau note:";
			Remplir(t,a);
			Menu();
			cout<<"\nVotre choix:";
	        cin>>c;
		    break;}
		case 2:{ d=Search();
			     Occurence(t,a,d);
                 cout<<"le nombre d'occurence de "<<d<<" est "<<Occurence(t,a,d);
			     break;
		       }
		case 3:{ d=Search();
			    Existence(t,a,d);
			    if (Existence(t,a,d)==true)
			    {
			        cout<<d<<" Existe dans le tableau";
			        break;
			    }
			    else
			    {
			    	cout<<d<<"  n'existe pas dans le tableau";
			        break;
			    }
			   } 
		case 4:Occurences(t,a);
		        break;
		case 5:{
			PetiteNote(t,a);
			cout<<"la Petite Note du tableau est "<<PetiteNote(t,a);
			break;
		    }
		case 6:{
			GrandeNote(t,a);
			cout<<"la grande note du tableau est "<<GrandeNote(t,a);
		 	break;}
		case 7:{
			somme(t,a);
			cout<<"la somme des elements du tableau est "<<somme(t,a);
			break;}
		case 8:{
			moyenne(t,a);
			cout<<"la moyenne du tableau est "<<moyenne(t,a);
			break;}
		case 9:Trier(t,a);
			break;      	
	}
	return 0;
}
