//
#ifndef _TtC10TwitterURT32URTUpdateContextLifecycleManager_h
#define _TtC10TwitterURT32URTUpdateContextLifecycleManager_h
@import Foundation;

@class _$s10XUtilities11UnfairQueueCMn, _$sSD -> TwitterURT.URTTimelineUpdateContext.Identity Swift.Bool, _$sSD -> TwitterURT.URTTimelineUpdateContext.Identity TwitterURT.URTTimelineUpdateContext, _$sSD -> TwitterURT.URTTimelineUpdateContext.Identity TwitterURT.URTUpdateContextLifecycleManager.StronglyModeledCursor, _$sSD -> TwitterURT.URTTimelineUpdateContext.Identity _$sSo8TFSTimerC, _$sSh -> TwitterURT.URTTimelineUpdateContext.Identity, _$sSh -> TwitterURT.URTUpdateContextLifecycleManager.StronglyModeledCursor, _TtCs12_SwiftObject;

@interface TwitterURT.URTUpdateContextLifecycleManager : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for XUtilities.UnfairQueue actionsAccessQueue;
    Swift.Set -> TwitterURT.URTTimelineUpdateContext.Identity accessQueue_inProgressContextIdentifiers;
    Swift.Set -> TwitterURT.URTUpdateContextLifecycleManager.StronglyModeledCursor accessQueue_inProgressCursors;
    Swift.Dictionary -> TwitterURT.URTTimelineUpdateContext.Identity TwitterURT.URTUpdateContextLifecycleManager.StronglyModeledCursor accessQueue_contextIdentityToCursor;
    Swift.Dictionary -> TwitterURT.URTTimelineUpdateContext.Identity TwitterURT.URTTimelineUpdateContext accessQueue_contextIdentityToContext;
    Swift.Dictionary -> TwitterURT.URTTimelineUpdateContext.Identity Swift.Bool accessQueue_contextIdentityToUpdated;
    Swift.Dictionary -> TwitterURT.URTTimelineUpdateContext.Identity __C.TFSTimer accessQueue_contextIdentityToTimer;
}

@end

#endif /* _TtC10TwitterURT32URTUpdateContextLifecycleManager_h */
