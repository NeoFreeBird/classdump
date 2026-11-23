//
#ifndef _TtC14TFSTwitterCore33TwitterAPIExploreLocationsCommand_h
#define _TtC14TFSTwitterCore33TwitterAPIExploreLocationsCommand_h
@import Foundation;

#include "TFSTwitterAPICommandWithResponseModelBuilder.h"

@class _$sSSSg;

@interface TFSTwitterCore.TwitterAPIExploreLocationsCommand : TFSTwitterAPICommandWithResponseModelBuilder { // (Swift)
    /* instance variables */
    Swift.String? prefix;
}

/* instance methods */
- (id)request;
- (id)initWithAccountID:(id)id context:(id)context authContext:(id)context networkTransactionMetrics:(id)metrics source:(unsigned long long)source responseModelBuilder:(id)builder completionBlock:(id /* block */)block;

@end

#endif /* _TtC14TFSTwitterCore33TwitterAPIExploreLocationsCommand_h */
