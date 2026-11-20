//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC18TwitterAudiospacesP33_EC0585558AECBB79F3A324E19F7930F831SpacesTrayContentViewController_h
#define _TtC18TwitterAudiospacesP33_EC0585558AECBB79F3A324E19F7930F831SpacesTrayContentViewController_h
@import Foundation;

#include "TFNPresentationInterceptor-Protocol.h"

@class UIViewController;
@protocol TFNModalContainerViewController;

@interface TwitterAudiospaces.(SpacesTrayContentViewController in _EC0585558AECBB79F3A324E19F7930F8) : UIViewController <TFNPresentationInterceptor> { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 content;
    @40@0:8:16@24@32 container;
    @40@0:8:16@24@32 expandable;
    @40@0:8:16@24@32 prefersFullScreen;
    @40@0:8:16@24@32 extendsBelowHandle;
    @40@0:8:16@24@32 isPushed;
    @40@0:8:16@24@32 modalSheet;
    @40@0:8:16@24@32 fallbackHeight;
    @40@0:8:16@24@32 paintsSurface;
    @40@0:8:16@24@32 contentInsets;
    @40@0:8:16@24@32 expandedToFullScreen;
    @40@0:8:16@24@32 isMeasuringHeight;
    @40@0:8:16@24@32 isCardPresenting;
    @40@0:8:16@24@32 lastMeasuredHeight;
    @40@0:8:16@24@32 didNotifyWillDismiss;
    @40@0:8:16@24@32 didNotifyDidDismiss;
    @40@0:8:16@24@32 borrowedBounce;
}

@property (nonatomic, readonly) UIViewController<TFNModalContainerViewController> *tfn_modalContainerViewController;

/* instance methods */
- (void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)array;
- (id)viewController:(id)controller willPresentWithPresentationInfo:(id)info;
- (void)dealloc;
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)disappear;
- (void)tfnPresentedCustomDismissAnimated:(_Bool)animated completion:(id /* block */)completion;
- (void)navigationControllerWillShowViewController:(id)controller;
- (void)voiceOverStatusDidChange;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC18TwitterAudiospacesP33_EC0585558AECBB79F3A324E19F7930F831SpacesTrayContentViewController_h */
