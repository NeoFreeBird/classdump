//
#ifndef _TtC20TwitterCommunitiesUI33CommunitiesCarouselViewController_h
#define _TtC20TwitterCommunitiesUI33CommunitiesCarouselViewController_h
@import Foundation;

#include "UICollectionViewDelegateFlowLayout-Protocol.h"

@class TFNItemsDataViewController, TwitterCommunities.CommunityCollectionModel ?, TwitterCommunitiesUI.CommunitiesCarouselViewControllerDelegate ?, TwitterCommunitiesUI.CommunitiesNavigation, _$sSo27TFNCollectionViewFlowLayoutC, _$sSo9TFNButtonCSg, _$syXlSg;

@interface TwitterCommunitiesUI.CommunitiesCarouselViewController : TFNItemsDataViewController <UICollectionViewDelegateFlowLayout> { // (Swift)
    /* instance variables */
    TwitterCommunitiesUI.CommunitiesNavigation navigation;
    TwitterCommunitiesUI.CommunitiesCarouselViewControllerDelegate ? delegate;
    __C.TFNCollectionViewFlowLayout layout;
    TwitterCommunities.CommunityCollectionModel ? communityCollectionModel;
    Swift.AnyObject? communityCollectionModelObservationHandle;
    __C.TFNButton? $__lazy_storage_$_showMoreButton;
}

/* instance methods */
- (struct CGSize { double x0; double x1; })collectionView:(id)view layout:(id)layout sizeForItemAtIndexPath:(id)path;
- (void)didSelectShowMore;
- (void)traitCollectionDidChange:(id)change;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)update:(_Bool)update;
- (void)layoutMetricsDidChange:(id)change to:(id)to;
- (id)initWithCollectionViewLayout:(id)layout isDiffableDataSourcesEnabled:(_Bool)enabled;
- (id)initWithCollectionViewLayout:(id)layout;

@end

#endif /* _TtC20TwitterCommunitiesUI33CommunitiesCarouselViewController_h */
