#include<stdio.h>
#include<math.h>

void heapmax(int Array[],int laenge,int durchlaufmax){
	int temp1,temp2,durchlaufakt=0,end=0,anzahl=0,start,groß,linkeskind,rechteskind;
		
		groß=durchlaufmax;
		linkeskind=2*durchlaufmax+1;
		rechteskind=2*durchlaufmax+2;
		if(Array[rechteskind]>Array[groß]&& (Array[linkeskind]<Array[rechteskind]))
				{
				temp1=Array[rechteskind];
				temp2=Array[groß];
				Array[groß]=temp1;
				Array[rechteskind]=temp2;
				}
		if (Array[linkeskind]>Array[groß]&& (Array[rechteskind]<Array[linkeskind]))
		{
			temp1=Array[linkeskind];
			temp2=Array[groß];
			Array[groß]=temp1;
			Array[linkeskind]=temp2;
		}
}
void maxerneut(int Array[],int laenge){
int rechteskind,linkeskind,temp1,temp2;
		for(int i=0;i<=laenge;i++)
		{
		rechteskind=2*i+2;
		linkeskind=2*i+1;	
		if(Array[i]<Array[linkeskind]&&(Array[rechteskind]<Array[linkeskind]))
				{
				temp1=Array[linkeskind];
				temp2=Array[i];
				Array[i]=temp1;
				Array[linkeskind]=temp2;
				}
		if(Array[i]<Array[rechteskind]&&(Array[linkeskind]<Array[rechteskind]))
			{
			temp1=Array[rechteskind];
			temp2=Array[i];
			Array[i]=temp1;
			Array[rechteskind]=temp2;
			}
			}	
}		

void sortieren (int Array[], int laenge,int laenge2)
{
	int temp1=0,temp2=0,groß=0,linkeskind,rechteskind;

		
		temp1=Array[0];				//Tascuh des höchsten wertes mit der letzten stelle des Array
		temp2=Array[laenge];
		Array[laenge]=temp1;
		Array[0]=temp2;
		
		
		printf("Vor Sortieren: \t");
		for (int i = 0;i<laenge; i++)
		{
			printf("%d, ", Array[i]);
		}
		printf("\n");
	for(int i =0 ; i<laenge/2-1; i++){
		groß=i;
		linkeskind=2*i+1;
		rechteskind=2*i+2;
		if(Array[groß]<Array[linkeskind]&& (Array[linkeskind]>Array[rechteskind]))
		{
			temp1=Array[linkeskind];
			temp2=Array[groß];
			Array[groß]=temp1;
			Array[linkeskind]=temp2;
		}
		if (Array[groß]<Array[rechteskind]&& (Array[rechteskind]>Array[linkeskind]))
		{
			temp1=Array[rechteskind];
			temp2=Array[groß];
			Array[groß]=temp1;
			Array[rechteskind]=temp2;
		}
		
		/*temp1=Array[0];
		temp2=Array[laenge-2];
		Array[laenge-2]=temp1;
		Array[0]=temp2;*/
	}
}
void main(){
	int laenge,temp1,temp2,durchlaufakt=0;
	int Array[9] = {1,9,28,2,42,23,36,111,17};
	
	laenge=sizeof(Array)/sizeof(Array[0]);
	printf("Vorher: \t");	
	for (int i = 0;i<laenge; i++)
		     {     
		     printf("%d, ", Array[i]);
		     }
	printf("\n");
	printf("Laenge: %i \n",laenge);
	printf("durchlaufmax: %i \n",laenge/2-1);
	for(int i = laenge/2-1;i>=0;i--){
	heapmax(Array,laenge,i);
	}
	printf("Heapmax: ");
	for (int i = 0;i<laenge; i++)
	{
		printf("%d, ", Array[i]);
	}

	printf("\n");
	maxerneut(Array,laenge/2-1);
	printf("max: ");
	for (int i = 0;i<laenge; i++)
	{
		printf("%d, ", Array[i]);
	}
	printf("\n");
	for(int i=0;i<laenge-1/2-1;i++){	
	sortieren(Array,laenge-1-i,8);
	
	}	

	/*temp1=Array[0];
	temp2=Array[1];
	Array[0]=temp2;
	Array[1]=temp1;*/

	
	printf("Danach: \t");
	for (int i = 0; i < laenge; i++)	//Schleife für weidergabe des Array nach Heap generierung
                     {
                     printf("%d, ", Array[i]);

                     
		     }
	printf("\n");


}
