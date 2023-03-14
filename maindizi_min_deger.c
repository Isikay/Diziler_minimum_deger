#include <stdio.h>
#include <math.h>
  // Dizilerde T(n) hesabý ve en küçük sayýyý bulan c kodu.
  // Iþýkay ÇETÝN 
  void minimum(int sayisi,int d[]){ 
    int k; 
    int min = d[0];               // +1
	 for(k=0;k<sayisi;k++){            // (n+1)  for ve while dögülerinde n+1 alýrýz.ve satýrýn anlamý sürekli olarak karþýlaþtýmra yapsýn.              
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
    int d[sayisi];         // girilen eleman sayýsý kadar dizide yer ayýrdýk.
	 for(i=0;i<sayisi;i++){        //  n+1
		printf("Dizinin %d. sayisini giriniz: ",i+1);
		scanf("%d",&d[i]);
	}
	minimum(sayisi,d);
	// T=1+(n+1)+(n)+1+(n+1)=3n+4
	printf("T(n)=3n+4");
	 
  return 0;
 }





	

