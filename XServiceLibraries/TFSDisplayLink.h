//
#ifndef TFSDisplayLink_h
#define TFSDisplayLink_h
@import Foundation;

@class CADisplayLink, NSObject;

@interface TFSDisplayLink : NSObject {
    /* instance variables */
    CADisplayLink *_displayLink;
    id _target;
    SEL _selector;
}

@property (nonatomic) long long preferredFramesPerSecond;
@property (nonatomic) _Bool paused;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) double timestamp;
@property (readonly, nonatomic) double targetTimestamp;

/* class methods */
+ (id)displayLinkWithTarget:(id)target selector:(SEL)selector;

/* instance methods */
- (id)init;
- (id)initWithTarget:(id)target selector:(SEL)selector;
- (void)configureMinimumFrameRate:(float)rate maximumFrameRate:(float)rate preferredFrameRate:(float)rate;
- (void)configureDefaultFrameRateRange;
- (_Bool)isPaused;
- (void)addToRunLoop:(id)loop forMode:(id)mode;
- (void)removeFromRunLoop:(id)loop forMode:(id)mode;
- (void)invalidate;
- (void)_displayLinkDidFire:(id)fire;

@end

#endif /* TFSDisplayLink_h */
