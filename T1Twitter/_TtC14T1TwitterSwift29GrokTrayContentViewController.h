//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift29GrokTrayContentViewController_h
#define _TtC14T1TwitterSwift29GrokTrayContentViewController_h
@import Foundation;

#include "TFNNavigationStack-Protocol.h"

@class NSArray, Swift.Bool, T1TwitterSwift.GrokContainerViewController, UIViewController, _$sSo16UIViewControllerCSgXw, _$syycSg;

@interface T1TwitterSwift.GrokTrayContentViewController : UIViewController <TFNNavigationStack> { // (Swift)
    /* instance variables */
    T1TwitterSwift.GrokContainerViewController grokViewController;
    Swift.Bool raisesKeyboardOnAppearance;
    weak __C.UIViewController? presenter;
    (() -> ())? onWillRevealPresenter;
}

@property (nonatomic, readonly) NSArray *viewControllers;
@property (nonatomic, readonly) UIViewController *topViewController;
@property (nonatomic, readonly) UIViewController *visibleViewController;

/* instance methods */
- (void)pushViewController:(id)controller animated:(_Bool)animated completion:(id /* block */)completion;
- (id)popViewControllerAnimated:(_Bool)animated completion:(id /* block */)completion;
- (id)replaceTopViewController:(id)controller animated:(_Bool)animated completion:(id /* block */)completion;
- (id)popToViewController:(id)controller animated:(_Bool)animated completion:(id /* block */)completion;
- (id)popToRootViewControllerAnimated:(_Bool)animated completion:(id /* block */)completion;
- (id)popToRootAndPushViewController:(id)controller animated:(_Bool)animated completion:(id /* block */)completion;
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)disappear;
- (void)viewDidLayoutSubviews;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC14T1TwitterSwift29GrokTrayContentViewController_h */
