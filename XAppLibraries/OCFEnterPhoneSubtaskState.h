//
#ifndef OCFEnterPhoneSubtaskState_h
#define OCFEnterPhoneSubtaskState_h
@import Foundation;

#include "OCFSubtaskState.h"

@class NSArray, NSNumber, NSString;

@interface OCFEnterPhoneSubtaskState : OCFSubtaskState

@property (copy, nonatomic) NSString *phoneNumber;
@property (copy, nonatomic) NSString *countryCode;
@property (copy, nonatomic) NSArray *selectedSettings;
@property (retain, nonatomic) NSNumber *discoverabilityValue;

/* instance methods */
- (void)addStateToJSONDictionary:(id)jsondictionary;

@end

#endif /* OCFEnterPhoneSubtaskState_h */
