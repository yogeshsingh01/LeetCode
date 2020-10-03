

int minTimeToVisitAllPoints(int** points, int pointsSize, int* pointsColSize){
    
    int minSize = 0;
    for(int i=1; i<pointsSize; i++)
    {
        int X0 =  points[i-1][0];
        int X1 =  points[i][0];
        int Y0 =  points[i-1][1];
        int Y1 =  points[i][1];
        
        int diffX =  abs(X1-X0);
        int diffY =  abs(Y1-Y0);
        
        minSize += (diffX>=diffY) ? diffX : diffY;       
    }
    return minSize;
}