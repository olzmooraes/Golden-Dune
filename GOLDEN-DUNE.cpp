#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <locale.h>

/*EXISTE ALEATORIOS IGUAIS
  APENAS PARA FICAR ORGANIZADO
  SEM RISCO DE CONFUS�O*/


//aleatoriedade dos monstro/bau
int aleatoriodemonstrosebaus(int min, int max){
   srand(time(0));
   int num = (rand() % (max - min + 1)) + min;
   return num;
}


//aleatorio de chanses de luta com o monstro e/ou chanses de itens dos baus
int chansesdojogo(){
   int min,num,max;
   min = 1, max = 6;
   srand(time(0));
   num = (rand() % (max - min + 1)) + min;
   return num;
}

int ouroaleatorio(int min,int max){//ouro aleatorio nos baus
   srand(time(0));
   int num = (rand() % (max - min + 1)) + min;
   return num;
}

int danoaleatorio(int min,int max){//dano aleatorio no monstro
   srand(time(0));
   int num = (rand() % (max - min + 1)) + min;
   return num;
}

int main(){
    system("color 02");
    setlocale(LC_ALL, "Portuguese");

    int monstro, bau, ouro = 0, vida=5, vidaaliado = 0,repeticao,dano, guardarouro = 0;
    int contagem[3], decisao[6], fragmento = 0, lutaconteudo, vidamonstro=100;
    bool porta=false, aliado=false, espada=false;
   
   //contagem [1] � a de monstros
   //contagem [2] e a de baus
   
   /*decisao[3], sao todas decisoes do jogo
            decisao[1] � de porta
            decisao[2] � de matar monstro e abrir bau
            decisao[3] � de tranformar tudo em ouro
            decisao[4] � para fazer uma compra*/
   //repeti��o servepara jogar o jogo
   /*lutaconteudo � para guardar o aleatorio de chanses de um item*/

   
    contagem[1]=0;
    contagem[2]=0;
         
    printf(" GOLDEN DUNE ERA UM PERCURSO ANTIGO FEITO POR\n MINEIROS DESEMPREGADOS OU \n POR AVENTUREIROS BUSCANDO A PROPRIA MORTE!!\n");
    printf(" VOCE � UM SER ANCESTRAL CAPAZ DE DESVENDAR TODOS OS MISTERIOS,\n SAIR VIVO (COM CHEIO DE OURO INCLUSIVE)\n E PROVAR PARA TODOS QUE � FODA OU APENAS UM IDIOTA QUALQUER????\n");
    printf(" N�O SE PREOCUPE SE ESCUTAR UNS GRITOS OU UNS SUSPIROS.....\n SEM MEDINHO BEB�!\n HAHAHHAHAHAHAHAAH!!\n S�O S� OS ESPIRITOS FRUSTRADOS\n J�J� VOCE ENTRAR� PARA ESSA TURMA ");
    printf(" DE IN�TEIS\n QUE N�O CONSEGUIRAM CHEGAR NO FIM!\n");
    printf(" FIQUE ATENTO, EXISTE UMA LENDA\n QUE OS CRIADORES DESTA DUNA\n DEIXARAM UM ENIGMA CODIFICADO COM UM SEGREDO\n QUE CONSEGUE OS RECURSOS M�XIMOS DA DUNA!!\n\n");
    printf(" O ENIGMA �: 1 8(0) 10 5(1) 2(0) 1\n\n");
    printf(" A DICA � UMA SIMPLES PERGUNTA:\n\n");
    printf(" VOC� FOI PARA A AULA DO NILTON HOJE?.....\n\n\n");
    printf("          - - - - -      \n");
    printf("  - - - - - - - - - - - - -\n");
    printf("  BEM VINDO AO GOLDEN DUNE!!!!\n  SE DIVIRTA OU ME DIVIRTA, SUA ESCOLHA\n");
    printf("  - - - - - - - - - - - - -\n");
    printf("          - - - - -      \n\n\n");


    while(porta==false){
        printf(" ENTRE NA PORTA LOGO SEU COVARDE!\n N�O ADIANTA CORRER!\n VOC� VAI MORRER DE QUALQUER JEITO.\n HAHAHAHAHAHAAAAA\n\n");
        printf(" DESEJA PERMANECER NESSA PORTA? ");
        printf(" \n 1 - SIM \n 0- N�O\n");
        scanf("%d", &decisao[1]);
        if(decisao[1]==1){
            porta=true;
            system("cls");
        }else if(decisao[1]==0){
            porta=false;
            system("cls");
        }else{
            printf(" O��O INVALIDA!\n");
            porta=false;
            system("cls");
                }
    }
    monstro = aleatoriodemonstrosebaus(1,5);
    bau = aleatoriodemonstrosebaus(3,7);

      //sistema de perguntas sobre trocar de porta
      
    printf("VOCE TEM 0 OURO(s)\n"); 
    printf("VOCE TEM %d VIDA(S)\n\n", vida);
    repeticao = monstro + bau;//variavel para jogar o jogo
   
    for(int i=1; i<=repeticao; i++){//repeti��o das perguntas:
   
   
        //PRIMEIRO JEITO DE MORRER:
        if(((vida<=0)&&((aliado==true)&&(vidaaliado==0)))||((vida<=0)&&(aliado==false))){
                                   
            printf("\n\nGAME OVER\n");
            printf("-- ESTATISTICAS --\n");
            printf("Monstros assasinados: %d\n", contagem[1]);
            printf("Baus abertos: %d\n", contagem[2]);
            printf("Moedas de ouro coletadas: %d\n", ouro);
            printf("tempo: insignificante\n"); 
            system("PAUSE");      
         }
         
         //SEGUNDO JEITO DE GAME OVER:
        else if((vida<=0)&&(aliado==false)){
            system("cls");
           
                         
            printf("GAME OVER\n\n");
            printf("-- ESTATISTICAS --\n");
            printf("VOC� PASSOU POR: 1 SALA");
            printf("Monstros assasinados: %d\n", contagem[1]);
            printf("Baus abertos: %d\n", contagem[2]);
            printf("Moedas de ouro coletadas: %d\n", ouro);
            printf("tempo: insignificante\n");
            system("PAUSE");
     
        }
           
      //SEGUNDA CHANCE:  
        else if((vida<=0)&&(aliado==true)){
            system("cls");
            printf("DEPOIS DE UM GOLPE ATORDOADOR QUE O ANCESTRAL DISPARA\n O MONSTRO CONTRA ATACA E\n");
            printf("O MONSTRO INFELIZMENTE LEVOU ESSE ROUND!!\n");
            printf("ACABARAM SUAS VIDAS!!!\nMAS ESPERE.......\nSEU ALIADO TRANSFERIOU SUAS PR�PRIAS VIDAS PARA VOC�!!!!\nFA�A BOM PROVEITO!!!\n\n");
            aliado=false;
            vida=vidaaliado;
            printf("VIDA ATUAL (%d)\n",vida);
            i--;
        }
           
      //CONGRATULATIONS!!!
        if((bau==0)&&(monstro==0)&&(vida>0)){
        printf("VOC� GANHOU!!!\n\n");
        printf("   -- ESTATISTICAS --\n");
        printf("VOC� PASSOU POR: 1 SALA\n");
        printf("MONSTROS ASSASINADOS: %d\n", contagem[1]);
        printf("BA�S ABERTOS: %d\n", contagem[2]);
        printf("MOEDAS E OURO COLETADAS: %d\n", ouro);
        printf("FRAGMENTOS COLETADOS: %d DE 5\n", fragmento);
        system("PAUSE");

        }
        if(vidamonstro<=0){
            printf("VOC� MATOU O MONSTRO\n");
            monstro--;
            vidamonstro = 100;
        }
        printf("EXISTEM %d MONSTRO(S)!\n", monstro);
        printf("EXISTEM %d BAU(S)!\n\n", bau);
        printf("1 - ABRIR BA�\n");     //sistemaas de perguntas do jogo
        printf("2 - BATALHAR COM O MONSTRO\n");
        printf("3 - COMPRAR ITEM\n");
        scanf("%d", &decisao[2]);

        switch(decisao[2]){ //casos da decisao que foi tomada



           case 1: //se escolhar abrir o bau
             
             
             if(bau>0){
                 lutaconteudo = chansesdojogo();
             if(lutaconteudo==1){
                   //BAU ARMADILHA
                     system("cls");
                     printf("HAHA! \nBA� ARMADILHA\n\n!");
                     vida--;
                     bau--;
                     contagem[2]=contagem[2]+1;
                     printf("ACABOU DE PERDER UMA VIDA (%d)!\n\n", vida);
           
                                  }
           
              else if(lutaconteudo==2){
                 
                    system("cls");
                    //VIDA NO BAU
                    printf("VOC� ENCONTROU UMA VIDA!\n");
                    vida++;
                    guardarouro = ouroaleatorio(1,10);
                    ouro = ouro + guardarouro;
                    bau--;
                    contagem[2]=contagem[2]+1;
                    printf("AGORA VOC� TEM %d VIDAS\n",vida);                  
                    printf("VOC� ENCONTROU %d MOEDAS\n\n", guardarouro);
                       
                                    }
              else if((lutaconteudo>2)&&(lutaconteudo<6)){
                    system("cls");
                    //FRAGMENTO DE ESPADA
                    fragmento = fragmento + 1;
                    guardarouro = ouroaleatorio(5,15);
                    printf("REVIRANDO OS CANTOS DESSE BA� MISTERIOSO\nVOC� ENCONTRA MEIO EPOEIRADO UM PEDA�O DE METAL NUNCA VISTO ANTES\n");
                    printf("MAS NA VERDADE\nVOC� ENCONTROU UM FRAGMENTO!!!\n (FRAGMENTOS %d DE 5)\n", fragmento);
                    printf("VOC� ENCONTROU %d MOEDAS\n\n", guardarouro);
                    ouro = ouro + guardarouro;
                    bau--;
                    contagem[2]=contagem[2]+1;
                     
                       
                                    }
                else if(lutaconteudo==6){
                    if(aliado==false){
                        system("cls");
                        //ALIADO NO BAU
                        aliado = true;
                        bau--;
                        contagem[2]=contagem[2]+1;
                        vidaaliado = 5;
                        printf("FUGINDO DOS TERRIVEIS MONSTROS E PRESO EM UM BA� ENORME, UM ELFO NOTURNO!!!\n");
                        printf("AGORA VOC� TEM UM ALIADO!\n\n");
                      }
                    else if(aliado==true){
                      system("cls");
                          bau--;
                          contagem[2]=contagem[2]+1;
                          printf("DO MESMO JEITO QUE ANTES, VOC� ENCONTRA UM OUTRO ELFO, MAS NESSA VIAGEM S� \nEXISTE ESPA�O PARA UM ALIADO\nPOIS OS RECURSOS S�O ESCASSOS E MAL D� PARA UM ALIADO\n\n");
                          printf("ENCONTROU OUTRO ALIADO!\nDESCULPE!\nS� UM ALIADO POR JOGO\n\n");
                          printf("VOC� JA TEM UM ALIADO!\n");
                          printf("O OUTRO ELFO AGRADECE PELA AJUDA, TIRANDO-O DAQUELE MALDITO BA�, E DIZ:\n");
                          printf("N�O FIQUE TRISTE ANCESTRAL!!\nTOME UMA MOEDA!''\n\n");
                          ouro= ouro +1;
                          printf("VOC� ENCONTROU 1 MOEDA\n\n");
                           
                      }
                       
                }
            }
            else{
                system("cls");
                printf("N�O EXISTEM MAIS TESOUROS NESTA SALA!\nSE VIRE CONTRA ESSES MONSTROS!!!!\n");
                printf ("QUE PENA,TODOS OS BAUS JA FORAM ABERTOS\n\n");
                i--;
            }
           
            break;
            
            
            case 2: //se escolher matar monstro
               system("cls");
               for( vidamonstro=100; vidamonstro>=0; vidamonstro = vidamonstro+0){

                               
                  printf("ESCOLHA O GOLPE: \n");
                  printf("1 - CHUTE NO OUVIDO\n");
                  printf("2 - TAPA NA OREIA\n");
                  printf("3 - GIROSCOPIO AVASSALADOR\n");
                  printf("4 - MALDI��O DO PIOLHO\n");
                  printf("5 - PIS�O NA GUELA\n");
                  scanf("%d", &decisao[5]);
                                   
                 
                  if(decisao[5]==1){
                        system("cls");
                        lutaconteudo = chansesdojogo();
                        dano = danoaleatorio(10,40);
                        vidamonstro = vidamonstro - dano;
                        //CHANSE DE DANO NO USUARIO
                        if(lutaconteudo == 1){
                        printf("VOC� ATACA O MONSTRO COM UM GOLPE ATORDOANTE,\nMAS ERRA MISERAVELMENTE!\nE");
                        printf("E O MONSTRO TE ACERTA UM GOLPE DE RASP�O\nQUE � O SUFICIENTE PARA TIRAR APENAS \nUMA VIDA DE VOC�, SR. ANCESTRAL!!\n");
                        vida--;
                        printf("ACABOU DE PERDER UMA VIDA (%d)!\n", vida);
                        i--;
                        vidamonstro = vidamonstro + dano;
                        }else{
                            printf("COM UM ATAQUE MORTAL, VOC� CHUTA O OUVIDO DO SEU ADVERS�RIO\nFAZENDO-O SANGRAR AT� A AGONIZA��O COMPLETA\n");
                            printf("SEU ATAQUE TEVE %d DE DANO\n\n", dano);
                            i--;
                            vidamonstro = vidamonstro - dano;                      
                        }
                       
                       
                  }
                  else if(decisao[5]==2){
                        system("cls");
                        lutaconteudo = chansesdojogo();
                        dano = danoaleatorio(30, 70);
                        vidamonstro = vidamonstro - dano;
                        //CHANSE DE MATAR O MONSTRO
                        if(lutaconteudo == 4){
                            printf("SEU ATAQUE FOI DISPERDI�ADO\n N�O FEZ EFEITO NO MONSTRO!!\n");
                            vidamonstro = vidamonstro + dano;
                            i--;
                        }else{
                        printf("COM SEU ATAQUE MAIS POTENTE\nCHAMADO DE TAPA NA OREIA\nVOC� ATIRA UM TAPASSO ESMAGADOR\nNA CARA DO MONSTRO\n\n");
                        guardarouro = ouroaleatorio(0,30);
                        printf("SEU ATAQUE TEVE %d DE DANO\n\n", dano);
                        ouro=ouro + guardarouro;                  
                        printf("VOC� ENCONTROU %d MOEDAS\n\n", guardarouro);
                        i--;
                        }
                  }
                  else if(decisao[5]==3){
                        system("cls");
                        //MONSTRO TE MATAR
                        lutaconteudo = chansesdojogo();
                        dano = danoaleatorio(10,25);
                        vidamonstro = vidamonstro - dano;
                        if(lutaconteudo==3){
                        printf("COM UMA INVESTIDA PESADA VOC� ARRANCA METADE DA VIDA DO MONSTRO\n\nMAS, COMO NEM TUDO S�O FLORES, O MONSTRO CONTRA-ATACA ACERTANDO SEU CHIFRE GIGANTE, QUE CHEGA A TOCAR OS C�US, DENTRO DE SEU PEITO\n");
                        printf("O MONSTRO TE AMASSOU\n\n");
                        vida = 0;
                        i--;
                        }else{
                            printf("USANDO SUA T�CNICA MILENAR APREENDIDA NO VALE DA JURUBEBA\n VOC� TRANFORMA A CARA DO MONSTRO EM POEIRA\n");
                            printf("SEU ATAQUE TEVE %d DE DANO\n\n", dano);
                           
                            i--;
                        }

                    }
                    else if(decisao[5]==4){
                        system("cls");
                        lutaconteudo = chansesdojogo();
                        dano = danoaleatorio(40, 55);
                        vidamonstro = vidamonstro - dano;                
                        if(lutaconteudo==5){
                            if(aliado==true){
                                system("cls");
                                //DANO DO MONSTRO NO ALIADO
                                printf("O MONSTRO JOGA UM V�MITO �CIDO NA SUA DIRE��O\nMAS SEU COMPANHEIRO DE JORNADA SE ATIRA\nNA FRENTE DO ATAQUE E SOFRE UM DANO HORRIVEL\n MAS");
                                printf("QUE SORTE! ACERTOU NO SEU ALIADO\n");
                                vidaaliado--;
                                printf("VIDA DO ALIADO : %d\n\n", vidaaliado);
                                i--;
                            }else{
                                printf("O MONSTRO JOGA UM V�MITO �CIDO NA SUA DIRE��O\n");
                                vida = vida-2;
                                printf("VIDAS RESTANTES (%d)\n\n",vida);
                                i--;
                            }
                        }else{
                            printf("VOC� DESTRO�A OS MEMBROS DO ADVERS�RIO\nFAZENDO PEDIR SOCORRO\n");
                            printf("SEU ATAQUE TEVE %d DE DANO\n\n", dano);
                           
                        }
                    }
                    else if(decisao[5]==5){
                        system("cls");
                        lutaconteudo = chansesdojogo();
                        dano = danoaleatorio(25, 90);
                        vidamonstro = vidamonstro - dano;
                        if(lutaconteudo==2){
                        printf("COM SUA PISADA MASTER NO ADVERS�RIO\nVOC� FURA SEU PESCO�O\nO MATANDO INSTANTANEAMENTE\n");
                        monstro--;
                        i--;
                        }else{
                        printf("VOC� ARRANCOU MUITA VIDA DO ADVERSARIO!\nPARAB�NS!!\n");
                        printf("SEU ATAQUE TEVE %d DE DANO\n\n", dano);
                        i--;
                        }
                    }
                    else{
                        system("cls");
                        printf("OP��O INV�LIDA\n");
                        i--;
                    }
               }//chave para fechar o for
            break;
            
            
            case 3:
            
					 system("cls");
                printf("1 - COMPRAR FRAGMENTO = 50 MOEDAS\n");
                printf("2 - COMPRAR VIDA = 20 MOEDA\n");
                printf("3 - MATAR UM MONSTRO = 200 MOEDAS\n");
                printf("4 - N�O COMPRAR NADA\n");
                scanf("%d", &decisao[4]);
                if(decisao[4] == 1){
                    if(ouro>=50){
								system("cls");
                        fragmento++;
                        printf("(FRAGMENTOS %d DE 5)", fragmento);
                        ouro = ouro - 50;
                        i--;
                    }else{
								system("cls");
                        printf("VOC� N�O COLETOU MOEDAS O SUFICIENTE!!\n");
                        i--;
                    }
                }else if(decisao[4]==2){
                    if(ouro>=20){
								system("cls");
                        vida++;
                        ouro = ouro - 20;
                        printf("AGORA VOC� TEM %d VIDAS!!\n", vida);
                        i--;
                    }else{
								system("cls");
                        printf("VOC� N�O COLETOU MOEDAS O SUFICIENTE!!\n");
                        i--;
}
                }else if(decisao[4]==3){
                    if(ouro>=200){
                        system("cls");
                        printf("VOC� ACABA DE MATAR UM MONSTRO\nUSANDO O PODER DO DINHEIRO!\n\n");
                        monstro--;
                        ouro = ouro - 200;
                        i--;
                    }else{
								system("cls");
                        printf("VOC� N�O COLETOU MOEDAS O SUFICIENTE!!\n");
                        i--;
}
                }else if(decisao[4]==4){
                    system("cls");
                    i--;        
                }else{
                    system("cls");
                    printf("OP��O INV�LIDA!!\n");
                    i--;
}
            break;
            
            
            case 262905://CHEAT PRO NICOLA NOS DAR 10 PONTOS
                
                system("cls");
                printf("VOC� � UM ANCESTRAL DE SORTE!!\nO MAGO SUPREMO NICOLA DO 'BOA NOITE! TAPA NA PORTA'\nGOSTOU DE VOC�\nE TE TROUXE UNS PRESENTES!!\n\n");
                espada=true;
                ouro=999;
                monstro=1;
                vida=999;
                printf("AGORA VOCE TEM %d VIDA(S)\n\n", vida);
                printf("EXISTE APENAS %d MONSTRO\n", monstro);
                printf("FOI PRESENTEADO COM %d DE OURO\n\n(ou 10 pontos, voc� escolhe ancestral)\n\n", ouro );
                printf("FORJOU-SE UMA ESPADA MIDAS PARA VOC�!!\n");
                printf("ESSA ESPADA FOI FORJADA NOS VALES DA BULG�RIA POR\nPRIMITIVOS QUE, MEDONHAMENTE\nSOFRIAM COM PROBLEMAS DE 'PRAGAS' HAHAHA!!\n\n");
                printf("MAS ACHO VOC� N�O GOSTA DE HISTORIA N� ANCESTRAL HAHA\n\n");
                i--;
                printf("DESEJA TRANSFORMAR SEUS INIMIGOS EM OURO E SE TORNAR PRATICAMENTE IMBATIVEL?!?!");
                printf("\n1 - SIM \n0- N�O\n");
                scanf("%d", &decisao[3]);
                system("cls");
                if(decisao[3]==1){
                    contagem[0] = contagem[0]+monstro;
                    ouro = ouro + contagem[0]+contagem[1]+bau;
                    monstro=0;
                    bau = 0;
                    espada=false;
                    printf("VOCE SE DEU BEM, TODOS OS ELEMENTOS DESTA PORTA\nFORAM TRANFORMADOS EM MOEDAS!!\nINCLUSIVE OS BAUS ABERTOS!!\n\n");
                    printf("MAS INFELIZMENTE, DEPOIS DESTE BRUTO ATAQUE\nSUA ESPADA FOI DESTRUIDA!!!\n\n");
           
                }else if(decisao[3]==0){
                    espada=false;
                    printf("OPSSSS!!!\nVOC� PERDEU SUA ESPADA POR SER UM COVARDE!!\n\n");
                }
                break;
 
            default:
            
                system("cls");
                printf("ESCOLHA DIGITADA EST� ERRADA!!\n");
                i--;
    }
       if(fragmento==5){//CODIGO DA ESPADA ANCESTRAL
            
            espada=true;
            printf("VOC� DESBLOQUEOU A ESPADA DO MAGO SUPREMO MIDAS!!\n\n");
            printf("DESEJA TRANSFORMAR SEUS INIMIGOS EM OURO?!");
            printf("\n1 - SIM \n0- N�O\n");
            scanf("%d", &decisao[3]);
            system("cls");
     
       if(decisao[3]==1){
       
            contagem[0] = contagem[0]+monstro;
            ouro = ouro + contagem[0]+contagem[1]+bau;
            monstro=0;
            bau = 0;
            espada=false;
            printf("TODOS OS ELEMENTOS DESTA PORTA\n FORAM TRANFORMADOS EM MOEDAS!!\nINCLUSIVE OS BAUS ABERTOS!!\n\n");
            printf("MAS INFELIZMENTE, DEPOIS DESTE BRUTO ATAQUE\nSUA ESPADA FOI DESTRUIDA!!!\n\n");
           
        }else if(decisao[3]==0){
            espada=false;
            printf("OPSSSS!!!\n VOC� PERDEU SUA ESPADA POR SER UM COVARDE!!\n\n");
            fragmento = 0;
        }
    }
}


system("PAUSE");
return 0;
}

