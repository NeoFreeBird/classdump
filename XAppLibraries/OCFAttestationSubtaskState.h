//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef OCFAttestationSubtaskState_h
#define OCFAttestationSubtaskState_h
@import Foundation;

#include "OCFSubtaskState.h"

@class NSString;

@interface OCFAttestationSubtaskState : OCFSubtaskState

@property (copy, nonatomic) NSString *attestationToken;

/* class methods */
+ (id)attestationTokenKey;

/* instance methods */
- (void)addStateToJSONDictionary:(id)jsondictionary;

@end

#endif /* OCFAttestationSubtaskState_h */
