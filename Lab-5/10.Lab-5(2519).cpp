#include<stdio.h>
#include<math.h>
int main(){
	float accuracy,confidence,modelscore;
	int datasetsize;
	int role,status,permission;
	
	char rolename;
	char statusname;
	
	printf("enter model accuracy");
	scanf("%f", &accuracy);
	
	printf("enter confidence score");
	scanf("%f", &confidence);
	
	printf("enter datasetsize");
	scanf("%f", &datasetsize);	
	
	printf("\n---Select user role---\n");
	printf("1.Admin\n");
	printf("2.Developer\n");
	printf("3.Researcher\n");
	printf("enter your role :");
	scanf("%d", &role);
	
	printf("\n---Select status---\n");
	printf("1.Ready\n");
	printf("2.Testing\n");
	printf("3.Training\n");
	printf("Enter status :");
	scanf("%d", &status);
	
	printf("\n---Enter Permission---\n");
	printf("View=1\n");
	printf("Train=2\n");
	printf("Test=4\n");
	printf("Deploy=8\n");
	printf("enter permission value :");
	scanf("%d", &permission);
	
	modelscore=(accuracy+confidence/2.0);
	switch(role){
		case 1:
			rolename="admin";
		switch(status){
			case 1:
				statusname="ready";
				break;
			case 2:
			    statusname="testing";
			    break;
			case 3:
			    statusname="training";
			    break;
			default:
			   statusname="invalid status";
			   break;			
		}	
			case 2:
			rolename="Developer";
		switch(status){
			case 1:
				statusname="ready";
				break;
			case 2:
			    statusname="testing";
			    break;
			case 3:
			    statusname="training";
			    break;
			default:
			   statusname="invalid status";			
		}
		break;
			case 3:
			rolename="Researcher";
		switch(status){
			case 1:
				statusname="ready";
				break;
			case 2:
			    statusname="testing";
			    break;
			case 3:
			    statusname="training";
			    break;
			default:
			   statusname="invalid status";			
		}		
		break;
		default:
			reloname="invalid";
			status="unknown";
	}
	printf("\n---model information---\n");
	printf("Accuracy : %.2f\n",accuracy);
	printf("confidence : %.2f\n",confidence);
	printf("datasetsize : %d\n",datasetsize;
	printf("Model Score : %.2f\n",modelscore);
	printf("User role : %.2f",role);
	printf(" model status: %.2f",status);
	printf("permission value : %.2f",permission);
	
	 printf("\n--- PERMISSIONS ---\n");

    if (permissions & 1)
        printf("View Permission   : YES\n");
    else
        printf("View Permission   : NO\n");

    if (permissions & 2)
        printf("Train Permission  : YES\n");
    else
        printf("Train Permission  : NO\n");

    if (permissions & 4)
        printf("Test Permission   : YES\n");
    else
        printf("Test Permission   : NO\n");

    if (permissions & 8)
        printf("Deploy Permission : YES\n");
    else
        printf("Deploy Permission : NO\n");

    
    int deployPermission = permissions & 8;

    
    printf("\n===== DEPLOYMENT DECISION =====\n");

    if (accuracy >= 80)
    {
        if (confidence >= 75)
        {
            if (datasetSize >= 1000)
            {
                if (status == 1)
                {
                    if (deployPermission)
                    {
                        printf("Deployment Ready: YES\n");
                        printf("All deployment conditions are satisfied.\n");
                    }
                    else
                    {
                        printf("Deployment Ready: NO\n");
                        printf("User does not have deployment permission.\n");
                    }
                }
                else
                {
                    printf("Deployment Ready: NO\n");
                    printf("Model status is not Ready.\n");
                }
            }
            else
            {
                printf("Deployment Ready: NO\n");
                printf("Dataset size is less than 1000.\n");
            }
        }
        else
        {
            printf("Deployment Ready: NO\n");
            printf("Confidence must be at least 75%%.\n");
        }
    }
    else
    {
        printf("Deployment Ready: NO\n");
        printf("Accuracy must be at least 80%%.\n");
    }

    
    if (accuracy >= 80 && confidence >= 75 &&
        datasetSize >= 1000 && status == 1 &&
        (permissions & 8))
    {
        printf("\nFinal Result: MODEL CAN BE DEPLOYED\n");
    }
    else
    {
        printf("\nFinal Result: MODEL CANNOT BE DEPLOYED\n");
    }

    char *scoreStatus =
        (modelScore >= 80) ? "High Score" : "Needs Improvement";

    printf("Score Evaluation: %s\n", scoreStatus);

    
    printf("\n===== MATHEMATICAL INFORMATION =====\n");
    printf("Square Root of Score : %.2f\n", sqrt(modelScore));
    printf("Score Power (2)      : %.2f\n", pow(modelScore, 2));
    printf("Absolute Score       : %.2f\n", fabs(modelScore));

    printf("\n===== MEMORY INFORMATION =====\n");
    printf("Size of accuracy variable  : %zu bytes\n", sizeof(accuracy));
    printf("Size of confidence variable: %zu bytes\n", sizeof(confidence));
    printf("Size of datasetSize        : %zu bytes\n", sizeof(datasetSize));
    printf("Size of role               : %zu bytes\n", sizeof(role));
	return 0;
}
