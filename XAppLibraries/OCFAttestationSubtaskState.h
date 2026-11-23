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
