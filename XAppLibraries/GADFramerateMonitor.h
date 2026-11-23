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
