//
#ifndef OCFEnterUsernameSubtaskState_h
#define OCFEnterUsernameSubtaskState_h
@import Foundation;

#include "OCFPasskeySubtaskState.h"
#include "OCFSubtaskState.h"

@class NSString;

@interface OCFEnterUsernameSubtaskState : OCFSubtaskState

@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) OCFPasskeySubtaskState *passKeyState;

/* instance methods */
- (void)addStateToJSONDictionary:(id)jsondictionary;

@end

#endif /* OCFEnterUsernameSubtaskState_h */
