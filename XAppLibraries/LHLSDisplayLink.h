//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
