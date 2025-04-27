/*Escreva um programa que seja capaz de concluir qual dentre os seguintes animais foi escolhido, atrav�s
de perguntas e respostas (o programa deve perguntar a classifica��o do animal e receber como
resposta apenas sim ou n�o). Animais poss�veis: le�o, cavalo, homem, macaco, morcego, baleia,
avestruz, ping�im, pato, �guia, tartaruga, crocodilo e cobra.
Exemplo:
� mam�fero? Sim.
� quadr�pede? Sim.
� carn�voro? N�o.
� herb�voro? Sim.
Ent�o o animal escolhido foi o cavalo.
Utilize as seguintes classifica��es: */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

int main(){	
	setlocale(LC_ALL,"PORTUGUESE");
	char mam[4], ave[4], rep[4], qua[4], carn[4], herb[4], bip[4], nv[4], nad[4], cc[4], pol[4], aqu[4],
	car[4], sp[4], der[4], voa[4], trop[4], oni[4], frut[4];
		
	printf("Programa para averiguar o animal escolhido\n");
	printf("Responda com SIM ou NAO\n");
	printf("� um mam�fero? ");
	fflush(stdin);
	gets(mam);
					
	if(strcmp(strupr(mam),"SIM") == 0){	
		printf("Quadr�pedes? ");
		fflush(stdin);
		gets(qua);
		}
			if(strcmp(strupr(qua),"SIM") == 0){
				printf("Carn�voro? ");
				fflush(stdin);
				gets(carn);
				}
					if(strcmp(strupr(carn),"SIM") == 0){
						printf("\nLe�o\n");
						}
							if(strcmp(strupr(carn),"NAO") == 0){
								printf("Herb�voro? ");
								fflush(stdin);
								gets(herb);
						   		}
									if(strcmp(strupr(herb),"SIM") == 0){
										printf("\nCavalo\n");
										}
			if(strcmp(strupr(qua),"NAO") == 0){
				printf("B�pedes? ");
				fflush(stdin);
				gets(bip);
				}
					if(strcmp(strupr(bip),"SIM") == 0){
				   	   	printf("On�voro? ");
						fflush(stdin); 
						gets(oni);
						}
							if(strcmp(strupr(oni),"SIM") == 0){
								printf("\nHomem\n");
			   					}
									if(strcmp(strupr(oni),"NAO") == 0){
										printf("Frut�fero? ");
										fflush(stdin);
										gets(frut);
										}
											if(strcmp(strupr(frut),"SIM") == 0){
												printf("\nMacaco\n");
											   	}
			if(strcmp(strupr(bip),"NAO") == 0){
				printf("Voadores? ");
				fflush(stdin);
				gets(voa);
				}
					if(strcmp(strupr(voa),"SIM") == 0){
						printf("\nMorcego\n");
						}
			if(strcmp(strupr(voa),"NAO") == 0){
				printf("Aqu�ticos? ");
				fflush(stdin);
				gets(aqu);
				}
					if(strcmp(strupr(aqu),"SIM") == 0){
						printf("\nBaleia\n");
						}
	if(strcmp(strupr(mam),"NAO") == 0){
		printf("� uma ave? ");
		fflush(stdin);
		gets(ave);
		}
			if(strcmp(strupr(ave),"SIM") == 0){
				printf("N�o-voadoras? ");
				fflush(stdin);
				gets(nv);
				}
					if(strcmp(strupr(nv),"SIM") == 0){
						printf("Tropical? ");
						fflush(stdin);
						gets(trop);
						}
							if(strcmp(strupr(trop),"SIM") == 0){
								printf("\nAvestruz\n");
								}
								if(strcmp(strupr(trop),"NAO") == 0){
									printf("Polar? ");
									fflush(stdin);
									gets(pol);
									}
										if(strcmp(strupr(pol),"SIM") == 0){
											printf("\nPing�im\n");
											}
			if(strcmp(strupr(nv),"NAO") == 0){
				printf("Nadadoras? ");
				fflush(stdin);	
				gets(nad);
				}
					if(strcmp(strupr(nad),"SIM") == 0){
						printf("\nPato\n");
						}	
			if(strcmp(strupr(nad),"NAO") == 0){
				printf("De rapina? ");
				fflush(stdin);	
				gets(der);
				}
					if(strcmp(strupr(der),"SIM") == 0){
						printf("\n�guia\n");
						}
	if(strcmp(strupr(ave),"NAO") == 0){
		printf("� um r�ptil? ");
		fflush(stdin);
		gets(rep);
		}
			if(strcmp(strupr(rep),"SIM") == 0){
				printf("Com casco? ");
				fflush(stdin);
				gets(cc);
				}
					if(strcmp(strupr(cc),"SIM") == 0){
			   			printf("\nTartaruga\n");
						}
			if(strcmp(strupr(cc),"NAO") == 0){
				printf("Carn�voro? ");
				fflush(stdin);
				gets(car);
				}
					if(strcmp(strupr(car),"SIM") == 0){
						printf("\nCrocodilo\n");
						}	
			if(strcmp(strupr(car),"NAO") == 0){
				printf("Sem patas? ");
				fflush(stdin);
				gets(sp);
				}
					if(strcmp(strupr(sp),"SIM") == 0){
						printf("\nCobra\n");	
	  	  	  		  	}
							if(strcmp(strupr(rep),"NAO") == 0){
								printf("\nAnimal n�o se encontra na lista\n");	
	  	  	  		  			}
							if(strcmp(strupr(herb),"NAO") == 0){
								printf("\nAnimal n�o se encontra na lista\n");	
	  	  	  		  			}
							if(strcmp(strupr(frut),"NAO") == 0){
								printf("\nAnimal n�o se encontra na lista\n");	
	  	  	  		  			}
							if(strcmp(strupr(aqu),"NAO") == 0){
								printf("\nAnimal n�o se encontra na lista\n");	
	  	  	  		  			}
							if(strcmp(strupr(pol),"NAO") == 0){
								printf("\nAnimal n�o se encontra na lista\n");	
	  	  	  		  			}
							if(strcmp(strupr(der),"NAO") == 0){
								printf("\nAnimal n�o se encontra na lista\n");	
	  	  	  		  			}
							if(strcmp(strupr(sp),"NAO") == 0){
								printf("\nAnimal n�o se encontra na lista\n");	
	  	  	  		  			}																						
	
	return 0;
}