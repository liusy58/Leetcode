#include<iostream>

using namespace std;

int compute(int A, int B, int C, int D, int E, int F, int G, int H) {
    int res=0;
    if(A>E)
    {
        swap(A,E);swap(B,F);
        swap(C,G);swap(D,H);
    }
    if(E>=C||H<=B||F>=D)
        return 0;
    if(F<=B)
    {
        res=(C-E)*(min(H,D)-B);
    }
    else
    {
        res=(C-E)*(min(H,D)-F);
    }
    return res;
    
}
int computeArea(int A, int B, int C, int D, int E, int F, int G, int H) {
    return (C-A)*(D-B)+(G-E)*(H-F)-compute(A,B,C, D, E, F,  G,  H);
}
int main()
{

}