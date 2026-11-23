//
#ifndef _TtC14TFSTwitterCore37TwitterAPIUsersExtendedProfileCommand_h
#define _TtC14TFSTwitterCore37TwitterAPIUsersExtendedProfileCommand_h
@import Foundation;

#include "TFSTwitterAPICommandWithResponseModelBuilder.h"

@class _$sSS;

@interface TFSTwitterCore.TwitterAPIUsersExtendedProfileCommand : TFSTwitterAPICommandWithResponseModelBuilder { // (Swift)
    /* instance variables */
    Swift.String screenName;
}

/* instance methods */
- (id)request;
- (id)initWithAccountID:(id)id context:(id)context authContext:(id)context networkTransactionMetrics:(id)metrics source:(unsigned long long)source responseModelBuilder:(id)builder completionBlock:(id /* block */)block;

@end

#endif /* _TtC14TFSTwitterCore37TwitterAPIUsersExtendedProfileCommand_h */
