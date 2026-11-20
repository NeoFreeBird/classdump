//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1URTNotificationTimelineRefresher_h
#define T1URTNotificationTimelineRefresher_h
@import Foundation;

#include "T1URTNotificationTimelineRefresherDelegate-Protocol.h"

@class NSObject;

@interface T1URTNotificationTimelineRefresher : NSObject { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *account;
    NSNumber"16@0:8 *updateTimelineBlock;
    NSNumber"16@0:8 *updateTimelineFromPushBlock;
    NSNumber"16@0:8 *updateTimelineFromAppDidBecomeActiveBlock;
    NSNumber"16@0:8 *updateTimelineFromViewWillAppearBlock;
    NSNumber"16@0:8 *dumpCache;
}

@property (nonatomic, weak) id <T1URTNotificationTimelineRefresherDelegate> delegate;

/* instance methods */
- (id)initWithAccount:(id)account loadTop:(id /* block */)top dumpCache:(id /* block */)cache;
- (void)viewWillAppear;
- (void)didReceivePush:(id)push;
- (void)advancedFiltersChanged:(id)changed;
- (void)accountSettingsDidUpdate:(id)update;
- (void)appDidBecomeActive:(id)active;
- (void)accountUserBlocksOrMutesDidUpdate:(id)update;
- (id)init;

@end

#endif /* T1URTNotificationTimelineRefresher_h */
