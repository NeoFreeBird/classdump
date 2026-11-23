//
#ifndef _TtC10TwitterURT23URTTimelineContinuation_h
#define _TtC10TwitterURT23URTTimelineContinuation_h
@import Foundation;

#include "UIScrollViewDelegate-Protocol.h"

@class NSObject, Swift.Bool, TwitterURT.URTBottomCursorBackoffManager, TwitterURT.URTTimelineContinuation.LoadingIndicator, TwitterURT.URTTimelineContinuationEntranceAnimator ?, TwitterURT.URTTimelineUpdateContext.Identity ?, TwitterURT.URTTimelineUpdater, _$s10TFSURTCore16URTTimelineEntryV7ContentO4ItemV5LabelVMn, _$s12CoreGraphics7CGFloatVMn _$syc, _$s14TFSTwitterCore11URTTimelineCMn ?, _$s8TFSModel12ModelContextCMn, _$sSS, _$sSayScTyyt _$ss5NeverOMn, _$sSo12UIScrollViewCSgyc;

@interface TwitterURT.URTTimelineContinuation : NSObject <UIScrollViewDelegate> { // (Swift)
    /* instance variables */
    Swift.String hostTimelineUID;
    Swift.String continuationTimelineUID;
    TwitterURT.URTTimelineUpdater hostTimelineUpdater;
    TwitterURT.URTTimelineUpdater continuationUpdater;
    nominal type descriptor for TFSModel.ModelContext modelContext;
    nominal type descriptor for TFSURTCore.URTTimelineEntry.Content.Item.Label divider;
    () -> __C.UIScrollView? visibleScrollView;
    nominal type descriptor for CoreGraphics.CGFloat _$syc trailingSkeletonHeight;
    TwitterURT.URTTimelineContinuation.LoadingIndicator function type (escaping) loadingDidChange;
    Swift.String mirroredEntryIDPrefix;
    TwitterURT.URTBottomCursorBackoffManager bottomLoadBackoffManager;
    nominal type descriptor for TFSTwitterCore.URTTimeline ? hostTimeline;
    nominal type descriptor for TFSTwitterCore.URTTimeline ? continuationTimeline;
    Swift.Bool isHostReady;
    TwitterURT.URTTimelineUpdateContext.Identity ? loadingPageIdentity;
    TwitterURT.URTTimelineContinuation.LoadingIndicator loadingIndicator;
    Swift.Array empty-list Swift.Task empty-list () nominal type descriptor for Swift.Never timelineObservations;
    TwitterURT.URTTimelineContinuationEntranceAnimator ? $__lazy_storage_$_entranceAnimator;
}

/* instance methods */
- (void)scrollViewDidScroll:(id)scroll;
- (void)dealloc;
- (id)init;

@end

#endif /* _TtC10TwitterURT23URTTimelineContinuation_h */
