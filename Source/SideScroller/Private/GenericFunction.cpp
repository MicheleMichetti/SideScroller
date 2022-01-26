// Fill out your copyright notice in the Description page of Project Settings.


#include "GenericFunction.h"

GenericFunction::GenericFunction()
{
}

GenericFunction::~GenericFunction()
{
}

FSTItems ItemsTemp;

TArray<FSTItems> GenericFunction::SortItems(TArray<FSTItems> Items)
{
	
	for (int i = 0; i < Items.Num() - 1; i++) { 
		
		for (int j = 0; j < Items.Num() - 1 - i; j++) {
			
			if (Items[j].Value > Items[j + 1].Value) {   // Swap valori
				ItemsTemp = Items[j];
				Items[j] = Items[j + 1];
				Items[j + 1] = ItemsTemp;
				
				//Items.Swap(j, j + 1);   Funzione di Unreal

				
			}
		}
	}
	return Items;
}
