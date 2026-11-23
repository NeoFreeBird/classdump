//
#ifndef TFNTwitterHomeTimelineStream_Protocol_h
#define TFNTwitterHomeTimelineStream_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"
#include "_TtP14TFSTwitterCore18URTImpressionCache_-Protocol.h"

@class NSArray;

@protocol TFNTwitterHomeTimelineStream <NSObject>

@required

@property (nonatomic, readonly) id <TFSTwitterCore.URTImpressionCache> impressionCache;
@property (nonatomic, readonly) NSArray *itemsToBeSerialized;
@property (nonatomic, readonly) unsigned long long applicationLaunchInitialRequestState;

/* required instance methods */
- (_Bool)loadNewerFromStatusPosting:(id)posting;
- (_Bool)loadNewerFromStatusPosting:(id)posting;
- (id)topCursor;
- (void)loadNewerWithSource:(long long)source completion:(id /* block */)completion;
- (void)loadNewerWithSource:(long long)source completion:(id /* block */)completion;
- (void)loadNewerWithSource:(long long)source pushToHomeTweetId:(id)id completion:(id /* block */)completion;
- (void)loadNewerWithSource:(long long)source pushToHomeTweetId:(id)id completion:(id /* block */)completion;
- (id)scribePage;
- (void)setVisibleScrollPositionState:(id)state;
- (id)getVisibleScrollPositionState;
- (void)didViewStreamObjects:(id)objects;
- (_Bool)hasUnreadItems;
- (_Bool)hasRealData;
- (_Bool)isEmpty;
- (_Bool)removeStreamObject:(id)object;
- (_Bool)removeStreamObject:(id)object;
- (void)dismissStreamObject:(id)object viaFeedbackAction:(id)action;
- (void)dismissStreamObject:(id)object viaFeedbackAction:(id)action;
- (void)removeAllStreamObjects;
- (void)injectPushToHomeTweet:(id)tweet;
- (void)injectPushToHomeTweet:(id)tweet;
- (void)didTapTombstoneViewTweetOnStreamObject:(id)object;
- (void)didTapTombstoneViewTweetOnStreamObject:(id)object;

@optional

@end

#endif /* TFNTwitterHomeTimelineStream_Protocol_h */
