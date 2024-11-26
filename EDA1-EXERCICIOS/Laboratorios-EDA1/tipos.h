// tipos.h
#ifndef TIPOS_H
#define TIPOS_H

typedef struct {
    char cidade[20];  // Nome da cidade
    float *temperatura;  // Ponteiro para armazenar temperaturas (alocação dinâmica)
} TMedidas;

typedef struct {
    int qtde_dias;      
    int qtde_medidas;   
    TMedidas *medidas;  
} TTemperaturas;

#endif 
