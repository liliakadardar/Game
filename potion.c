#include <stdio.h>
#include <stdlib.h> 
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
#include "potion.h"


void initialiser_potion()
{
	

	pt0.img_pt=IMG_Load("outils/potions/potion00.png");
	pt0.position_potion.x=3000;
	pt0.position_potion.y=50;
	pt0.speed=25;

	pt1.img_pt=IMG_Load("outils/potions/potion01.png");
	pt1.position_potion.x=3600;
	pt1.position_potion.y=400;
	pt1.speed=25;


	pt2.img_pt=IMG_Load("outils/potions/potion02.png");
	pt2.position_potion.x=4150;
	pt2.position_potion.y=200;
	pt2.speed=25;



	pt3.img_pt=IMG_Load("outils/potions/potion03.png");
	pt3.position_potion.x=2250;
	pt3.position_potion.y=150;
	pt3.speed=25;

	pt4.img_pt=IMG_Load("outils/potions/potion04.png");
	pt4.position_potion.x=1195;
	pt4.position_potion.y=280;
	pt4.speed=25;


	pt5.img_pt=IMG_Load("outils/potions/potion05.png");
	pt5.position_potion.x=1700;
	pt5.position_potion.y=250;
	pt5.speed=25;


	pt6.img_pt=IMG_Load("outils/potions/potion06.png");   
	pt6.position_potion.x=3000;
	pt6.position_potion.y=400;
	pt6.speed=25;

	pt7.img_pt=IMG_Load("outils/potions/potion07.png");
	pt7.position_potion.x=5080;
	pt7.position_potion.y=25;
	pt7.speed=25;


	pt8.img_pt=IMG_Load("outils/potions/potion08.png");
	pt8.position_potion.x=4780;
	pt8.position_potion.y=220;
	pt8.speed=25;

	pt9.img_pt=IMG_Load("outils/potions/potion09.png");
	pt9.position_potion.x=5580;
	pt9.position_potion.y=250;
	pt9.speed=25;
}


void afficher_potion(SDL_Surface *ecran)
{
SDL_BlitSurface(pt0.img_pt,NULL,ecran,&pt0.position_potion);

SDL_BlitSurface(pt1.img_pt,NULL,ecran,&pt1.position_potion);

SDL_BlitSurface(pt2.img_pt,NULL,ecran,&pt2.position_potion);

SDL_BlitSurface(pt3.img_pt,NULL,ecran,&pt3.position_potion);

SDL_BlitSurface(pt4.img_pt,NULL,ecran,&pt4.position_potion);

SDL_BlitSurface(pt5.img_pt,NULL,ecran,&pt5.position_potion);
SDL_BlitSurface(pt6.img_pt,NULL,ecran,&pt6.position_potion);
SDL_BlitSurface(pt7.img_pt,NULL,ecran,&pt7.position_potion);
SDL_BlitSurface(pt8.img_pt,NULL,ecran,&pt8.position_potion);
SDL_BlitSurface(pt9.img_pt,NULL,ecran,&pt9.position_potion);

}


/*int collision_potion(personnage *p, potion pt)
{
if (((p->position_personnage.x + p->position_personnage.w )>= pt.position_potion.x)||

(p->position_personnage.x<=(pt.position_potion.x+ pt.position_potion.w))||

((p->position_personnage.x>=pt.potion_position.x)||(p->position_personnage.x)> pt.position_potion.y)||

(p->position_personnage.y<(pt.position_potion.y + pt.position_potion.h))||((p->position_personnage.y+p->position_personnage.h)>pt.position_potion.y))

{
return 0;}
return 1;

}*/
int collision_potion(personnage *p, potion pt)
{
if (((p->position_personnage.x+p->position_personnage.w>=pt.position_potion.x)&&(p->position_personnage.x+p->position_personnage.w<=pt.position_potion.x+pt.position_potion.w))||((p->position_personnage.x>=pt.position_potion.x)&&(p->position_personnage.x<=pt.position_potion.x+pt.position_potion.w)))
{if (p->position_personnage.y>=pt.position_potion.y-pt.position_potion.y)
return 1;}
return 0;
}












	
void scroll_potion0(int clic, potion *pt0)
{
if(clic==2)//walk droite
	{
		pt0->position_potion.x-=pt0->speed;
	}
	else if ((clic==1)&&(pt0->position_potion.x<3000))//walk gauche
	{ 
		pt0->position_potion.x+=pt0->speed;	
	}
}
		
	
void scroll_potion1(int clic, potion *pt1)
{
if(clic==2)//walk droite
	{
		pt1->position_potion.x-=pt1->speed;
	}
	else if ((clic==1)&&(pt1->position_potion.x<3600))//walk gauche
	{ 
		pt1->position_potion.x+=pt1->speed;	
	}
}
		
void scroll_potion2(int clic, potion *pt2)
{
if(clic==2)//walk droite
	{
		pt2->position_potion.x-=pt2->speed;
	}
	else if ((clic==1)&&(pt2->position_potion.x<4150))//walk gauche
	{ 
		pt2->position_potion.x+=pt2->speed;	
	}
}
	
void scroll_potion3(int clic, potion *pt3)
{
if(clic==2)//walk droite
	{
		pt3->position_potion.x-=pt3->speed;
	}
	else if ((clic==1)&&(pt3->position_potion.x<2250))//walk gauche
	{ 
		pt3->position_potion.x+=pt3->speed;	
	}
}
			

void scroll_potion4(int clic, potion *pt4)
{
if(clic==2)//walk droite
	{
		pt4->position_potion.x-=pt4->speed;
	}
	else if ((clic==1)&&(pt4->position_potion.x<1195))//walk gauche
	{ 
		pt4->position_potion.x+=pt4->speed;	
	}
}

void scroll_potion5(int clic, potion *pt5)
{
if(clic==2)//walk droite
	{
		pt5->position_potion.x-=pt5->speed;
	}
	else if ((clic==1)&&(pt5->position_potion.x<1700))//walk gauche
	{ 
		pt5->position_potion.x+=pt5->speed;	
	}
}

void scroll_potion6(int clic, potion *pt6)
{
if(clic==2)//walk droite
	{
		pt6->position_potion.x-=pt6->speed;
	}
	else if ((clic==1)&&(pt6->position_potion.x<3000))//walk gauche
	{ 
		pt6->position_potion.x+=pt6->speed;	
	}
}

void scroll_potion7(int clic, potion *pt7)
{
if(clic==2)//walk droite
	{
		pt7->position_potion.x-=pt7->speed;
	}
	else if ((clic==1)&&(pt7->position_potion.x<5080))//walk gauche
	{ 
		pt7->position_potion.x+=pt7->speed;	
	}
}

void scroll_potion8(int clic, potion *pt8)
{
if(clic==2)//walk droite
	{
		pt8->position_potion.x-=pt8->speed;
	}
	else if ((clic==1)&&(pt8->position_potion.x<4780))//walk gauche
	{ 
		pt8->position_potion.x+=pt8->speed;	
	}
}
	
void scroll_potion9(int clic, potion *pt9)
{
if(clic==2)//walk droite
	{
		pt9->position_potion.x-=pt9->speed;
	}
	else if ((clic==1)&&(pt9->position_potion.x<5580))//walk gauche
	{ 
		pt9->position_potion.x+=pt9->speed;	
	}
}
	
