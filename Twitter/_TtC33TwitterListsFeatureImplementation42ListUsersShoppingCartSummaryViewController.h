//
#ifndef _TtC33TwitterListsFeatureImplementation42ListUsersShoppingCartSummaryViewController_h
#define _TtC33TwitterListsFeatureImplementation42ListUsersShoppingCartSummaryViewController_h
@import Foundation;

@class TFNViewController, TwitterListsFeatureImplementation.ListUsersShoppingCartSummaryViewController.HydratedSummary ?, TwitterListsFeatureImplementation.ListUsersShoppingCartSummaryViewController.Summary ?, TwitterListsFeatureImplementation.ListUsersShoppingCartSummaryViewControllerDelegate ?, _$s12TwitterLists12ListFeaturesCMn, _$sSo11UIStackViewCSg, _$sSo16NSOperationQueueCSg, _$sSo17TFNTwitterAccountC, _$sSo19TUIUserFacepileViewC, _$sSo6UIViewCSg, _$sSo7UILabelC, _$sSo9TFNButtonCSg;

@interface TwitterListsFeatureImplementation.ListUsersShoppingCartSummaryViewController : TFNViewController { // (Swift)
    /* instance variables */
    __C.TFNTwitterAccount account;
    __C.UILabel titleLabel;
    __C.TUIUserFacepileView usersView;
    __C.UILabel detailsLabel;
    nominal type descriptor for TwitterLists.ListFeatures listFeatures;
    TwitterListsFeatureImplementation.ListUsersShoppingCartSummaryViewControllerDelegate ? delegate;
    __C.UIStackView? $__lazy_storage_$_contentStackView;
    __C.UIView? $__lazy_storage_$_editButton;
    __C.TFNButton? $__lazy_storage_$_doneButton;
    __C.UIView? $__lazy_storage_$_userActionsView;
    __C.NSOperationQueue? $__lazy_storage_$_avatarViewModelsQueue;
    TwitterListsFeatureImplementation.ListUsersShoppingCartSummaryViewController.Summary ? summary;
    TwitterListsFeatureImplementation.ListUsersShoppingCartSummaryViewController.HydratedSummary ? hydratedSummary;
}

/* instance methods */
- (id)scribePage;
- (id)scribeSection;
- (void)editButtonAction:(id)action;
- (void)doneButtonAction:(id)action;
- (void)viewDidLoad;
- (id)initWithCoder:(id)coder;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC33TwitterListsFeatureImplementation42ListUsersShoppingCartSummaryViewController_h */
