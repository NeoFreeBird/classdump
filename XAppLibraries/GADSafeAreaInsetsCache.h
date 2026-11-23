//
#ifndef GADSafeAreaInsetsCache_h
#define GADSafeAreaInsetsCache_h
@import Foundation;

@class NSObject, UIWindow;
@protocol OS_dispatch_queue;

@interface GADSafeAreaInsetsCache : NSObject {
    /* instance variables */
    NSObject<OS_dispatch_queue> *_lockQueue;
    UIWindow *_window;
}

@property (readonly) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } safeAreaInsets;

/* instance methods */
- (id)initWithWindow:(id)window;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)path ofObject:(id)object change:(id)change context:(void *)context;

@end

#endif /* GADSafeAreaInsetsCache_h */
