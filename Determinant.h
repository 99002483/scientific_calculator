#include <stdio.h>

int det(){

int i,j,n,m;
float determinant;

printf("Enter the number of rows:");
scanf("%d",&n);
printf("Enter the number of columns:");
scanf("%d",&m);



if(n!=m){
        printf("\n\aDeterminants are undefined for non square matrices:");

}
else{

float a[n][m];

for(i=0;i<n;i++){
        printf("Enter the members of row %d :",i+1);
    for(j=0;j<m;j++){
        scanf("%f",&a[i][j]);
    }
}


    if(n==1){
        printf("\n\aDeterminant of your matrix is %f",a[0][0]);
    }
    else if(n==2){
            determinant=(a[0][0]*a[1][1]-a[0][1]*a[1][0]);
        printf("\n\aDeterminant of your matrix is %f",determinant);
    }
     else if(n==3){
    determinant=a[0][0]*a[1][1]*a[2][2]+a[0][1]*a[1][2]*a[2][0]+a[0][2]*a[1][0]*a[2][1]\
    -a[2][0]*a[1][1]*a[0][2]-a[2][1]*a[1][1]*a[0][0]-a[2][2]*a[1][0]*a[0][1];
     printf("\t\aDeterminant of your matrix is %f",determinant);
  }
  else{
        float b[n];

        for(i=0;i<n;i++){
            b[i]=a[i][0]*power(-1,i+2);
        }
    for(j=1,i=0;<n;i++,j++){
            if(i!=)

    }
  }
}
return 2.0;
}

