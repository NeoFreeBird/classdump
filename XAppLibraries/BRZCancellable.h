//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef BRZCancellable_h
#define BRZCancellable_h
@import Foundation;

@class Chat.DidEndCall, NSObject;

@interface BRZCancellable : NSObject { // (Swift)
    /* instance variables */
    oneway _Atomic Chat.DidEndCall lock;
    oneway _Atomic Chat.DidEndCall _cancel;
}

/* class methods */
+ (id)empty;

/* instance methods */
- (void)dealloc;
- (void)cancel;
- (id)init;

@end

#endif /* BRZCancellable_h */
