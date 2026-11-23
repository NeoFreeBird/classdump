//
#ifndef OCFDeregisterDeviceSubtaskState_h
#define OCFDeregisterDeviceSubtaskState_h
@import Foundation;

#include "OCFSubtaskState.h"

@class NSString;

@interface OCFDeregisterDeviceSubtaskState : OCFSubtaskState

@property (copy, nonatomic) NSString *deviceRegistrationToken;

/* instance methods */
- (void)addStateToJSONDictionary:(id)jsondictionary;

@end

#endif /* OCFDeregisterDeviceSubtaskState_h */
