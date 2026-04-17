#include <stdio.h>
int main(void){
    int i=1;//初期値
    int t,n=0;//ループカウンタ
    
    typedef struct{
    int tag;//点なのか線なのか 0:点:1:線
    int calc;//演算子の種類    0:足し算 1:引き算 2:掛け算 
    int num;//数字
    int yet;//通ったか通ってないか 0:通ってない1:通った
   }math;

   //初期の属性セットアップ
   math map[15][9]={0,0,0,0};//x,y
   for(t=0;t<9;t++){
        for(n=0;n<15;n++){
            if(t%2!=0||n%2!=0){
                map[t][n].tag=1;
            }
        }
    }
    //y=0
    map[0][1].calc=2;
    map[0][3].calc=0;
    map[0][5].calc=0;
    map[0][7].calc=1;
    //y=1
    map[1][0].calc=0;
    map[1][2].calc=0;
    map[1][4].calc=1;
    map[1][6].calc=1;
    map[1][8].calc=0;
    //y=2
    map[2][1].calc=0;
    map[2][3].calc=1;
    map[2][5].calc=0;
    map[2][7].calc=0;
    //y=3
    map[3][0].calc=0;
    map[3][2].calc=2;
    map[3][4].calc=0;
    map[3][6].calc=0;
    map[3][8].calc=2;
    //y=4
    map[4][1].calc=2;
    map[4][3].calc=0;
    map[4][5].calc=0;
    map[4][7].calc=0;
    //y=5
    map[5][0].calc=2;
    map[5][2].calc=1;
    map[5][4].calc=0;
    map[5][6].calc=0;
    map[5][8].calc=1;
    //y=6
    map[6][1].calc=2;
    map[6][3].calc=1;
    map[6][5].calc=0;
    map[6][7].calc=2;
    //y=7
    map[7][0].calc=0;
    map[7][2].calc=1;
    map[7][4].calc=2;
    map[7][6].calc=0;
    map[7][8].calc=1;
    //y=8
    map[8][1].calc=0;
    map[8][3].calc=2;
    map[8][5].calc=1;
    map[8][7].calc=1;
    //y=9
    map[9][0].calc=2;
    map[9][2].calc=1;
    map[9][4].calc=0;
    map[9][6].calc=2;
    map[9][8].calc=0;
    //y=10
    map[10][1].calc=0;
    map[10][3].calc=2;
    map[10][5].calc=2;
    map[10][7].calc=1;
    //y=11
    map[11][0].calc=0;
    map[11][2].calc=2;
    map[11][4].calc=1;
    map[11][6].calc=0;
    map[11][8].calc=1;
    //y=12
    map[12][1].calc=1;
    map[12][3].calc=0;
    map[12][5].calc=1;
    map[12][7].calc=2;
    //y=13
    map[13][0].calc=0;
    map[13][2].calc=1;
    map[13][4].calc=2;
    map[13][6].calc=0;
    map[13][8].calc=1;
    //y=14
    map[14][1].calc=0;
    map[14][3].calc=1;
    map[14][5].calc=0;
    map[14][7].calc=2;

    //num入力
    





    

    return 0;
}