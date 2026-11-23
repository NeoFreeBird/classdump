//
#ifndef OCFStandardSubtask_h
#define OCFStandardSubtask_h
@import Foundation;

#include "OCFComponentCollection.h"
#include "OCFSubtask.h"

@interface OCFStandardSubtask : OCFSubtask {
    /* instance variables */
    OCFComponentCollection *_localComponentCollection;
}

/* class methods */
+ (id)typeNames;
+ (long long)version;

/* instance methods */
- (id)initWithComponentCollection:(id)collection subtaskID:(id)id;
- (id)componentCollection;

@end

#endif /* OCFStandardSubtask_h */
