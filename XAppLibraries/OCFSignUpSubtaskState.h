//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef OCFSignUpSubtaskState_h
#define OCFSignUpSubtaskState_h
@import Foundation;

#include "OCFSubtaskState.h"

@class NSDate, NSString;

@interface OCFSignUpSubtaskState : OCFSubtaskState

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *countryCode;
@property (copy, nonatomic) NSString *phone;
@property (copy, nonatomic) NSString *email;
@property (retain, nonatomic) NSDate *birthday;
@property (copy, nonatomic) NSString *jsInstrumentationResponse;

/* instance methods */
- (void)addStateToJSONDictionary:(id)jsondictionary;

@end

#endif /* OCFSignUpSubtaskState_h */
