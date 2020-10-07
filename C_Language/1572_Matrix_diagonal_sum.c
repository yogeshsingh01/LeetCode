/**
 * Given a square matrix mat, return the sum of the matrix diagonals.
 * 
 * Only include the sum of all the elements on the primary diagonal and all the elements on the secondary diagonal that are not part of the primary diagonal.
 ******************************************************************/
int diagonalSum(int** mat, int matSize, int* matColSize){
    
    int sum = 0;
    
    for(int i=0; i<matSize; i++)
    {
        sum += mat[i][i] + mat[matSize-1-i][i];
    }
    if(matSize%2)
        sum -= mat[matSize/2][matSize/2];
    return sum;
}