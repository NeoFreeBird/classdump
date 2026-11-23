//
#ifndef T1ImmersiveStackTeardown_h
#define T1ImmersiveStackTeardown_h
@import Foundation;

@class NSObject;

@interface T1ImmersiveStackTeardown : NSObject // (Swift)

/* class methods */
+ (void)prepareForDockDismissFrom:(id)from;
+ (id)dockDismissalRootPresenterFrom:(id)from;

/* instance methods */
- (id)init;

@end

#endif /* T1ImmersiveStackTeardown_h */
