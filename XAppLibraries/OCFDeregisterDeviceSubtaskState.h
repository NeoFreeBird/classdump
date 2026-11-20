//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
