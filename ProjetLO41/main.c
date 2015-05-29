#include <stdio.h>
#include <stdlib.h>

//disparition a faire



struct Vehicule

{
    int numero;
    int taille;

    int vitesse; // on s'en fout pour le moment

    int x ;
    int y;
    int x2;
    int y2;
    int xV; //V comme voulu
    int yV;

    int priorite; // booleen
};

void deplacementG(Vehicule v, int** tab){
    if(tab[v->x][v->y-1]==2){
        if(v->taille==2){
            tab[v->x2][v->y2]=2;
            v->x2=v->x;
            v->y2=v->y;
        }else{
            tab[v->x][v->y]=2;
        }
        v->y--;
        tab[v->x][v->y]=1;
    }
}

void deplacementD(Vehicule v, int** tab){
    if(tab[v->x][v->y+1]==2){
        if(v->taille==2){
            tab[v->x2][v->y2]=2;
            v->x2=v->x;
            v->y2=v->y;
        }else{
            tab[v->x][v->y]=2;
        }
        v->y++;
        tab[v->x][v->y]=1;
    }
}

void deplacementH(Vehicule v, int** tab){
    if(tab[v->x-1][v->y]==2){
        if(v->taille==2){
            tab[v->x2][v->y2]=2;
            v->x2=v->x;
            v->y2=v->y;
        }else{
            tab[v->x][v->y]=2;
        }
        v->x--;
        tab[v->x][v->y]=1;
    }
}


void deplacementB(Vehicule v, int** tab){
     if(tab[v->x+1][v->y]==2){
        if(v->taille==2){
            tab[v->x2][v->y2]=2;
            v->x2=v->x;
            v->y2=v->y;
        }else{
            tab[v->x][v->y]=2;
        }
        v->x++;
        tab[v->x][v->y]=1;
    }
}

recherchePath(Vehicule v, int** tab){

    if ((v->x==2 ||v->x==7 )&& v->y!=2 && v->y!=3 && v->y!=7 && v->y!=8){ //si il peut aller qu'a gauche #axes horizontales
            //verifier qu'il est au debut d'une semaphore A FAIRE !!!!!!!!!!!!!!!!!!!!
            deplacementG(v, tab);
    }else if((v->x==3 ||v->x==8 )&& v->y!=2 && v->y!=3 && v->y!=7 && v->y!=8){  // adroite

    }else if((v->y==2 ||v->y==7 )&& v->x!=2 && v->x!=3 && v->x!=7 && v->x!=8){ // bas

    }else if ((v->y==3 ||v->y==8 )&& v->x!=2 && v->x!=3 && v->x!=7 && v->x!=8) { //haut

    }else {
    //smaphore # lol #mdr
    }


}
int main()
{
    int tab[11][11];
    int i, j;
    for (i=0;i<11; i++){
        for(j=0;j<11;j++){
            if(i==2||i==3||i==8||i==7||j==2||j==3||j==8||j==7){
                tab[i][j]=2;
            }else{
                tab[i][j]=0;
            }
        }
    }


    return 0;
}
