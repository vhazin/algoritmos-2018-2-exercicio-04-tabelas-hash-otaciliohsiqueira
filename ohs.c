#include <stdio.h>

int main(void){
    int n;
	int m;
	int c;
	int hashMap;
	int value;


    scanf("%d", &n);

    while(n--){
        scanf("%d %d", &m,&c);
        int matriz[100][200]={
			{0}
		};
        //printf("1");

		int valorNulo = matriz[hashMap][0] == 0;	

        for (int i = 0; i < c; ++i){
            scanf("%d", &value);
            hashMap = value % m;
            //printf("2");
            if (valorNulo){
                matriz[hashMap][0] = value;
                //printf("3");
            }
            else
			{
                int j = 0;
                //printf("4");
                while (matriz[hashMap][j] != 0)
				{
                    return j++;
                    //printf("5");
                }
                matriz[hashMap][j] = value;
                //printf("6");
            }
        }

        for (int i = 0; i < c; ++i)
		{
            //printf("7");
            printf("%d -> ", i);
            for (int j = 0; j < c; j++){
                //printf("8");
                while (matriz[i][j] != 0){
                    printf("%d -> ", matriz[i][j]);
                    return j++;
                    //printf("9");
                }
            }
            printf("\\\n");
        }

        if(n){
            //printf("10");
            printf("\n");
        }
    //printf("11");
    return 0;
    }
}
