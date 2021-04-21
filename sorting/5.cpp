class Solution{
  public:
    int middle(int A, int B, int C){
        int x = A-B;  //a is greater if +ve
        int y = B-C; // b is greater if +ve
        int z = C-A; //c is greater if +ve 
        
        // +ve * +ve > 0
        // -ve * +ve < 0
        if(x*y>0) return B;
        else if(x*z > 0) return A;
        else return C;
    }
};