#include<stdio.h>
#include<math.h>

void heapmax(int Array[],int laenge,int durchlaufmax ){
	int temp1,temp2,durchlaufakt=0;
		while (durchlaufmax-1 >= durchlaufakt )
		{
		printf("%i: ",durchlaufakt);
		for(int x=0;x<9;x++)
		{
		printf("%d, ",Array[x]);
		}
		printf("\n");	
		if ((Array[laenge-1-(durchlaufakt*2)]> Array[laenge-6-(durchlaufakt)]) && (Array[laenge-1-(durchlaufakt*2)]>Array[laenge-2-(durchlaufakt*2)])  )
			{		
			temp1=Array[laenge-1-(durchlaufakt*2)];
			temp2=Array[laenge-6-(durchlaufakt*2)];	
			Array[laenge-1-(durchlaufakt*2)]=temp2;
			Array[laenge-6-(durchlaufakt)]=temp1;
			}
		else if ((Array[laenge-2-(durchlaufakt*2)]> Array[laenge-6-(durchlaufakt)]))  	
			{
			temp1=Array[laenge-2-(durchlaufakt*2)];
			temp2=Array[laenge-6-(durchlaufakt)];
			Array[laenge-2-(durchlaufakt*2)]=temp2;
			Array[laenge-6-(durchlaufakt)]=temp1;
			}
		durchlaufakt++;

		}
}


void main(){
	int laenge =9,durchlauf=4;
	int Array[9] = {2,9,8,5,4,3,6,1,7};
	//int wurzel = sqrt(max);

	printf("Vorher:");	
	for (int i = 0; i < laenge ; i++)
		     {     
		     printf("%d, ", Array[i]);
		     
		     }
	printf("\n");
	heapmax(Array,laenge,durchlauf);
	printf("Danach:");
	for (int i = 0; i < laenge; i++)
                     {
                     printf("%d, ", Array[i]);

                     
		     }
	printf("\n");

}
