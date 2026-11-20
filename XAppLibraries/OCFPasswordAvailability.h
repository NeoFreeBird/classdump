//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef OCFPasswordAvailability_h
#define OCFPasswordAvailability_h
@import Foundation;

#include "OCFAvailability.h"

@interface OCFPasswordAvailability : OCFAvailability

/* instance methods */
- (id)initWithJSONDictionary:(id)jsondictionary;

@end

#endif /* OCFPasswordAvailability_h */
