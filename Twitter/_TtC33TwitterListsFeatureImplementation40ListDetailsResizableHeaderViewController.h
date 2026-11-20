//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC33TwitterListsFeatureImplementation40ListDetailsResizableHeaderViewController_h
#define _TtC33TwitterListsFeatureImplementation40ListDetailsResizableHeaderViewController_h
@import Foundation;

#include "UIAdaptivePresentationControllerDelegate-Protocol.h"
#include "_TtP12TwitterLists39CreateAndEditListViewControllerDelegate_-Protocol.h"

@class T1ResizableHeaderViewController, TwitterHomePinnedTimelines0cD10Repository_pSg, TwitterListsFeatureImplementation.ListDetailsResizableHeaderViewControllerDelegate ?, _$s12TwitterLists12HydratedListVMn, _$s12TwitterLists12ListFeaturesCMn, _$s12TwitterLists20ListMutationsManagerCMn, _$s12TwitterLists23ListRankingModeArchiverC0dE0OMn, _$sSo17TFNTwitterAccountC, _$sSo6UIViewC;

@interface TwitterListsFeatureImplementation.ListDetailsResizableHeaderViewController : T1ResizableHeaderViewController <UIAdaptivePresentationControllerDelegate, TwitterLists.CreateAndEditListViewControllerDelegate> { // (Swift)
    /* instance variables */
    TwitterListsFeatureImplementation.ListDetailsResizableHeaderViewControllerDelegate ? listUpdateDelegate;
    __C.TFNTwitterAccount account;
    __C.UIView bottomSeparatorView;
    nominal type descriptor for TwitterLists.ListMutationsManager mutationsManager;
    TwitterHomePinnedTimelines0cD10Repository_pSg pinnedTimelinesRepository;
    nominal type descriptor for TwitterLists.HydratedList viewModel;
    nominal type descriptor for TwitterLists.ListRankingModeArchiver.RankingMode rankingMode;
    nominal type descriptor for TwitterLists.ListFeatures listFeatures;
}

/* instance methods */
- (id)scribe;
- (id)scribePage;
- (void)presentationControllerDidDismiss:(id)dismiss;
- (void)listEditDidDismiss:(id)dismiss;
- (void)createAndEditListViewControllerDidDeleteList:(id)list;
- (void)createAndEditListViewController:(id)controller didUpdateListMembership:(long long)membership;
- (void)createAndEditListViewController:(id)controller didCreateListID:(long long)id;
- (void)resizableHeaderViewDidTapBackButton:(id)button;
- (void)resizableHeaderViewDidTapSearchButton:(id)button;
- (id)makeNavigationBarButtonItemForBarButtonOption:(long long)option;
- (void)didTapNavigationBarSearch;
- (void)resizableHeaderView:(id)view didTapShareHeaderButton:(id)button;
- (void)resizableHeaderView:(id)view didTapMoreActionsButton:(id)button;
- (void)blockListDidChangeWithNotification:(id)notification;
- (void)resizableHeaderViewDidTapBannerImage:(id)image;
- (id)initWithHeaderViewConstructor:(id /* block */)constructor scribe:(id)scribe;
- (id)initWithHeaderViewClass:(Class)_class scribe:(id)scribe;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;

@end

#endif /* _TtC33TwitterListsFeatureImplementation40ListDetailsResizableHeaderViewController_h */
