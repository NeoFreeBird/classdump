//
#ifndef T1ToastErrorReporting_h
#define T1ToastErrorReporting_h
@import Foundation;

@class NSObject;

@interface T1ToastErrorReporting : NSObject // (Swift)

/* class methods */
+ (void)showPersistentErrorToastWithMessage:(id)message retry:(id /* block */)retry cancel:(id /* block */)cancel;

/* instance methods */
- (id)init;

@end

#endif /* T1ToastErrorReporting_h */
