//
#ifndef _TtC20TwitterCommunitiesUI34CommunityImageMetadataSettingsItem_h
#define _TtC20TwitterCommunitiesUI34CommunityImageMetadataSettingsItem_h
@import Foundation;

@class NSObject, Swift.Bool, _$s14TFSTwitterCore27TwitterCommunityBannerMediaCMn ?, _$sSSSg, _$syyc;

@interface TwitterCommunitiesUI.CommunityImageMetadataSettingsItem : NSObject { // (Swift)
    /* instance variables */
    nominal type descriptor for TFSTwitterCore.TwitterCommunityBannerMedia ? bannerMedia;
    Swift.String? accountId;
    Swift.Bool enabled;
    Swift.Bool customBannerConfigured;
    TwitterCommunitiesUI.BannerPickerSource function type (escaping) bannerImageSelectionHandler;
    () -> () removeBannerImageHandler;
}

/* instance methods */
- (id)init;

@end

#endif /* _TtC20TwitterCommunitiesUI34CommunityImageMetadataSettingsItem_h */
