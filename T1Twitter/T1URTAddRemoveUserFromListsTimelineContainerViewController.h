//
#ifndef T1URTAddRemoveUserFromListsTimelineContainerViewController_h
#define T1URTAddRemoveUserFromListsTimelineContainerViewController_h
@import Foundation;

#include "_TtP12TwitterLists39CreateAndEditListViewControllerDelegate_-Protocol.h"
#include "_TtP14T1TwitterSwift47URTTimelineListViewModelTableRowAdapterDelegate_-Protocol.h"

@class TFNViewController;

@interface T1URTAddRemoveUserFromListsTimelineContainerViewController : TFNViewController <TwitterLists.CreateAndEditListViewControllerDelegate, T1TwitterSwift.URTTimelineListViewModelTableRowAdapterDelegate> { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *contentViewController;
    NSNumber"16@0:8 *accountID;
    NSNumber"16@0:8 *scribe;
    NSNumber"16@0:8 *listFeatures;
    NSNumber"16@0:8 *listMutationsManager;
    NSNumber"16@0:8 *membershipChanges;
}

/* instance methods */
- (void)createAndEditListViewController:(id)controller didCreateListID:(long long)id;
- (void)createAndEditListViewController:(id)controller didUpdateListMembership:(long long)membership;
- (void)createAndEditListViewControllerDidDeleteList:(id)list;
- (void)adapter:(id)adapter didTapPinnedImageForListID:(long long)id isPinned:(_Bool)pinned;
- (void)adapter:(id)adapter customizeCell:(id)cell forListID:(long long)id isMember:(_Bool)member;
- (void)adapter:(id)adapter didSelectCell:(id)cell forListID:(long long)id andTargetUserID:(long long)id;
- (void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)array;
- (id)scribePage;
- (id)initWithAccount:(id)account userReference:(id)reference scribePage:(id)page;
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* T1URTAddRemoveUserFromListsTimelineContainerViewController_h */
