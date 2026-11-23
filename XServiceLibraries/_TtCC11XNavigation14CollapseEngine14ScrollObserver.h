//
#ifndef _TtCC11XNavigation14CollapseEngine14ScrollObserver_h
#define _TtCC11XNavigation14CollapseEngine14ScrollObserver_h
@import Foundation;

@class NSObject, XNavigation.DisplayLinkDriver ?, _$s10Foundation21NSKeyValueObservationCMn ?, _$sSo12UIScrollViewCSgXw, _$sySbcSg, _$syycSg;

@interface XNavigation.CollapseEngine.ScrollObserver : NSObject { // (Swift)
    /* instance variables */
    (() -> ())? onDragBegan;
    (() -> ())? onScroll;
    ((Swift.Bool) -> ())? onDragEnded;
    (() -> ())? onDecelerationSettled;
    weak __C.UIScrollView? scrollView;
    nominal type descriptor for Foundation.NSKeyValueObservation ? contentOffsetObservation;
    XNavigation.DisplayLinkDriver ? displayLinkDriver;
}

/* instance methods */
- (void)dealloc;
- (void)handlePan:(id)pan;
- (id)init;

@end

#endif /* _TtCC11XNavigation14CollapseEngine14ScrollObserver_h */
