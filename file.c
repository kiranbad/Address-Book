#include <stdio.h>
#include "file.h"



void loadContactsFromFile(AddressBook *addressBook)
{
    FILE *fptr;
    fptr=fopen("file1.csv","r");
    if(fptr==NULL)
    {
        printf("Error while opening the file.\n");
        return;
    }
    addressBook->contactCount=0;
    while(fscanf(fptr,"%[^,],%[^,],%[^\n]\n",
    addressBook->contacts[addressBook->contactCount].name,
    addressBook->contacts[addressBook->contactCount].phone,
    addressBook->contacts[addressBook->contactCount].email)!=EOF)
    {
        addressBook->contactCount++;
    }
    
}
