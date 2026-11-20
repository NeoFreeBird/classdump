//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
