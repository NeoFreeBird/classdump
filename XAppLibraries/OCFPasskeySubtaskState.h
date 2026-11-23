//
#ifndef OCFPasskeySubtaskState_h
#define OCFPasskeySubtaskState_h
@import Foundation;

#include "OCFSubtaskState.h"

@class NSString;

@interface OCFPasskeySubtaskState : OCFSubtaskState

@property (copy, nonatomic) NSString *attestationObject;
@property (copy, nonatomic) NSString *credentialID;
@property (copy, nonatomic) NSString *clientDataJSON;
@property (copy, nonatomic) NSString *signature;
@property (copy, nonatomic) NSString *authenticatorData;
@property (copy, nonatomic) NSString *userID;

/* instance methods */
- (void)addStateToJSONDictionary:(id)jsondictionary;

@end

#endif /* OCFPasskeySubtaskState_h */
