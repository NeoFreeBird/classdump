//
#ifndef _TtC22SuperAwesomeVideoCache25SAVCacheProgressPresenter_h
#define _TtC22SuperAwesomeVideoCache25SAVCacheProgressPresenter_h
@import Foundation;

#include "TFSProgressCenterObserver-Protocol.h"
#include "TULProgressLiveActivityControllerObserver-Protocol.h"

@class NSObject, _$s20ProgressLiveActivity0abC10ControllerCMn ?, _$sSDySS SuperAwesomeVideoCache.SAVCacheProgressPresenter.TrackedTask;

@interface SuperAwesomeVideoCache.SAVCacheProgressPresenter : NSObject <TFSProgressCenterObserver, TULProgressLiveActivityControllerObserver> { // (Swift)
    /* instance variables */
    Swift.Dictionary empty-list Swift.String SuperAwesomeVideoCache.SAVCacheProgressPresenter.TrackedTask trackedTasks;
    nominal type descriptor for ProgressLiveActivity.ProgressLiveActivityController ? liveActivity;
}

/* instance methods */
- (void)progressCenter:(id)center didUpdateProgress:(id)progress;
- (void)progressLiveActivityControllerDidEnd:(id)end;
- (id)init;

@end

#endif /* _TtC22SuperAwesomeVideoCache25SAVCacheProgressPresenter_h */
