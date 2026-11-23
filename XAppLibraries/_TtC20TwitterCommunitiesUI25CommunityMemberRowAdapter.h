//
#ifndef _TtC20TwitterCommunitiesUI25CommunityMemberRowAdapter_h
#define _TtC20TwitterCommunitiesUI25CommunityMemberRowAdapter_h
@import Foundation;

@class TFNItemsDataViewAdapter, TwitterCommunitiesUI.CommunityMemberRowAdapterDelegate ?, TwitterUISwift.UserBadger, _$sSo16TIPImagePipelineCSg, _$sSo16UIViewControllerCSgXw;

@interface TwitterCommunitiesUI.CommunityMemberRowAdapter : TFNItemsDataViewAdapter { // (Swift)
    /* instance variables */
    weak __C.UIViewController? hostViewController;
    __C.TIPImagePipeline? imagePipeline;
    TwitterUISwift.UserBadger userBadger;
    TwitterCommunitiesUI.CommunityMemberRowAdapterDelegate ? delegate;
}

/* instance methods */
- (id)dataViewController:(id)controller tableViewCellForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (double)dataViewController:(id)controller tableViewHeightForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (double)dataViewController:(id)controller estimatedTableViewHeightForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (void)dataViewController:(id)controller didSelectItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (id)init;

@end

#endif /* _TtC20TwitterCommunitiesUI25CommunityMemberRowAdapter_h */
