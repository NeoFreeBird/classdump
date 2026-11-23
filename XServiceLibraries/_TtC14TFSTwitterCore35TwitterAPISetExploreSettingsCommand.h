//
#ifndef _TtC14TFSTwitterCore35TwitterAPISetExploreSettingsCommand_h
#define _TtC14TFSTwitterCore35TwitterAPISetExploreSettingsCommand_h
@import Foundation;

#include "TFSTwitterAPICommand.h"

@class _$sSSSg, _$sSaySSGSg, _$sSbSg;

@interface TFSTwitterCore.TwitterAPISetExploreSettingsCommand : TFSTwitterAPICommand { // (Swift)
    /* instance variables */
    Swift.Bool? usePersonalizedTrends;
    Swift.Bool? useFunModeStories;
    Swift.Bool? useCurrentLocation;
    [Swift.String]? placeIDs;
    Swift.String? activeGrokStoryMode;
}

/* instance methods */
- (id)request;
- (id)initWithAccountID:(id)id context:(id)context authContext:(id)context networkTransactionMetrics:(id)metrics source:(unsigned long long)source completionBlock:(id /* block */)block;

@end

#endif /* _TtC14TFSTwitterCore35TwitterAPISetExploreSettingsCommand_h */
