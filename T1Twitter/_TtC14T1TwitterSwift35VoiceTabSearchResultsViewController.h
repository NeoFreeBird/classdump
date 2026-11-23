//
#ifndef _TtC14T1TwitterSwift35VoiceTabSearchResultsViewController_h
#define _TtC14T1TwitterSwift35VoiceTabSearchResultsViewController_h
@import Foundation;

@class T1TwitterSwift.VoiceTabSearchResultsViewController.ActionHandler, T1TwitterSwift.VoiceTabSearchResultsViewController.ViewModel, TFNViewController, UIScrollView, _$s10TFNUISwift29LegacySegmentedViewControllerCMn;

@interface T1TwitterSwift.VoiceTabSearchResultsViewController : TFNViewController { // (Swift)
    /* instance variables */
    T1TwitterSwift.VoiceTabSearchResultsViewController.ActionHandler actionHandler;
    T1TwitterSwift.VoiceTabSearchResultsViewController.ViewModel viewModel;
    nominal type descriptor for TFNUISwift.LegacySegmentedViewController segmentedViewController;
}

@property (nonatomic, readonly) _Bool canBecomeFirstResponder;
@property (nonatomic, readonly) _Bool tfn_prefersNavigationBarHidden;
@property (nonatomic, readonly) _Bool tfn_prefersNavigationBarShadowHidden;
@property (nonatomic, readonly) _Bool tfn_prefersNavigationBarExpandedWhenScrolledToBottom;
@property (nonatomic, readonly) _Bool tfn_contentScrolledToBottom;
@property (nonatomic, readonly) UIScrollView *tfn_contentScrollView;

/* instance methods */
- (void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)array;
- (_Bool)tfn_isContentScrolledToBottom;
- (_Bool)becomeFirstResponder;
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC14T1TwitterSwift35VoiceTabSearchResultsViewController_h */
