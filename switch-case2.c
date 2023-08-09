#include<stdio.h>
main()
{
		int c;
		
		printf("welcome to zometo\n");
		printf(" 1 for gujrati food\n");
		printf(" 2 for chienis food\n");
		printf(" 3 for punjabi food\n\n");
		printf(" enter your choice = ");
		scanf("%d",&c);
			
		switch(c)
		{
			case 1: printf("welcome to gujarati food\n");
					printf("1 for namcin\n");
					printf("2 for roti\n");
					printf("3 for sweet\n");
					printf(" enter your choice = ");
					scanf("%d",&c);
					
					switch(c)
					{
						
						case 1 : printf("order for namcin\n");
							     break;
						case 2 : printf(" 1 for butter roti\n");
								 printf(" 2 for clean roti\n");
								 printf(" enter your choice = ");
								 scanf("%d",&c);
								 
								 switch(c)
								 {
								 	case 1:printf("order submit");
										   break;	
									case 2:printf("order submit");
										   break;				
								 }
								 break;
								
						case 3 :printf("order for sweet");
							
					}
					break;
					
				
			case 2 :printf("welcome to chaines food\n");
				    printf("1 for nudels\n");
				    printf("2 for manchuriym\n");
				   	printf("enter number =");
				   	scanf("%d",&c);
				   	
				   	switch(c)
				   	{
				   		case 1:printf("order submit");
				   		 	   
						case 2:printf("order submit");
				   		 	   					
					}
				    break;
			
					
			
			case 3 :printf("welcome to punjabi food\n");
			        printf("1 for tanduri naan\n");
				    printf("2 for buter-milk\n");
				   	printf("enter number =");
				   	scanf("%d",&c);
				   	
				   	switch(c)
				   	{
				   		case 1:printf("order submit");
				   		 	   
						case 2:printf("order submit");
				   		 	   					
					}
				    break;
		}		
	
	
	
}