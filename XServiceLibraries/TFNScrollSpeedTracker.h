//
#ifndef TFNScrollSpeedTracker_h
#define TFNScrollSpeedTracker_h
@import Foundation;

#include "UIScrollViewDelegate-Protocol.h"

@class NSObject, NSString;
@protocol TFNScrollSpeedTrackerDelegate;

@interface TFNScrollSpeedTracker : NSObject <UIScrollViewDelegate> {
    /* instance variables */
    double _lastScrollTimes[5];
    double _lastScrollOffsets[5];
}

@property (weak, nonatomic) id <TFNScrollSpeedTrackerDelegate> delegate;
@property (readonly, nonatomic) double lastScrollTime;
@property (nonatomic) double fastScrollVelocityThreshold;
@property (nonatomic) double slowScrollVelocityThreshold;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)scrollViewDidScroll:(id)scroll;
- (void)scrollViewDidEndDragging:(id)dragging willDecelerate:(_Bool)decelerate;
- (void)scrollViewDidEndDecelerating:(id)decelerating;
- (void)scrollViewDidScrollToTop:(id)top;
- (void)scrollViewDidEndScrollingAnimation:(id)animation;
- (void)_scrollViewDidStopScrolling:(id)scrolling;
- (unsigned long long)_scrollingDirection;

@end

#endif /* TFNScrollSpeedTracker_h */
