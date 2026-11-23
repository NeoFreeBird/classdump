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
