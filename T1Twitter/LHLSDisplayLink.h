//
#ifndef LHLSDisplayLink_h
#define LHLSDisplayLink_h
@import Foundation;

@class CADisplayLink, NSObject;
@protocol OS_dispatch_semaphore;

@interface LHLSDisplayLink : NSObject {
    /* instance variables */
    CADisplayLink *_displayLink;
    NSObject<OS_dispatch_semaphore> *_displayLinkActive;
    id /* block */ _callbackBlock;
}

/* instance methods */
- (id)initWithCallbackBlock:(id /* block */)block;
- (void)shutdown;
- (void)displayLinkCallback:(id)callback;

@end

#endif /* LHLSDisplayLink_h */
