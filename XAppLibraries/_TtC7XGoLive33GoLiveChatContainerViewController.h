//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC7XGoLive33GoLiveChatContainerViewController_h
#define _TtC7XGoLive33GoLiveChatContainerViewController_h
@import Foundation;

@class UIViewController, XGoLive.GoLiveChatComposerHosting _$s_So16UIViewControllerCXc, XGoLive.GoLiveChatScrimView, _$s13XDesignSystem6ButtonCMn, _$syyc;

@interface XGoLive.GoLiveChatContainerViewController : UIViewController { // (Swift)
    /* instance variables */
    XGoLive.GoLiveChatComposerHosting _$s_So16UIViewControllerCXc chatViewController;
    () -> () onOverflow;
    XGoLive.GoLiveChatScrimView scrimView;
    nominal type descriptor for XDesignSystem.Button overflowButton;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)loadView;
- (void)viewDidLoad;
- (void)overflowTapped;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC7XGoLive33GoLiveChatContainerViewController_h */
