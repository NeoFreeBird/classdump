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
