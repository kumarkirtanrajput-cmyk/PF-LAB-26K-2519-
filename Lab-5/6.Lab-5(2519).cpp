#include<stdio.h>
int main(){
	int problem , algorithm
	printf("\n---Problem Types---\n");
	printf("1.Classification\n");
	printf("2.Regression\n");
	printf("3.Clustering\n");
	printf("4.Computer vision\n");
	printf("Select the Problem\n");
	scanf("%d", &problem);
	
	switch(problem){
		case 1:
			printf("---Classification Algorithms---");
			printf("1.Logistic Regression\n");
			printf("2.Decision Tree\n");
			printf("3.KNN\N");
			printf("select algorithm\n");
			scanf("%d", &algorithm);
			switch(algorithm){
				case 1:
					printf("logistic regression\n");
					break;
				casr 2:
				    printf("decision tree\n");
					break;
				case 3:
				    printf("KNN\N");
				default:
				    printf("invalid algorithm");			
			}
			break;
			case 2:
			printf("--- Regression Algorithms---");
			printf("1.Linear Regression\n");
			printf("2.Polynomial Regression\n");
			printf("3.SVR\N");
			printf("select algorithm\n");
			scanf("%d", &algorithm);
			switch(algorithm){
				case 1:
					printf("Linear regression\n");
					break;
				casr 2:
				    printf("Polynomial Regression\n");
					break;
				case 3:
				    printf("SVR\N");
				default:
				    printf("---invalid algorithm---");			
			}
			break;
			case 3:
			printf("---Clustering Algorithms---");
			printf("1.K-Means\n");
			printf("2.Hierarchical clustering\n");
			printf("3.DBSCAN\N");
			printf("---select algorithm---\n");
			scanf("%d", &algorithm);
			switch(algorithm){
				case 1:
					printf("K-Means\n");
					break;
				casr 2:
				    printf("Hierarchical clustering\n");
					break;
				case 3:
				    printf("DBSCAN\N");
				default:
				    printf("---invalid algorithm---");			
			}
			break;	
				case 4:
			printf("---Computer Vision Algorithms---");
			printf("1.CNN\n");
			printf("2.YOLO\n");
			printf("3.R-CNN\N");
			printf("select algorithm\n");
			scanf("%d", &algorithm);
			switch(algorithm){
				case 1:
					printf("CNN\n");
					break;
				casr 2:
				    printf("YOLO\n");
					break;
				case 3:
				    printf("R-CNN\N");
				default:
				    printf("---invalid algorithm---");			
			}
			break;
			
			default:
				printf("invalid problem type");
	}
	return 0;	
}
