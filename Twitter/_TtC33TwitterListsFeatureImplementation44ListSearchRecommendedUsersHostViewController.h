//
#ifndef _TtC33TwitterListsFeatureImplementation44ListSearchRecommendedUsersHostViewController_h
#define _TtC33TwitterListsFeatureImplementation44ListSearchRecommendedUsersHostViewController_h
@import Foundation;

@class TwitterListsFeatureImplementation.ListUserTypeaheadViewController, TwitterListsFeatureImplementation.ListUsersShoppingCartViewControllerStateManager, UIViewController, _$sSo17TFNTwitterAccountC, _$sSo23TFSTwitterScribeContextC;

@interface TwitterListsFeatureImplementation.ListSearchRecommendedUsersHostViewController : UIViewController { // (Swift)
    /* instance variables */
    __C.TFNTwitterAccount account;
    TwitterListsFeatureImplementation.ListUsersShoppingCartViewControllerStateManager stateManager;
    __C.TFSTwitterScribeContext scribeContext;
    TwitterListsFeatureImplementation.ListUserTypeaheadViewController searchViewController;
}

/* instance methods */
- (void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)array;
- (id)scribePage;
- (id)scribeSection;
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC33TwitterListsFeatureImplementation44ListSearchRecommendedUsersHostViewController_h */
