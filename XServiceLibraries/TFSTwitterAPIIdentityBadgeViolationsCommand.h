//
#ifndef TFSTwitterAPIIdentityBadgeViolationsCommand_h
#define TFSTwitterAPIIdentityBadgeViolationsCommand_h
@import Foundation;

#include "TFSTwitterAPICommandWithResponseModelBuilder.h"

@interface TFSTwitterAPIIdentityBadgeViolationsCommand : TFSTwitterAPICommandWithResponseModelBuilder

/* instance methods */
- (id)initWithAccountID:(id)id context:(id)context source:(unsigned long long)source responseModelBuilder:(id)builder completionBlock:(id /* block */)block;
- (id)request;

@end

#endif /* TFSTwitterAPIIdentityBadgeViolationsCommand_h */
