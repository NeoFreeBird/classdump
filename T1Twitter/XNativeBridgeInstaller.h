//
#ifndef XNativeBridgeInstaller_h
#define XNativeBridgeInstaller_h
@import Foundation;

@class NSObject;

@interface XNativeBridgeInstaller : NSObject // (Swift)

/* class methods */
+ (void)installIfNeededOn:(id)on;

/* instance methods */
- (id)init;

@end

#endif /* XNativeBridgeInstaller_h */
