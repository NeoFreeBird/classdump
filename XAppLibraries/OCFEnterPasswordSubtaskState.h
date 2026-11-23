//
#ifndef OCFEnterPasswordSubtaskState_h
#define OCFEnterPasswordSubtaskState_h
@import Foundation;

#include "OCFSubtaskState.h"

@class NSString;

@interface OCFEnterPasswordSubtaskState : OCFSubtaskState

@property (copy, nonatomic) NSString *password;
@property (copy, nonatomic) NSString *createdPassword;
@property (copy, nonatomic) NSString *castleToken;

/* instance methods */
- (void)addStateToJSONDictionary:(id)jsondictionary;

@end

#endif /* OCFEnterPasswordSubtaskState_h */
