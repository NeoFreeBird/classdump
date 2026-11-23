//
#ifndef TNUHARCreator_h
#define TNUHARCreator_h
@import Foundation;

#include "TNUHARObject.h"

@class NSString;

@interface TNUHARCreator : TNUHARObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *version;

/* instance methods */
- (id)mutableJSONDictionary;

@end

#endif /* TNUHARCreator_h */
