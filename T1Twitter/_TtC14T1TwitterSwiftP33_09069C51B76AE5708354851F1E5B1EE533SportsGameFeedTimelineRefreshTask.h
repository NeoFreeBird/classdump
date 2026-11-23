//
#ifndef _TtC14T1TwitterSwiftP33_09069C51B76AE5708354851F1E5B1EE533SportsGameFeedTimelineRefreshTask_h
#define _TtC14T1TwitterSwiftP33_09069C51B76AE5708354851F1E5B1EE533SportsGameFeedTimelineRefreshTask_h
@import Foundation;

#include "TFSTwitterRecurringTask-Protocol.h"

@class NSObject;

@interface T1TwitterSwift.(SportsGameFeedTimelineRefreshTask in _09069C51B76AE5708354851F1E5B1EE5) : NSObject <TFSTwitterRecurringTask> { // (Swift)
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

#endif /* _TtC14T1TwitterSwiftP33_09069C51B76AE5708354851F1E5B1EE533SportsGameFeedTimelineRefreshTask_h */
