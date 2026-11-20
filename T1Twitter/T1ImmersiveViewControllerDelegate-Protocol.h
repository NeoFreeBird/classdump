//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1ImmersiveViewControllerDelegate_Protocol_h
#define T1ImmersiveViewControllerDelegate_Protocol_h
@import Foundation;

@protocol T1ImmersiveViewControllerDelegate

@required

@property (nonatomic, readonly) _Bool isDismissGestureActive;

/* required instance methods */
- (void)immersiveViewControllerDockVideo:(id)video;
- (void)closeAction;
- (_Bool)sourceSupportsWithOrientationMask:(unsigned long long)mask;

@optional

@end

#endif /* T1ImmersiveViewControllerDelegate_Protocol_h */
