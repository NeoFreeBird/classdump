//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1ScrollDistanceLogger_h
#define T1ScrollDistanceLogger_h
@import Foundation;

#include "TFNViewControllerEventObserver-Protocol.h"
#include "UIScrollViewDelegate-Protocol.h"

@class NSObject;

@interface T1ScrollDistanceLogger : NSObject <TFNViewControllerEventObserver, UIScrollViewDelegate> { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *yOffsetOnDidBeginActivelyScrolling;
    NSNumber"16@0:8 *lastYOffset;
    NSNumber"16@0:8 *lastLiveYOffset;
    NSNumber"16@0:8 *totalDistance;
    NSNumber"16@0:8 *isUserScrolling;
    NSNumber"16@0:8 *shouldScribeTotalScrollDistance;
    NSNumber"16@0:8 *shouldScribeActiveScrollDistance;
    NSNumber"16@0:8 *dataViewController;
}

@property (nonatomic) double totalDistanceLive;
@property (nonatomic) _Bool isActivelyScrolling;

/* instance methods */
- (id)initWithDataViewController:(id)controller shouldScribeTotalScrollDistance:(_Bool)distance shouldScribeActiveScrollDistance:(_Bool)distance;
- (void)viewControllerViewWillFullyDisappear:(id)disappear;
- (void)viewControllerApplicationWillResignActive:(id)active;
- (void)scrollViewWillBeginDragging:(id)dragging;
- (void)scrollViewDidEndDragging:(id)dragging willDecelerate:(_Bool)decelerate;
- (void)scrollViewWillBeginDecelerating:(id)decelerating;
- (void)scrollViewDidEndDecelerating:(id)decelerating;
- (void)scrollViewDidScroll:(id)scroll;
- (id)init;

@end

#endif /* T1ScrollDistanceLogger_h */
