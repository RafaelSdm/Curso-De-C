nt invertido(int n, int *vInver[20]){
    int invertendo[20], i, j;
    //variavel invertendo p guardar os numeros invertidos
    for(i=0; i<n; i++){
        for(j=n; j>=0; j--){
            invertendo[i] = vInver[j];
        }
    }
    return invertendo[20];
}

int main(){
    int vetorOriginal[20], i;
    srand(time(NULL));

    for(i=0; i<20; i++){
        printf("[%d]", vetorOriginal[i]=rand()%10);
    }
    printf("\n\n");

    for(i=0; i<20; i++){
    printf("[%d]", invertido(20, &vetorOriginal));
    }

}
