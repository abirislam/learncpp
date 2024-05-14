#include <iostream>

int generateID() 
{
    // since this value is static, it lives throughout the program until the program ends like a global variable
    // unlike a global variable however, it still only lives within the scope its called within
    // however, the value is stored which makes it useful for generating multiple unique entities
    static int s_itemID{ 0 };

    // this will make a copy of s_itemID, increment the real ID, and then return the copy
    // so for the first instance it will copy 0, increment the actual value to 1, and then return 0
    // this will let us use the ID 1 on the next call of generateID();
    return s_itemID++; 
}

// notes: because s_itemID is a local variable, it can't be tampered with by other functions
