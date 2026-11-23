//
#ifndef _TtC14T1TwitterSwift29ContactsRequestViewController_h
#define _TtC14T1TwitterSwift29ContactsRequestViewController_h
@import Foundation;

@class UIViewController, _$sSo11UIImageViewCSg, _$sSo17TFNTwitterAccountC, _$sSo23TUIImageViewFetchHelperCSg, _$sSo6UIViewCSg, _$sSo7UILabelCSg, _$sSo9TFNButtonCSg, _$syycSg;

@interface T1TwitterSwift.ContactsRequestViewController : UIViewController { // (Swift)
    /* instance variables */
    __C.TFNTwitterAccount account;
    (() -> ())? onAccessGranted;
    (() -> ())? onAccessDenied;
    __C.TUIImageViewFetchHelper? imageFetchHelper;
    __C.UIImageView? $__lazy_storage_$_illustrationImageView;
    __C.UILabel? $__lazy_storage_$_titleLabel;
    __C.UILabel? $__lazy_storage_$_subtitleLabel;
    __C.UIView? $__lazy_storage_$_securityContainerView;
    __C.UIView? $__lazy_storage_$_buttonShadowContainer;
    __C.TFNButton? $__lazy_storage_$_allowAccessButton;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)appear;
- (void)viewWillDisappear:(_Bool)disappear;
- (void)traitCollectionDidChange:(id)change;
- (void)allowAccessButtonTapped;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC14T1TwitterSwift29ContactsRequestViewController_h */
