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
