//
#ifndef URTTimelineTombstoneItemViewModel_h
#define URTTimelineTombstoneItemViewModel_h
@import Foundation;

#include "NSObject-Protocol.h"
#include "TFNTwitterConversationTreeContextProvider-Protocol.h"
#include "TFNTwitterStatusConversationTreeContext-Protocol.h"
#include "TTACoreAnatomyFeatures.h"
#include "URTTimelineStatusItemViewModel.h"

@class NSObject, NSString, TFSURTRichText;

@interface URTTimelineTombstoneItemViewModel : NSObject <TFNTwitterConversationTreeContextProvider, NSObject> { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 tombstone;
    @40@0:8:16@24@32 clientEventInfo;
    @40@0:8:16@24@32 feedbackContext;
    @40@0:8:16@24@32 nonTweetBackedConversationTreeContext;
    @40@0:8:16@24@32 tombstoneKind;
    @40@0:8:16@24@32 isConversationAncestor;
    @40@0:8:16@24@32 isConversationPrecededByAncestor;
}

@property (nonatomic, readonly) id <TFNTwitterStatusConversationTreeContext> conversationTreeContext;
@property (nonatomic, retain) URTTimelineStatusItemViewModel *interstitialedTweet;
@property (nonatomic, readonly) NSString *entryID;
@property (nonatomic, readonly) _Bool isHydrationTombstone;
@property (nonatomic, readonly) TTACoreAnatomyFeatures *anatomyFeatures;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) TFSURTRichText *viewButtonRichText;
@property (nonatomic, readonly) TFSURTRichText *messageRichText;

/* class methods */
+ (id)tombstoneWith:(id)with anatomyFeatures:(id)features;
+ (id)tombstoneWithRichText:(id)text;

/* instance methods */
- (_Bool)isEqual:(id)equal;
- (id)init;

@end

#endif /* URTTimelineTombstoneItemViewModel_h */
