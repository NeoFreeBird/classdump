//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
