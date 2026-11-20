//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC20TwitterCommunitiesUI29CommunityItemsDataViewAdapter_h
#define _TtC20TwitterCommunitiesUI29CommunityItemsDataViewAdapter_h
@import Foundation;

@class TFNItemsDataViewAdapter, TwitterCommunitiesUI.CommunitiesNavigation;

@interface TwitterCommunitiesUI.CommunityItemsDataViewAdapter : TFNItemsDataViewAdapter { // (Swift)
    /* instance variables */
    TwitterCommunitiesUI.CommunitiesNavigation navigation;
}

/* instance methods */
- (_Bool)dataViewController:(id)controller shouldSelectItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (void)dataViewController:(id)controller didSelectItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (double)dataViewController:(id)controller estimatedTableViewHeightForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (double)dataViewController:(id)controller tableViewHeightForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (id)dataViewController:(id)controller tableViewCellForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (struct CGSize { double x0; double x1; })dataViewController:(id)controller collectionViewSizeForItem:(id)item constrainedToSize:(struct CGSize { double x0; double x1; })size withOptions:(id)options atIndexPath:(id)path;
- (id)dataViewController:(id)controller collectionViewCellForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (id)init;

@end

#endif /* _TtC20TwitterCommunitiesUI29CommunityItemsDataViewAdapter_h */
