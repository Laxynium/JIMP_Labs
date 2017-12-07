//
// Created by Grzegorz Gruszczyk on 07/12/17.
//

#ifndef LAB_9_SMARTSTRING_H
#define LAB_9_SMARTSTRING_H

typedef struct SmartString* SmartStringPtr;

SmartStringPtr CreateSmartString(int capacity=10);

void Destroy(SmartStringPtr string);


#endif //LAB_9_SMARTSTRING_H
