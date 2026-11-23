//
#ifndef TTACoreStatusLiveEngagementManager_h
#define TTACoreStatusLiveEngagementManager_h
@import Foundation;

#include "TFNScrollSpeedTrackerDelegate-Protocol.h"
#include "TFNViewControllerEventObserver-Protocol.h"
#include "TLPClient.h"

@class NSObject, NSString, TFNDataViewController, TFNScrollSpeedTracker, TFSModelContext, TFSTimer, TNLLRUCache;
@protocol TNUNetworkQualityProvider;

@interface TTACoreStatusLiveEngagementManager : NSObject <TFNScrollSpeedTrackerDelegate, TFNViewControllerEventObserver>

@property (nonatomic) unsigned long long cacheMinEntries;
@property (nonatomic) unsigned long long cacheMaxEntries;
@property (readonly, nonatomic) id <TNUNetworkQualityProvider> networkQualityProvider;
@property (readonly, nonatomic) TLPClient *livePipelineClient;
@property (readonly, nonatomic) TFSModelContext *modelContext;
@property (readonly, nonatomic) TNLLRUCache *statusCache;
@property (readonly, nonatomic) TFNScrollSpeedTracker *scrollTracker;
@property (readonly, nonatomic) TFSTimer *trackVisibleStatusesTimer;
@property (nonatomic) _Bool fetchUp;
@property (nonatomic) _Bool scrolling;
@property (nonatomic) _Bool trackingSuspended;
@property (readonly, nonatomic) _Bool offOnCellular;
@property (readonly, nonatomic) _Bool shouldAnimateLiveEngagementUpdates;
@property (readonly, weak, nonatomic) TFNDataViewController *dataViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)statusFromItem:(id)item;

/* instance methods */
- (id)initWithDataViewController:(id)controller livePipelineClient:(id)client networkQualityProvider:(id)provider modelContext:(id)context;
- (id)init;
- (void)dealloc;
- (void)trackStatus:(id)status atIndexPath:(id)path;
- (void)trackVisibleStatuses;
- (void)reset;
- (_Bool)_canStartTrackingStatusItems;
- (void)_startTrackingStatusItems:(id)items prefetchAtIndexPath:(id)path;
- (void)_addStatusItems:(id)items accumulateSubscriptions:(id)subscriptions;
- (id)_addStatus:(id)status;
- (id)_pruneCacheToSize:(unsigned long long)size;
- (void)_updateConfiguration:(id)configuration;
- (void)_applyConfiguration;
- (id)_statusItemsNearPath:(id)path offset:(long long)offset count:(long long)count fetchUp:(_Bool)up;
- (void)_trackVisibleStatusesWithDelay;
- (void)scrollSpeedTracker:(id)tracker didScrollScrollView:(id)view withScrollingDirection:(unsigned long long)direction;
- (void)scrollSpeedTracker:(id)tracker didEndScrollingScrollView:(id)view;
- (void)viewControllerViewDidFullyAppear:(id)appear;

@end

#endif /* TTACoreStatusLiveEngagementManager_h */
