//
#ifndef _TtC20TwitterCommunitiesUI34CommunityHashtagCarouselController_h
#define _TtC20TwitterCommunitiesUI34CommunityHashtagCarouselController_h
@import Foundation;

#include "UICollectionViewDelegateFlowLayout-Protocol.h"

@class TFNItemsDataViewController, TwitterCommunities.CommunityModel, TwitterCommunitiesUI.CommunitiesNavigation, _$s13TFSObservable8ObserverCMn _$s14TFSTwitterCore30TwitterCommunityPinnedHashtagsVMn ?, _$sSa -> TwitterCommunities.CommunityHashtag, _$sSo27TFNCollectionViewFlowLayoutC;

@interface TwitterCommunitiesUI.CommunityHashtagCarouselController : TFNItemsDataViewController <UICollectionViewDelegateFlowLayout> { // (Swift)
    /* instance variables */
    TwitterCommunitiesUI.CommunitiesNavigation navigation;
    TwitterCommunities.CommunityModel communityModel;
    Swift.Array -> TwitterCommunities.CommunityHashtag hashtags;
    nominal type descriptor for TFSObservable.Observer nominal type descriptor for TFSTwitterCore.TwitterCommunityPinnedHashtags ? persistentModelObserver;
    __C.TFNCollectionViewFlowLayout layout;
}

/* instance methods */
- (struct CGSize { double x0; double x1; })collectionView:(id)view layout:(id)layout sizeForItemAtIndexPath:(id)path;
- (void)traitCollectionDidChange:(id)change;
- (void)viewDidLoad;
- (void)update:(_Bool)update;
- (id)initWithCollectionViewLayout:(id)layout isDiffableDataSourcesEnabled:(_Bool)enabled;
- (id)initWithCollectionViewLayout:(id)layout;

@end

#endif /* _TtC20TwitterCommunitiesUI34CommunityHashtagCarouselController_h */
