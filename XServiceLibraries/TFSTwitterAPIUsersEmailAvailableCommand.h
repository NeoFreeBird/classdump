//
#ifndef TFSTwitterAPIUsersEmailAvailableCommand_h
#define TFSTwitterAPIUsersEmailAvailableCommand_h
@import Foundation;

#include "TFSTwitterAPICommandWithResponseModelBuilder.h"

@class NSString;

@interface TFSTwitterAPIUsersEmailAvailableCommand : TFSTwitterAPICommandWithResponseModelBuilder

@property (copy, nonatomic) NSString *emailAddress;

/* instance methods */
- (id)initWithContext:(id)context emailAddress:(id)address responseModelBuilder:(id)builder completionBlock:(id /* block */)block;
- (id)request;

@end

#endif /* TFSTwitterAPIUsersEmailAvailableCommand_h */
