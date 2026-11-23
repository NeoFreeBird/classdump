//
#ifndef TFNScrollSpeedTrackerDelegate_Protocol_h
#define TFNScrollSpeedTrackerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFNScrollSpeedTrackerDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)scrollSpeedTracker:(id)tracker didScrollScrollViewFast:(id)fast;
- (void)scrollSpeedTracker:(id)tracker didScrollScrollViewSlow:(id)slow;
- (void)scrollSpeedTracker:(id)tracker didScrollScrollView:(id)view withScrollingDirection:(unsigned long long)direction;
- (void)scrollSpeedTracker:(id)tracker didEndScrollingScrollView:(id)view;

@end

#endif /* TFNScrollSpeedTrackerDelegate_Protocol_h */
