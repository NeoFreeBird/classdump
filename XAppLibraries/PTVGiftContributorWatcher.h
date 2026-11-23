//
#ifndef PTVGiftContributorWatcher_h
#define PTVGiftContributorWatcher_h
@import Foundation;

#include "PTVBroadcastController.h"
#include "PTVBroadcastControllerObserver-Protocol.h"
#include "PTVChatControllerObserver-Protocol.h"
#include "PTVPaymanService.h"
#include "PTVWatchBroadcastAnalyticsManager.h"
#include "PTVWeakSet.h"

@class NSArray, NSCache, NSMutableArray, NSMutableSet, NSObject, NSSet, NSString;

@interface PTVGiftContributorWatcher : NSObject <PTVChatControllerObserver, PTVBroadcastControllerObserver> {
    /* instance variables */
    PTVPaymanService *_paymanService;
    PTVGiftContributorWatcher *_weakSelf;
    NSMutableArray *_latestContributorList;
    PTVWeakSet *_observers;
}

@property (nonatomic) _Bool watchingContributors;
@property (nonatomic) long long starTotal;
@property (nonatomic) double refreshInterval;
@property (readonly, nonatomic) NSCache *userCache;
@property (readonly, nonatomic) NSSet *contributingUserIds;
@property (retain, nonatomic) PTVWatchBroadcastAnalyticsManager *watchBroadcastAnalyticsManager;
@property (readonly, nonatomic) NSArray *allContributors;
@property (readonly, nonatomic) PTVBroadcastController *broadcastController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)broadcastController:(id)controller didUpdatePlaybackPointFrom:(id)from;
- (void)chatController:(id)controller didSendMessage:(id)message;
- (void)chatController:(id)controller didReceiveQueuedMessage:(id)message deliveryQueueSize:(unsigned long long)size;
- (void)chatController:(id)controller userDidJoinChat:(id)chat;
- (void)chatControllerDidJoinChatRoom:(id)room;
- (void)chatController:(id)controller didSubscribeWithSuccess:(_Bool)success;
- (void)chatControllerConnectionDidFail:(id)fail;
- (id)initWithBroadcastController:(id)controller;
- (id)loggedInUser;
- (id)chatController;
- (void)addObserver:(id)observer;
- (void)removeObserver:(id)observer;
- (void)notifyWithBlock:(id /* block */)block;
- (void)updateContibutionsForMessageIfNeeded:(id)needed;
- (void)updateContibutionsForUserID:(id)id participantIndex:(long long)index gift:(id)gift;
- (void)sortContributors;
- (void)updateContributorsForced:(_Bool)forced;
- (void)updateContributorsIfWatching;
- (void)startWatchingContributors;
- (void)fetchStarTotalIfNeeded;
- (void)didUpdateContributors:(id)contributors;
- (void)didGetLatestContributorList:(id)list;
- (void)loadUsersWithIds:(id)ids completion:(id /* block */)completion;
- (void)loadUsersForContributors:(id)contributors;
- (void)didLoadUsers:(id)users forContributors:(id)contributors error:(id)error;
- (void)stopWatchingContributors;

@end

#endif /* PTVGiftContributorWatcher_h */
