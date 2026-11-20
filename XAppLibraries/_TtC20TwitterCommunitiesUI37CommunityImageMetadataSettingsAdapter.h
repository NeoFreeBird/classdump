//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC20TwitterCommunitiesUI37CommunityImageMetadataSettingsAdapter_h
#define _TtC20TwitterCommunitiesUI37CommunityImageMetadataSettingsAdapter_h
@import Foundation;

@class TFNItemsDataViewAdapter;

@interface TwitterCommunitiesUI.CommunityImageMetadataSettingsAdapter : TFNItemsDataViewAdapter // (Swift)

/* instance methods */
- (double)dataViewController:(id)controller tableViewHeightForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (id)dataViewController:(id)controller tableViewCellForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (id)init;

@end

#endif /* _TtC20TwitterCommunitiesUI37CommunityImageMetadataSettingsAdapter_h */
