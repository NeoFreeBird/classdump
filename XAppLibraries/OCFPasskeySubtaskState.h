//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
