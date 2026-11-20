//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC20TwitterCommunitiesUI36CommunityTextMetadataSettingsAdapter_h
#define _TtC20TwitterCommunitiesUI36CommunityTextMetadataSettingsAdapter_h
@import Foundation;

@class TFNItemsDataViewAdapter, _$s12CoreGraphics7CGFloatVMn;

@interface TwitterCommunitiesUI.CommunityTextMetadataSettingsAdapter : TFNItemsDataViewAdapter { // (Swift)
    /* instance variables */
    nominal type descriptor for CoreGraphics.CGFloat detailTextPadding;
}

/* instance methods */
- (void)dataViewController:(id)controller didSelectItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (double)dataViewController:(id)controller tableViewHeightForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (id)dataViewController:(id)controller tableViewCellForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (id)init;

@end

#endif /* _TtC20TwitterCommunitiesUI36CommunityTextMetadataSettingsAdapter_h */
