

int oddCells(int n, int m, int** indices, int indicesSize, int* indicesColSize){
    
    int oddNoOfCell = 0;
    // dynamically allocate a 2-d array
    int *matrix = (int *)calloc((n*m),sizeof(int));
    
    // loop over indices
    for(int i=0; i< indicesSize; i++)
    {
        // loop over row and column and increment
        for(int j=0; j<m; j++)
            *(matrix + (indices[i][0])*m + j) += 1; 
        
        for(int j=0; j<n; j++)
            *(matrix + j*m + (indices[i][1])) += 1;  
        
    }
    for(int i=0; i< m*n; i++)
    {
        if(matrix[i]%2)
            oddNoOfCell++;
            
    }
    return oddNoOfCell;
}