//
#ifndef TFSTwitterAPIUsersEmailPhoneInfoCommand_h
#define TFSTwitterAPIUsersEmailPhoneInfoCommand_h
@import Foundation;

#include "TFSTwitterAPICommandWithResponseModelBuilder.h"

@interface TFSTwitterAPIUsersEmailPhoneInfoCommand : TFSTwitterAPICommandWithResponseModelBuilder

/* instance methods */
- (id)initWithContext:(id)context accountID:(id)id source:(unsigned long long)source responseModelBuilder:(id)builder completionBlock:(id /* block */)block;
- (id)request;

@end

#endif /* TFSTwitterAPIUsersEmailPhoneInfoCommand_h */
