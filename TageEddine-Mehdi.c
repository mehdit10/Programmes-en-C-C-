#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
main()
{

	system("color 1");
	int i,j,n,choix,cpt,x,p,ic,cptc;
	float a,b,S,P,D,Q,f,e,moy,math,pc,hg,info,cm,cma,cpc,chg,cinfo,tt[10],moye,m;
	char lettre,op,rep;
	while(rep='n' || 'N'){
	
	printf("\n");
	printf("========================================================================================================================\n");
	printf("========================================================================================================================\n");
	printf("||                                               Projet : Fin d'etude Langage C                                       ||\n");
	printf("||                                               Nom    : Tage Eddine                                                 ||\n");
	printf("||                                               Prenom : Mehdi                                                       ||\n");
	printf("||                                               Groupe : PR-119                                                      ||\n");
	printf("||                                               Filiere: Programmation                                               ||\n");
	printf("||                                               Annee  : 2020-2021                                                   ||\n");
	 
	 printf("========================================================================================================================\n");
	 printf("========================================================================================================================\n");
	printf("|||\t\t\t\t\t\t==MENU-PRINCIPALE==                                                  |||\n\n");
	printf(" ||||\t\t\t\t\t\t1 - Parite                                                         ||||\n\n");
	printf("|||\t\t\t\t\t\t2 - Moyenne-Mention                                                  |||\n\n");
	printf(" ||||\t\t\t\t\t\t3 - Alphabet                                                       ||||\n\n");
	printf("|||\t\t\t\t\t\t4 - Calculatrice                                                     |||\n\n");
	printf(" ||||\t\t\t\t\t\t5 - Conversion(Franc-Euro)                                         ||||\n\n");
	printf("|||\t\t\t\t\t\t6 - Tableau ( dimension-position )                                   |||\n\n");
	printf(" ||||\t\t\t\t\t\t7 - Rang Alphabet                                                  ||||\n\n");
	printf("|||\t\t\t\t\t\t8 - Table de Multiplication                                          |||\n\n");
	printf(" ||||\t\t\t\t\t\t9 - Moyenne de la classe                                           ||||\n\n");
	printf("|||\t\t\t\t\t\t10 - Quitter                                                         |||\n\n");	
	printf("========================================================================================================================\n");
	printf("========================================================================================================================\n");
	printf("\t\t\t\t\t\tFaites votre choix : ");
	scanf("%d",&choix);
	
	system("cls");
	
	switch(choix)
	{
	
		// Parite ( Paire-impaire )
		case 1 :system("color a");do{
		printf("\t\t\t\t\t\t||Parite||\n");
				printf("========================================================================================================================\n");
		printf("  Entrer un nombre : ");
		scanf("%d",&i);
	
	 	if(i%2==0){
	 	printf("  Le nombre est paire\n");
	 	}
	 
	    else{
	    	printf("  le nombre est impaire\n");
	    }
		printf("Voulez-vous continuer ? OUI(o)/NON(n) : ");
		scanf("%c",&rep);
		rep=getchar();
		system("cls");
		system("color 1");
	}
	    while(rep!='n' && rep!='N');
		break;
	
	
	    // 2- Moyenne et Mention
	    case 2 :do{system("color d0");
	    printf("\t\t\t\t\t\t||Moyenne et Mentien||\n");
	    		printf("========================================================================================================================\n");
		 printf("  Entrer la note de Math et son coefficient : ");
	scanf("%f",&math);
	scanf("%f",&cma);
	printf("  Entrer la note de PC et son coefficient : ");
	scanf("%f",&pc);
	scanf("%f",&cpc);
	printf("  Entrer la note de HG et son coefficient : ");
	scanf("%f",&hg);
	scanf("%f",&chg);
	printf("  Entrer la note d'Info et son coefficient : ");
	scanf("%f",&info);
	scanf("%f",&cinfo);
	
	  cm=cma+cpc+chg+cinfo;
	  moy=((math*cma)+(pc*cpc)+(hg*chg)+(info*cinfo))/cm;
	printf("===============================\n");
	if(moy<10){
		printf("  Mention : .\n");
	}
	else if(moy<=12){
		printf("  Mention : Passable.\n");
	}
	else if(moy<=14){
		printf("  Mention : Assez bien.\n");
	}
	else if(moy<=16){
		printf("  Mention : Tres bien.\n");
	}
	else{printf("  Mention : Excellent.\n");
	}
	
	printf("===============================\n");
	printf("  Moyenne : %.2f\n",moy);
	printf("Voulez-vous continuer ? oui(o)/non(n) : ");
	scanf("%c",&rep);
	rep=getchar();
	system("cls");
	system("color 1");
	}
	while(rep!='n' && rep!='N');
	break;
	
	
	
	// 3- Alphabet ( voyelle-consonne )
	case 3 :do{system("color e0");
	 printf("\t\t\t\t\t\t||Alphabet ( Voyelle-Consonne )||\n");
			printf("========================================================================================================================\n");
	printf("  Entrer une lettre : ");
	getchar();
	scanf("%c",&lettre);
	
	  if(lettre == 'a' || lettre == 'e' || lettre == 'i' || lettre == 'o' || lettre == 'u' || lettre == 'y')
	  {
	  	printf("  C'est une voyelle.\n");
	  }
	   else if(lettre == 'q' || lettre == 'w' || lettre == 'r' || lettre == 't' || lettre == 'p' || lettre == 's' || lettre == 'd' || lettre == 'f' || lettre == 'g' || lettre == 'h' || lettre == 'j' || lettre == 'k' || lettre == 'l' || lettre == 'z' || lettre == 'x' || lettre == 'c' || lettre == 'v' || lettre == 'b' || lettre == 'm' || lettre == 'n'){
	     	printf("  C'est une consonne.\n");
	     } 
		else{printf("  Erreur, ce n'est pas une lettre\n.");
		};
		printf("Voulez-vous continuer ? OUI(o)/NON(n) : ");
		scanf("%c",&rep);
		rep=getchar();
		system("cls");
			system("color 1");

		}
	    while(rep!='n' && rep!='N');
		break;
		
	
		// 4- Mini Calculatrice
		case 4 :do{system("color 4");
		printf("\t\t\t\t\t\t||Mini-Calculatrice||\n");
				printf("========================================================================================================================\n");
	     
	printf("  Entrer un premier nombre : ");
	scanf("%f",&a);
	
	printf("  Choisissez un operateur < +,-,/,x > : ");
	scanf("%c",&op);
	op=getchar();

	printf("  Entrer le second nombre : ");
	scanf("%f",&b);
	
	 switch(op){
	 	case '+' : S=a+b; printf("\n Somme : %.2f + %.2f = %.2f\n",a,b,S);break;
	 	case 'x' : P=a*b; printf("\n Produit : %.2f x %.2f = %.2f\n",a,b,P);break;
	 	case '-' : D=a-b; printf("\n Difference : %.2f - %.2f = %.2f\n",a,b,D);break;
	 	case '/' : Q=a/b; printf("\n Quotient : %.2f / %.2f = %.2f\n",a,b,Q);break;
	 	default :  printf("\tERREUR\n");
	 	};
	 printf("Voulez-vous continuer ? OUI(o)/NON(n) : ");
		scanf("%c",&rep);
		rep=getchar();
		system("cls");
			system("color 1");

		}
	    while(rep!='n' && rep!='N');
	 break;
	 
	 
	 // 5- Covertisseur
	     case 5 :do{system("color 74");
	      printf("\t\t\t\t\t\t||Convertisseur||\n");
	     			printf("========================================================================================================================\n");
		 printf("  Entrer la somme en CFA : ");
	scanf("%f",&f);
	
	printf("  La somme en Euro vaut : %.3f\n\n",f/655.957);
	
	printf("  Entrer la somme en Euro : ");
	scanf("%f",&e);
	
	printf("  La somme en CFA vaut : %.3f\n\n",e*655.957);
	printf("Voulez-vous continuer ? OUI(o)/NON(n) : ");
		scanf("%c",&rep);
		rep=getchar();
		system("cls");
			system("color 1");

		}
	    while(rep!='n' && rep!='N');
	break;
	     
	     // 6- Tableau ( dimension-position )
	     case 6 :do{system("color 8c");
		 printf("\t\t\t\t\t\t||Tableau ( Dimension-position )||\n");
	     			printf("========================================================================================================================\n");
	     
		 printf("Entrer les dimensions du tableau : ");
	scanf("%d",&n);
	int t[n],k;
	printf("Entrer les elements du tableau : ");
	for(k=1;k<=n;k++){
		scanf("%d",&t[k]);
	}
	printf("\nTableau Positif :\n");
	for(k=1;k<=n;k++){
		if(t[k]>=0){
		printf("%d\t",t[k]);}
		
	}
	printf("\n\nTableau Negatif :\n");
	for(k=1;k<=n;k++){
		if(t[k]<0){
		printf("%d\t",t[k]);}
		
	};
 	printf("\nVoulez-vous continuer ? OUI(o)/NON(n) : ");
		scanf("%c",&rep);
		rep=getchar();
		system("cls");
			system("color 1");

		}
	    while(rep!='n' && rep!='N');
		 break;
		 
		 // 7- Rang alphabet
		 case 7 : do{char tab[27]={' ','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'},l;
		 printf("\t\t\t\t\t\t||Rang Alphabet||\n");
	     			printf("========================================================================================================================\n");
		 printf("Entrer une lettre : ");
		scanf("%c",&l);
		l=getchar();
		for(j=1;j<=27;j++){
		if(l==tab[j]){
		printf("Sa position est %d\n",j);
		}
		};	
			printf("Voulez-vous continuer ? OUI(o)/NON(n) : ");
		scanf("%c",&rep);
		rep=getchar();
		system("cls");
			system("color 1");

		}
	    while(rep!='n' && rep!='N');break;
		
		// table de multiplication.      
		 case 8 : do{system("color 50");
		 printf("\t\t\t\t\t\t||Table de Multiplication||\n");
	     			printf("========================================================================================================================\n");
		 printf("\t\t\t\t\t\tEntrer un chiffre : ");	
					scanf("%d",&x);
					printf("\t\t\t\t\t\tTable de Multiplication par %d \n",x);
					printf("\t\t\t\t\t\t===============================\n");
					for(cpt=1;cpt<=12;cpt=cpt+1){
		
					p=x*cpt;
					printf("\t\t\t\t\t\t||%d x %d = %d\n",x,cpt,p);
	}
		 printf("Voulez-vous continuer ? OUI(o)/NON(n) : ");
		scanf("%c",&rep);
		rep=getchar();
		system("cls");
			system("color 1");

		}
	    while(rep!='n' && rep!='N');break;
		 
		 // Moyenne de la Classe
		 case 9 : do{system("color 6b");
		 printf("\t\t\t\t\t\t||Moyenne Classe||\n");
				printf("========================================================================================================================\n");	
	for(ic=1;ic<=10;ic++){
		printf("Entrer la moyenne numero %d :",ic);
		scanf("%f",&tt[ic]);
		m=m+tt[ic];
	}
	moye=m/10;
	printf("\n La moyenne de la classe est : %.2f\n",moye);
	for(ic=1;ic<=10;ic++){
		if(tt[ic]>moye){
			cptc=cptc+1;
		}
	}
	printf(" %d etudiants ont une moyenne superieur a celle de la classe\n",cptc);
	
		 printf("Voulez-vous continuer ? OUI(o)/NON(n) : ");
		scanf("%c",&rep);
		rep=getchar();
		system("cls");
			system("color 1");

		}
	    while(rep!='n' && rep!='N');break;
	    
	    case 10 : printf("Exit(0)");
	    return 0;
		 
		 default : printf("Erreur, veuillez choisir un chiffre valide.");	 
		 }
		 }
		 }
