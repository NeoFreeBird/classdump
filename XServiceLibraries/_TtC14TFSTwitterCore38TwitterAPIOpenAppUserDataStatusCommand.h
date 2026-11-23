//
#ifndef _TtC14TFSTwitterCore38TwitterAPIOpenAppUserDataStatusCommand_h
#define _TtC14TFSTwitterCore38TwitterAPIOpenAppUserDataStatusCommand_h
@import Foundation;

#include "TFSTwitterAPICommandWithResponseModelBuilder.h"

@interface TFSTwitterCore.TwitterAPIOpenAppUserDataStatusCommand : TFSTwitterAPICommandWithResponseModelBuilder // (Swift)

/* instance methods */
- (id)request;
- (id)initWithAccountID:(id)id context:(id)context authContext:(id)context networkTransactionMetrics:(id)metrics source:(unsigned long long)source responseModelBuilder:(id)builder completionBlock:(id /* block */)block;

@end

#endif /* _TtC14TFSTwitterCore38TwitterAPIOpenAppUserDataStatusCommand_h */
