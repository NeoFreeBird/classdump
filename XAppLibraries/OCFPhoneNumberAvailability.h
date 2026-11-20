//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef OCFPhoneNumberAvailability_h
#define OCFPhoneNumberAvailability_h
@import Foundation;

#include "OCFAvailability.h"

@class NSString;

@interface OCFPhoneNumberAvailability : OCFAvailability

@property (readonly, nonatomic) _Bool validPhoneNumber;
@property (readonly, nonatomic) _Bool availablePhoneNumber;
@property (readonly, copy, nonatomic) NSString *normalizedPhoneNumber;

/* instance methods */
- (id)initWithJSONDictionary:(id)jsondictionary;

@end

#endif /* OCFPhoneNumberAvailability_h */
