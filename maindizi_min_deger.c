#include <stdio.h>
#include <math.h>
  // Dizilerde T(n) hesab� ve en k���k say�y� bulan c kodu.
  // I��kay �ET�N 
  void minimum(int sayisi,int d[]){ 
    int k; 
    int min = d[0];               // +1
	 for(k=0;k<sayisi;k++){            // (n+1)  for ve while d�g�lerinde n+1 al�r�z.ve sat�r�n anlam� s�rekli olarak kar��la�t�mra yaps�n.              
		if(d[k]< min){          //n defa
		min = d[k];           	// +1 
		}
	}
	printf("\nEn kucuk sayi = %d dir\n  ",min);    
}
  int main(int argc, char *argv[]) {
	int sayisi,i;     
	printf("Dizinin eleman sayisini giriniz: ");
	scanf("%d",&sayisi);
    int d[sayisi];         // girilen eleman say�s� kadar dizide yer ay�rd�k.
	 for(i=0;i<sayisi;i++){        //  n+1
		printf("Dizinin %d. sayisini giriniz: ",i+1);
		scanf("%d",&d[i]);
	}
	minimum(sayisi,d);
	// T=1+(n+1)+(n)+1+(n+1)=3n+4
	printf("T(n)=3n+4");
	 
  return 0;
 }





	

