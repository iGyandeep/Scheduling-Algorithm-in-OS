#include<stdio.h>
int main()
{
	int i, j, n, a[50], frame[10], no, k, avail, count=0;
	printf("\n Enter the number of pages: ");
	scanf("%d",&n);
	printf("\n Enter the number of frames: ");
    scanf("%d",&no);
	printf("\n Enter the Page Number: \n ");
	for(i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
		
	for(i=0;i<no;i++) {
		frame[i]= -1;
	}
		
	j=0;
	printf(" Reference string \t\t Page Frames\n");
	for(i=1;i<=n;i++) {
		
		printf("\t%d\t\t  ",a[i]);
		avail=0;
		for(k=0;k<no;k++) {
			if(frame[k]==a[i]){
				avail = 1;
			}
		}
			
			if (avail==0) {
				frame[j]=a[i];
				j=(j+1)%no;
				count++;
				for(k=0;k<no;k++){
					printf("%d\t\t",frame[k]);
				}
			}
			else {
				for (int z=0; z<no; z++)
					printf("=\t\t");
			}
			printf("\n");
	}
	
	printf("\n\n");
	printf(" PAGE FAULT = %d", count);
	return 0;
}
