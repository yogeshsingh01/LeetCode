


typedef struct {
    int big;
    int medium;
    int small;    
} ParkingSystem;


ParkingSystem* parkingSystemCreate(int big, int medium, int small) {
    ParkingSystem *parking = (ParkingSystem *)malloc(sizeof(ParkingSystem));
    parking->big = big;
    parking->medium = medium;
    parking->small = small;
    return parking;
}

bool parkingSystemAddCar(ParkingSystem* obj, int carType) {
    switch(carType)
    {
        case 1:
            if(obj->big)
            {   
                obj->big -= 1;
                return true;
            }
            break;
        case 2:
             if(obj->medium)
             {   
                obj->medium -= 1;
                return true;
            }
            break;
        case 3:
             if(obj->small)
             {   
                obj->small -= 1;
                return true;
            }
            break;
        default:
            break;
    }
    return false;
}

void parkingSystemFree(ParkingSystem* obj) {
    free(obj);
}

/**
 * Your ParkingSystem struct will be instantiated and called as such:
 * ParkingSystem* obj = parkingSystemCreate(big, medium, small);
 * bool param_1 = parkingSystemAddCar(obj, carType);
 
 * parkingSystemFree(obj);
*/