//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1HomeTimelineVariantCoordinator_h
#define T1HomeTimelineVariantCoordinator_h
@import Foundation;

#include "_TtP26TwitterHomePinnedTimelines25PinnedTimelinesRepository_-Protocol.h"

@class NSObject;

@interface T1HomeTimelineVariantCoordinator : NSObject { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *_defaultMigrationTransientDispatchOnceToken;
    NSNumber"16@0:8 *accountID;
    NSNumber"16@0:8 *userID;
    NSNumber"16@0:8 *listFeatures;
    NSNumber"16@0:8 *maxUserOwnedOrSubscribedLists;
}

@property (nonatomic, readonly) id <TwitterHomePinnedTimelines.PinnedTimelinesRepository> pinnedTimelinesRepository;

/* instance methods */
- (id)init;

@end

#endif /* T1HomeTimelineVariantCoordinator_h */
