#include <stdio.h>
void  orderTab(int array[], int tailleTab){
int i=0;
int j=0;
int k=0;
int tmp=0;

/**int  i  = 0 ; 
int temp = 0;
    while  ( i  <   tailleTab )  {
        
        for ( int j = 0  ;  j <  tailleTab; j++ ) {
            
            if (array[j] >  array[j+1] ) 
            {
                temp =  array[j] ; 
                array[j] =  array[j+1] ; 
                array[j+1] = temp ;  
            } 
        }
        i++ ;
    }
   
    for  ( int k  = 0 ; k< tailleTab; k++ ) printf("%d\n",  array[k]) ;




}**/
for(i=0; i<tailleTab; i++)
   for(j=i+1; j<tailleTab; j++) {
      if(array[i]>array[j]) {
         tmp = array[i];
         array[i] = array[j];
         array[j] = tmp;     
      }
   }

for (k=0; k < tailleTab ; k++){
printf("%d\n",  array[k]) ;
}  
}

double averageTab(int Tab[],int tailleTab){

	int i =0;
	int sum = 0;
	double	moy = 0;
	for(i=0; i < tailleTab; i++){
	sum += Tab[i];
	
	
	}
	moy = sum/tailleTab;

	return moy;
}
int sumTab(int array[], int tailleTab){
int i = 0;
int sum = 0;
 for(i=0;i < tailleTab; i++) {
	sum += array[i];
 }

 return sum;

}


