//
#ifndef _TtC18TwitterAudiospaces28DefaultSpacesAudioAssetStore_h
#define _TtC18TwitterAudiospaces28DefaultSpacesAudioAssetStore_h
@import Foundation;

@class Swift.Bool, TwitterAudiospaces.SpacesAudioAssetConfig, TwitterAudiospaces.SpacesAudioDownloadCache, _$sSa -> TwitterAudiospaces.SpacesAudioAsset, _$sSh -> TwitterAudiospaces.SpacesAudioAsset, _$sSi, _$sSo14NSUserDefaultsC, _TtCs12_SwiftObject;

@interface TwitterAudiospaces.DefaultSpacesAudioAssetStore : Swift._SwiftObject { // (Swift)
    /* instance variables */
    TwitterAudiospaces.SpacesAudioDownloadCache cache;
    TwitterAudiospaces.SpacesAudioAssetConfig config;
    __C.NSUserDefaults defaults;
    Swift.Int activeWarmCount;
    Swift.Bool didInvalidateCache;
    Swift.Array -> TwitterAudiospaces.SpacesAudioAsset pendingWarmAssets;
    Swift.Set -> TwitterAudiospaces.SpacesAudioAsset warmingAssets;
}

@end

#endif /* _TtC18TwitterAudiospaces28DefaultSpacesAudioAssetStore_h */
