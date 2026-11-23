//
#ifndef _TtC33TwitterListsFeatureImplementation32ListDetailsContentViewController_h
#define _TtC33TwitterListsFeatureImplementation32ListDetailsContentViewController_h
@import Foundation;

#include "TFNPresented-Protocol.h"

@class Swift.Bool, TwitterListsFeatureImplementation.ListUsersShoppingCartViewControllerStateManager, _$s12TwitterLists12HydratedListVMn, _$s12TwitterLists23ListRankingModeArchiverC0dE0OMn, _$s14T1TwitterSwift17URTViewControllerCMn, _$s14T1TwitterSwift46ResizableHeaderSingularContainerViewControllerCN, _$sSh -> _$s14TFSTwitterCore0A13UserReferenceCMn, _$sSo17TFNTwitterAccountC;

@interface TwitterListsFeatureImplementation.ListDetailsContentViewController : type metadata for T1TwitterSwift.ResizableHeaderSingularContainerViewController <TFNPresented> { // (Swift)
    /* instance variables */
    nominal type descriptor for TwitterLists.HydratedList list;
    nominal type descriptor for TwitterLists.ListRankingModeArchiver.RankingMode rankingMode;
    __C.TFNTwitterAccount account;
    nominal type descriptor for T1TwitterSwift.URTViewController urtViewController;
    Swift.Bool timelineNeedsRefresh;
    TwitterListsFeatureImplementation.ListUsersShoppingCartViewControllerStateManager stateManager;
    Swift.Set -> nominal type descriptor for TFSTwitterCore.TFSTwitterUserReference addedUsers;
    Swift.Set -> nominal type descriptor for TFSTwitterCore.TFSTwitterUserReference removedUsers;
    Swift.Bool isOwnerBlocked;
}

@property (nonatomic, readonly) _Bool prefersSystemNavigationBar;
@property (nonatomic, readonly) unsigned long long tfn_supportedInterfaceOrientations;
@property (nonatomic, readonly) _Bool shouldAutorotate;
@property (nonatomic, readonly) long long preferredInterfaceOrientationForPresentation;

/* instance methods */
- (void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)array;
- (_Bool)canCollapseHeader;
- (void)viewWillAppear:(_Bool)appear;
- (void)profileViewModelDidInvalidateWithNotification:(id)notification;

@end

#endif /* _TtC33TwitterListsFeatureImplementation32ListDetailsContentViewController_h */
