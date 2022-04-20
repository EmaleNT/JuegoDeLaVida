#pragma once
#include <stdbool.h>
#include <stdlib.h>

typedef struct {
    bool* readCells;
    bool* writeCells;

    size_t width;
    size_t height;
} World;

//  Devuelve un apuntador a una nueca locación del mundo con las dimensiones establecidas
World* newWorld(size_t width, size_t height);
// Obtiene y posiciona a la celula en su lugar
void setCell(World* world, size_t x, size_t y, bool isAlive);
bool getCell(World*, size_t x, size_t y);
// Regresa un arreglo que representa el mundo
char* formatWorld(World*);
// Imprime el arreglo del mundo
void printWorld(World*);
// Avanza en el mundo
void advanceWorld(World*);
