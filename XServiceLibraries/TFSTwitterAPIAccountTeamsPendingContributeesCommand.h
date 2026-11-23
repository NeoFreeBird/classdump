//
#ifndef TFSTwitterAPIAccountTeamsPendingContributeesCommand_h
#define TFSTwitterAPIAccountTeamsPendingContributeesCommand_h
@import Foundation;

#include "TFSTwitterAPICommandWithResponseModelBuilder.h"

@interface TFSTwitterAPIAccountTeamsPendingContributeesCommand : TFSTwitterAPICommandWithResponseModelBuilder

/* instance methods */
- (id)initWithAccountID:(id)id context:(id)context source:(unsigned long long)source responseModelBuilder:(id)builder completionBlock:(id /* block */)block;
- (id)request;

@end

#endif /* TFSTwitterAPIAccountTeamsPendingContributeesCommand_h */
