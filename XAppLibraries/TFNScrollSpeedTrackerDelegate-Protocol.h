//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
