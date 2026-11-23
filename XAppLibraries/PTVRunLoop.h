//
#ifndef PTVRunLoop_h
#define PTVRunLoop_h
@import Foundation;

@class NSObject;

@interface PTVRunLoop : NSObject {
    /* instance variables */
    struct __CFRunLoopSource * runLoopSource;
    struct __CFRunLoop * _runLoop;
    _Bool _done;
}

/* instance methods */
- (id)init;
- (void)fireSource;
- (void)run;
- (void)sourceFired;
- (void)dealloc;

@end

#endif /* PTVRunLoop_h */
