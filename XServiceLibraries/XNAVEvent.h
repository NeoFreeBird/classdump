//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef XNAVEvent_h
#define XNAVEvent_h
@import Foundation;

@class NSObject, UINavigationController, UIViewController;

@interface XNAVEvent : NSObject // (Swift)

@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) UINavigationController *navigationController;
@property (nonatomic, readonly) UIViewController *viewController;
@property (nonatomic, readonly) UIViewController *fromViewController;
@property (nonatomic, readonly) UIViewController *toViewController;
@property (nonatomic, readonly) _Bool animated;
@property (nonatomic, readonly) _Bool cancelled;

/* instance methods */
- (id)init;

@end

#endif /* XNAVEvent_h */
