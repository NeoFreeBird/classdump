//
#ifndef _TtC4DMV221LoadingViewController_h
#define _TtC4DMV221LoadingViewController_h
@import Foundation;

@class UIView, _$s10TFNUISwift20TFNHostingControllerCN, _$sSo16UINavigationItemCSg, _$sSo22TFNExpandingButtonItemCSg, _$sSo6UIViewCSg;

@interface DMV2.LoadingViewController : type metadata for TFNUISwift.TFNHostingController { // (Swift)
    /* instance variables */
    __C.UINavigationItem? parentNavigationItem;
    __C.UIView? $__lazy_storage_$_searchBarAccessoryView;
    __C.TFNExpandingButtonItem? $__lazy_storage_$_composeActionButtonItem;
}

@property (nonatomic, readonly) UIView *tfn_navigationBarAccessoryView;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (_Bool)tui_showsActionButton;
- (id)tui_actionButtonItemCategories;
- (id)tui_buttonItemForCategory:(unsigned long long)category;

@end

#endif /* _TtC4DMV221LoadingViewController_h */
