#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<cmath>
using namespace std;

main(){
	system("color 2f");
	int choix,c,l,SM[4][4],tA[4][4],tB[4][4];
	char rep;
	while(rep ='n' || 'N'){
	
	
	
	
	cout<<"\n";
	cout<<"========================================================================================================================\n";
	cout<<"========================================================================================================================\n";
	cout<<"||                                               Projet fin d'etude : Langage C++                                      ||\n";
	cout<<"||                                               Nom    : Tage Eddine                                                 ||\n";
	cout<<"||                                               Prenom : Mehdi                                                       ||\n";
	cout<<"||                                               Groupe : PR-119                                                      ||\n";
	cout<<"||                                               Filiere: Programmation                                               ||\n";
	cout<<"||                                               Annee  : 2020-2021                                                   ||\n";
	 
	 cout<<"========================================================================================================================\n";
	 cout<<"========================================================================================================================\n";
	cout<<"|||\t\t\t\t\t\t==MENU-PRINCIPALE==                                                  |||\n\n";
	cout<<" ||||\t\t\t\t\t\t1 - Somme Matrice carre 3 x 3                                      ||||\n\n";
	cout<<"|||\t\t\t\t\t\t2 - MIN-MAX Position                                                 |||\n\n";
	cout<<" ||||\t\t\t\t\t\t3 - Transposee Matrice 3 x 3                                       ||||\n\n";
	cout<<"|||\t\t\t\t\t\t4 - Somme Matrice d'ordre (n x p)                                    |||\n\n";
	cout<<" ||||\t\t\t\t\t\t5 - Trie Croissant - Decroissant                                   ||||\n\n";
	cout<<"|||\t\t\t\t\t\t6 - Heure Min Sec                                                    |||\n\n";
	cout<<" ||||\t\t\t\t\t\t7 - Equation du Second Degre                                       ||||\n\n";
	cout<<"|||\t\t\t\t\t\t8 - Quitter                                                          |||\n\n";
	cout<<"========================================================================================================================\n";
	cout<<"========================================================================================================================\n";
	cout<<"\t\t\t\t\t\tFaites votre choix : ";
	cin>>choix;
	
	system("cls");
	
	switch(choix){
		
		// Somme Matrcie carre 3 x 3
		
		case 1 : system("color 10");do{
			cout<<"\t\t\t\t\t\t=======================\n";
			cout<<"\t\t\t\t\t\t|| Matrice carre 3 x 3 ||\n";
			cout<<"\t\t\t\t\t\t=======================\n";
			// Matrice A 3 x 3
	cout<<"Entrer les coefficient de la matrice A : \n";
	
	for(c=1;c<=3;c++){
		for(l=1;l<=3;l++){
			
			cout<<"A["<<c<<"]["<<l<<"] = ";
			cin>>tA[c][l];
		}
		
	}
	for(c=1;c<=3;c++){
		for(l=1;l<=3;l++){
			
			cout<<"\t  \t"<<tA[c][l];
			
		}
		cout<<"\n\n";
	}
	
	// Matrice B 3 x 3
	cout<<"Entrer les coefficient de la matrice B : \n";
	
	for(c=1;c<=3;c++){
		for(l=1;l<=3;l++){
			
			cout<<"B["<<c<<"]["<<l<<"] = ";
			cin>>tB[c][l];
		}
		
	}
	for(c=1;c<=3;c++){
		for(l=1;l<=3;l++){
			
			cout<<"\t  \t"<<tB[c][l];
			
		}
		cout<<"\n\n";
	}
	// Somme des matrice A + B 3 x 3
	cout<<"Somme des deux Matrice A + B : \n";
	
		for(c=1;c<=3;c++){
			for(l=1;l<=3;l++){
				SM[c][l] = tA[c][l] + tB[c][l];
				cout<<"\t\t"<<SM[c][l];
			}
			cout<<"\n\n";
		}
		cout<<"Voulez-vous continuer ? OUI(o)/NON(n) : ";
		cin>>rep;
		system("cls");
			
		}
		while(rep!='n' && rep!='N');
		break;
		
		// MIN-MAX POSITION
		
		case 2 : system("color 3e");do{
			cout<<"\t\t\t\t\t\t=================================\n";
			cout<<"\t\t\t\t\t\t|| Minimum Maximum et Position ||\n";
			cout<<"\t\t\t\t\t\t=================================\n";
		int T[50];
    	int posmin,posmax,i, max, min, taille;
 
    cout<<"Entrez la taille du tableau : ";
    cin>>taille;
    
    cout<<"Entrez "<<taille <<" elements du tableau : \n";
    for(i=0; i<taille; i++){
	
        cin>>T[i];
}
    max = 0;
    min = 0;
    
    for(i=0; i<taille; i++)
    {
    	if(i==0){
    		min =max = T[i];
    		posmin=posmax= i;
		}
  
        else{
        	if(T[i] > max)
            {
            	max = T[i];
            	posmax= i;
			}

        if(T[i] < min){
        	 min = T[i];
            posmin= i;
		}
		}
           
    }
    
    cout<<"\nLe Maximum est : " << max <<"\n\nSa position est : "<<posmax+1<< "\n\n";
    cout<<"Le minimum est  : " << min<<"\n\nSa position est : "<<posmin+1;
			cout<<"\nVoulez-vous continuer ? OUI(o)/NON(n) : ";
		cin>>rep;
		system("cls");
		}
		while(rep!='n' && rep!='N');
		break;
		
		// Transposee de Matrice
		case 3 : system("color de");do{
			cout<<"\t\t\t\t\t\t===========================\n";
			cout<<"\t\t\t\t\t\t|| Transposee de Matrice ||\n";
			cout<<"\t\t\t\t\t\t===========================\n";
			int c,l,TA[4][4];
	
	// Matrice A 3 x 3
	cout<<"Entrer les coefficient de la matrice A : \n";
	
	for(c=1;c<=3;c++){
		for(l=1;l<=3;l++){
			
			cout<<"A["<<c<<"]["<<l<<"] = ";
			cin>>tA[c][l];
		}
		
	}
	cout<<"\t\t Affichage de la Matrice A : \n";
	for(c=1;c<=3;c++){
		for(l=1;l<=3;l++){
			
			cout<<"\t  \t"<<tA[c][l];
			
		}
		cout<<"\n\n";
	}
	
	cout<<"\t\t Affichage de la Transposee de la Matrice A : \n";
	for(c=1;c<=3;c++){
		for(l=1;l<=3;l++){
			
			cout<<"\t  \t"<<tA[l][c];
			
		}
		cout<<"\n\n";
	}
	cout<<"\nVoulez-vous continuer ? OUI(o)/NON(n) : ";
		cin>>rep;
		system("cls");
			
		}
		while(rep!='n' && rep!='N');
		break;
		
		// Somme des matrice (n x p)
		case 4 : system("color 4");do{
			cout<<"\t\t\t\t\t\t===========================\n";
			cout<<"\t\t\t\t\t\t|| Somme Matrice (n x p) ||\n";
			cout<<"\t\t\t\t\t\t===========================\n";
			
		int matx1[10][10], matx2[10][10], matx3[10][10];
  int i,j,row,col;
  
  cout<<"Entrer le nombre de lignes : ";
  cin>>row;
  cout<<"Entrer le nombre de colones : ";
  cin>>col;
  
  // Matrice A
  cout<<"\nEntrez la matrice A : \n";
  for(i=0; i < row; ++i)
    for(j = 0; j < col; ++j)
      cin>>matx1[i][j];
      
	  for(i=0; i < row; ++i){
	  
    for(j = 0; j < col; ++j){
	
      cout<<"\t\t"<<matx1[i][j];
	  }
      cout<<"\n\n";
  }
      // Matrice B
  cout<<"\nEntrez la matrice B : \n";
  for(i = 0; i < row; ++i)
    for(j = 0; j < col; ++j)
      cin>>matx2[i][j];
      for(i=0; i < row; ++i){
	  
    for(j = 0; j < col; ++j){
	
      cout<<"\t\t"<<matx2[i][j];
	  }
      cout<<"\n\n";
  }
  
  // Somme des deux Matrices
  cout<<"\nSomme des deux Matrices :\n";
  for(i = 0; i < row; ++i)
  {
    for(j=0; j < col; ++j)
    {
      matx3[i][j] = matx1[i][j] + matx2[i][j];
      cout<<"\t\t"<<matx3[i][j];
    }
    cout<<"\n\n";
  }
    cout<<"\nVoulez-vous continuer ? OUI(o)/NON(n) : ";
		cin>>rep;
		system("cls");
  }

	while(rep!='n' && rep!='N');
	break;

	// Equation du second Degre
	case 5 : system("color b2");do{
		cout<<"\t\t\t\t\t\t==================================\n";
			cout<<"\t\t\t\t\t\t|| Ordre Croissant - Decroissant||\n";
			cout<<"\t\t\t\t\t\t==================================\n";
		int tab[10], i,j,k=0;
    i=0;
               	
                        for (i=1; i<=10; i++){
                            cout<< "Entrer le nombre "<<i<<" : ";
                            cin>>tab[i];
                        }
                        for(i=1; i<=10; i++){
                           for (j=1; j<=10; j++){
                                if (tab[i]<tab[j]){
                                    k=tab[i];
                                    tab[i]=tab[j];
                                    tab[j]=k;
                                }

                           }
                        }
                        cout<< "\n Ordre croissant :\n";
                        for(i=1; i<=10; i++){
                            cout<< tab[i]<< "\t";
                        }
                        for(i=1; i<=10; i++){
                           for (j=1; j<=10; j++){
                                if (tab[i]>tab[j]){
                                    k=tab[i];
                                    tab[i]=tab[j];
                                    tab[j]=k;
                                }

                           }
                        }
                        cout<<"\n";
                        cout<< "\n Ordre decroissant :\n";
                        for(i=1; i<=10; i++){
                            cout<< tab[i]<< "\t";
                        }
                        cout<<"\nVoulez-vous continuer ? OUI(o)/NON(n) : ";
		cin>>rep;
		system("cls");
		}
		while(rep!='n' && rep!='N');
		break;
		
		// HEUR MIN SEC
		
		case 6 :system("color c7");do{
			cout<<"\t\t\t\t\t\t=======================\n";
			cout<<"\t\t\t\t\t\t|| HEURE - MIN - SEC ||\n";
			cout<<"\t\t\t\t\t\t=======================\n";
		int h,m,s,i;
	
	cout<<"Entrer l'heur : ";
	cin>>h;
	cout<<"Entrer la minute : ";
	cin>>m;
	cout<<"Entrer la seconde : ";
	cin>>s;
	
 if(m==59){
		cout<<"Dans une minute il fera : "<<h+1<<"H "<<"00m "<<s<<"s \n";
}
	else{
	cout<<"Dans une minute il fera : "<<h<<"H "<<m+1<<"m "<<s<<"s ";
	}
	
	if(h==23 && m==59){
		
		cout<<"Dans une minute il fera : "<<"00H"<<"00m"<<s<<"s";
 }

	cout<<"\nVoulez-vous continuer ? OUI(o)/NON(n) : ";
		cin>>rep;
		system("cls");
	}
	while(rep!='n' && rep!='N');
	break;
	
		// Equation du second Degree 
	case 7 : system("color b");do{
		cout<<"\t\t\t\t\t\t==============================\n";
			cout<<"\t\t\t\t\t\t|| Calcule de Ax^2 + Bx + C ||\n";
			cout<<"\t\t\t\t\t\t==============================\n";
	float a,b,c; 
float x1,x2;

float delta;

cout << "Recherche des solutions reelles d'une equation du second degre.";
cout << endl;
cout << "L'equation est : ax*2 + bx + c = 0" << endl;
cout << endl;
// Saisie des donnees
cout << "Entrez la valeur de a : ";
cin >> a;
cout << "Entrez la valeur de b : ";
cin >> b;
cout << "Entrez la valeur de c : ";
cin >> c;
if (a == 0)

cout << "Erreur ! Votre equation n'est pas du second degre." << endl;
else
{
delta = b*b - 4*a*c;
if (delta < 0)
cout << "\nAucune solution reelle." << endl;
else
if (delta == 0)
{
x1 = -b/(2*a);
cout << "\nUne seule solution reelle : " << x1 << endl;
}
else // Cas ou delta > 0
{
x1 = (-b+sqrt(delta))/(2*a);
x2 = (-b-sqrt(delta))/(2*a);
cout << "\nIl y a deux solutions reelles." << endl;
cout << "\nPremiere solution X1 : " << x1 << endl;
cout << "\nDeuxieme solution X2 : " << x2 << endl;
}
}
cout<<"\nVoulez-vous continuer ? OUI(o)/NON(n) : ";
		cin>>rep;
		system("cls");
	}
	
	while(rep!='n' && rep!='N');
	break;
	
	// EXIT
	
	case 8 : cout<<"Exit( 0 )";
			return 0;
	
	default : 
	
	cout<<"Erreur d'entrer, veuillez choisir un chiffre valide.\n";
	
}
}
}
