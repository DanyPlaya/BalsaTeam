#pragma once

void MainMenu();
//Seminar 1
void seminar3();
void MainMenu();
int SumPositiveElement(int*arr, const int size);
int CountPositiveElement(int* arr, const int size);
bool* CoordinatesPositiveElement(int* arr, const int size);
void MultiMaxMin(int* arr, const int size);
int* SortArray(int* arr, const int size);
void dataEnter(int* arr, int size);
void displayArray(int* arr, int size);
int MaxElement(int* arr, int size,int &indexMax);
int MinElement(int* arr, int size,int &indexMin);
void MainLogic(int* arr, int size);
void MainSort(int* arr, int size);
void SumCountCoordPosElement(int* arr, int size);
bool* MaxIndexArray(int* arr, int size, int max, int &countMax);
bool* MinIndexArray(int* arr, int size, int min, int &countMin);
int MultiRes(int* arr, int size, int max, int min, int CountMax, int CountMin, int indexMax, int indexMin);
int EqualMaxMin(int* arr, int size, int max, int min, int indexMax, int indexMin, int countMax, int countMin, int sum);
//Seminar 2
void seminar4();
void dataEnter(int** Matrix, int rows, int columns);
void displayArray(int** Matrix, int rows, int columns);
void ZeroCollum(int** Matrix, int row, int col);
void s2logic(int** Matrix, int rows, int columns);
void dataEnterBool(bool* arr, int size);
int** MatrixSortcharacter(int** Matrix, int row, int col);
//seminar 3
void seminar5();
void s5logic(char* buf);
void chek(char* buf);
int AmountPoint(char* buf);
void Output(char* buf);
