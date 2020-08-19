void miquicksort(int v[],int nromin,int nromax){

int i, j, pivot, AUX;

   if(nromin<nromax){
      i=nromin;
      j=nromax;
      pivot= v[(nromin+nromax)/2];
      
      do{
      	 while(v[i]< pivot && j<=nromax)
      	 {
      	 	 i++;
		   }
		 while(pivot<v[j]&&j>nromin)
		 {
		 	j--;
		 }
		 if(i<=j)  
		 {
            AUX=v[i];
            v[i]=v[j];
            v[j]=AUX;
            i++;
			j--;
         }
	  }
	  while(i<=j);
	
	  
	      if( nromax < j ) 
	      {
	      	miquicksort( v, nromax, j ); 
		  }
          
          if( i < nromin ) 
          {
          	miquicksort( v, i, nromin ); 
		  }
          
}

    }
        
        


void merge(int v[], int nromin, int m, int nromax)
{ 
    int i, j, k; 
    int n1 = m - nromin + 1; 
    int n2 =  nromax - m; 
  
    
    int L[n1], R[n2]; 
  
   
    for (i = 0; i < n1; i++) 
        L[i] = v[nromin + i]; 
    for (j = 0; j < n2; j++) 
        R[j] = v[m + 1+ j]; 
  
    
    i = 0; 
    j = 0;
    k = nromin; 
    while (i < n1 && j < n2) 
    { 
        if (L[i] <= R[j]) 
        { 
            v[k] = L[i]; 
            i++; 
        } 
        else
        { 
            v[k] = R[j]; 
            j++; 
        } 
        k++; 
    } 
  
    
    while (i < n1) 
    { 
        v[k] = L[i]; 
        i++; 
        k++; 
    } 
  
  
    while (j < n2) 
    { 
        v[k] = R[j]; 
        j++; 
        k++; 
    } 
} 
  
  
  
  
  
  
  

void mergeSort(int v[], int nromin, int nromax) 
{ 
    if (nromin < nromax) 
    { 
       
        int m = nromin+(nromax-nromin)/2; 
  
        
        mergeSort(v, nromin, m); 
        mergeSort(v, m+1, nromax); 
  
        merge(v, nromin, m, nromax); 
    } 
} 









void burbuja(int v[],int nromax){
int i, j, AUX;
int b=1;
do{

for(i=0;i<nromax-1;i++)
  {
	b=0;
	for(j=0;j<nromax-i-1;j++)
	
	  {
		if(v[j]>v[j+1])
		  {
			b=1; 
			AUX=v[j];
			v[j]=v[j+1];
			v[j+1]=AUX;
		  }
	  }
  }
}while(b==1);
}





void Insercion(int v[], int cant ) {
  int i, a, AUX;
  for (i=1; i < cant; i++) {
    AUX = v[i];
    a = i-1;
    while (a >= 0 && v[a] > AUX) {
      v[a + 1] = v[a];
      a--;
    }
    v[a+1] = AUX;
  }
}






void seleccion(int v[],int nromax){
	int AUX;
	int minimo=0;
for(int i=0 ; i<nromax-1 ; i++)
{
   minimo=i;
   for(int j=i+1 ; j<nromax ; j++)
   {
      if (v[minimo] > v[j]) minimo=j;
   }
   AUX=v[minimo];
   v[minimo]=v[i];
   v[i]=AUX;
}
}


