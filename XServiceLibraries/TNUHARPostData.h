//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TNUHARPostData_h
#define TNUHARPostData_h
@import Foundation;

#include "TNUHARObject.h"

@class NSString;

@interface TNUHARPostData : TNUHARObject

@property (copy, nonatomic) NSString *mimeType;
@property (copy, nonatomic) NSString *text;

/* instance methods */
- (id)mutableJSONDictionary;

@end

#endif /* TNUHARPostData_h */
