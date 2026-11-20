//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC20TwitterCommunitiesUI30CommunityJoinRequestRowAdapter_h
#define _TtC20TwitterCommunitiesUI30CommunityJoinRequestRowAdapter_h
@import Foundation;

@class Swift.Bool, TFNItemsDataViewAdapter, TwitterCommunitiesUI.CommunityJoinRequestRowAdapterDelegate ?, TwitterUISwift.UserBadger, _$sSo16TIPImagePipelineCSg;

@interface TwitterCommunitiesUI.CommunityJoinRequestRowAdapter : TFNItemsDataViewAdapter { // (Swift)
    /* instance variables */
    __C.TIPImagePipeline? imagePipeline;
    TwitterUISwift.UserBadger userBadger;
    Swift.Bool canReadUserAnswer;
    TwitterCommunitiesUI.CommunityJoinRequestRowAdapterDelegate ? delegate;
}

/* instance methods */
- (id)dataViewController:(id)controller tableViewCellForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (double)dataViewController:(id)controller tableViewHeightForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (double)dataViewController:(id)controller estimatedTableViewHeightForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (id)init;

@end

#endif /* _TtC20TwitterCommunitiesUI30CommunityJoinRequestRowAdapter_h */
