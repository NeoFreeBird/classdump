//
#ifndef _TtC11TwitterHome29TimelineItemVisibilityTracker_h
#define _TtC11TwitterHome29TimelineItemVisibilityTracker_h
@import Foundation;

#include "URTItemVisibilityMonitor-Protocol.h"

@class NSObject, _$s10XUtilities11UnfairQueueCMn, _$sSD -> _$s14TFSTwitterCore11URTTimelineC8ItemPathVMn TwitterHome.TimelineItemVisibilityTracker.ItemVisibilityContext;

@interface TwitterHome.TimelineItemVisibilityTracker : NSObject <URTItemVisibilityMonitor> { // (Swift)
    /* instance variables */
    nominal type descriptor for XUtilities.UnfairQueue unfairAccessQueue;
    Swift.Dictionary -> nominal type descriptor for TFSTwitterCore.URTTimeline.ItemPath TwitterHome.TimelineItemVisibilityTracker.ItemVisibilityContext visibileItemIndex;
}

/* instance methods */
- (void)itemWillDisplay:(id)display atIndexPath:(id)path;
- (void)itemWillEndDisplaying:(id)displaying atIndexPath:(id)path;
- (id)init;

@end

#endif /* _TtC11TwitterHome29TimelineItemVisibilityTracker_h */
