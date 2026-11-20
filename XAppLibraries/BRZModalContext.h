//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef BRZModalContext_h
#define BRZModalContext_h
@import Foundation;

@class Chat.DidEndCall, NSObject, UIViewController;

@interface BRZModalContext : NSObject { // (Swift)
    /* instance variables */
    oneway _Atomic Chat.DidEndCall lock;
}

@property (nonatomic, readonly) long long channel;
@property (nonatomic, retain) UIViewController *presentingViewController;
@property (nonatomic) _Bool animatePresentation;
@property (nonatomic) _Bool animateDismissal;
@property (nonatomic) _Bool openNewWindowLinksInBrowser;

/* instance methods */
- (id)init;

@end

#endif /* BRZModalContext_h */
