//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwiftP33_250666820DCD24440E6CAC429C8ACE9B33SportsGameFeedTimelineRefreshTask_h
#define _TtC14T1TwitterSwiftP33_250666820DCD24440E6CAC429C8ACE9B33SportsGameFeedTimelineRefreshTask_h
@import Foundation;

#include "TFSTwitterRecurringTask-Protocol.h"

@class NSObject;

@interface T1TwitterSwift.(SportsGameFeedTimelineRefreshTask in _250666820DCD24440E6CAC429C8ACE9B) : NSObject <TFSTwitterRecurringTask> { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *timelineViewController;
    NSNumber"16@0:8 *completion;
}

/* instance methods */
- (void)tfs_triggerFromService:(id)service event:(id)event completion:(id /* block */)completion;
- (id)tfs_taskState;
- (id)tfs_errorDomain;
- (id)init;

@end

#endif /* _TtC14T1TwitterSwiftP33_250666820DCD24440E6CAC429C8ACE9B33SportsGameFeedTimelineRefreshTask_h */
