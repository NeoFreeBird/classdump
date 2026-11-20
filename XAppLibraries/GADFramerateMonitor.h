//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADFramerateMonitor_h
#define GADFramerateMonitor_h
@import Foundation;

@class CADisplayLink, NSHashTable, NSObject;

@interface GADFramerateMonitor : NSObject {
    /* instance variables */
    NSHashTable *_observers;
    CADisplayLink *_displayLink;
    _Bool _hasFirstFrameInfo;
    double _lastDrawTimestamp;
    double _secondsSinceBootAtDisplayLinkReferenceDate;
}

@property (readonly, nonatomic) double frameDuration;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)startIfNeeded;
- (void)stopIfNeeded;
- (void)addFramerateObserver:(id)observer;
- (void)removeFramerateObserver:(id)observer;
- (long long)droppedFrameCountBetweenLastRenderAndTimestamp:(double)timestamp;
- (void)handleRenderForDisplayLink:(id)link;

@end

#endif /* GADFramerateMonitor_h */
