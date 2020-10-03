/**
 *  On a plane there are n points with integer coordinates points[i] = [xi, yi]. 
 *  Your task is to find the minimum time in seconds to visit all points.
 * 
 *  You can move according to the next rules:
 *
 *   In one second always you can either move vertically, horizontally by one unit or diagonally (it means to move one unit vertically and one unit horizontally in one second).
 *   You have to visit the points in the same order as they appear in the array. 
 ***************************************************************************/
int minTimeToVisitAllPoints(int** points, int pointsSize, int* pointsColSize){
    
    int minSize = 0;
    // one have to  mve diagonally as much as possible then straight
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

int main()
{
    int arr[3][2] = {{1,1},{3,4},{-1,0}};

    int a = 3;
    minTimeToVisitAllPoints(&arr,3, &a);
    return 0;
}