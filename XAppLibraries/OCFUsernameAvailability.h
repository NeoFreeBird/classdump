//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef OCFUsernameAvailability_h
#define OCFUsernameAvailability_h
@import Foundation;

#include "OCFAvailability.h"

@class NSString;

@interface OCFUsernameAvailability : OCFAvailability

@property (copy, nonatomic) NSString *desc;

/* instance methods */
- (id)initWithJSONDictionary:(id)jsondictionary;

@end

#endif /* OCFUsernameAvailability_h */
