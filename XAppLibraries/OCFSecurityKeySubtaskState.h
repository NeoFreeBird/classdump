//
#ifndef OCFSecurityKeySubtaskState_h
#define OCFSecurityKeySubtaskState_h
@import Foundation;

#include "OCFSubtaskState.h"

@class NSString;

@interface OCFSecurityKeySubtaskState : OCFSubtaskState

@property (retain, nonatomic) NSString *clientDataJSON;
@property (retain, nonatomic) NSString *credentialID;
@property (retain, nonatomic) NSString *attestationObject;

/* instance methods */
- (void)addStateToJSONDictionary:(id)jsondictionary;

@end

#endif /* OCFSecurityKeySubtaskState_h */
