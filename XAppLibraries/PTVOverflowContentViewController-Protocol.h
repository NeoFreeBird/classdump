//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVOverflowContentViewController_Protocol_h
#define PTVOverflowContentViewController_Protocol_h
@import Foundation;

@protocol PTVOverflowContentViewController

@required

@optional

/* optional instance methods */
- (id)overflowContentViewControllerDismissButtonTitle;
- (_Bool)overflowContentViewControllerShouldDisplayBackButton;
- (_Bool)overflowContentViewControllerShouldDisplayDismissButton;
- (_Bool)overflowContentViewControllerShouldGoBack;
- (_Bool)overflowContentViewControllerShouldAllowSwipeToGoBack;

@end

#endif /* PTVOverflowContentViewController_Protocol_h */
