//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNContainerViewControllerEntry_h
#define TFNContainerViewControllerEntry_h
@import Foundation;

@class NSObject, UIViewController;

@interface TFNContainerViewControllerEntry : NSObject {
    /* instance variables */
    _Bool _visible;
    _Bool _transitioning;
}

@property (retain, nonatomic) UIViewController *viewController;
@property (nonatomic) _Bool attached;

/* instance methods */
- (void)beginAppearanceTransition:(_Bool)transition animated:(_Bool)animated;
- (void)endAppearanceTransition:(_Bool)transition animated:(_Bool)animated;

@end

#endif /* TFNContainerViewControllerEntry_h */
