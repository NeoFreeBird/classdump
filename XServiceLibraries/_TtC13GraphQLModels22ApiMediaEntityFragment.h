//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC13GraphQLModels22ApiMediaEntityFragment_h
#define _TtC13GraphQLModels22ApiMediaEntityFragment_h
@import Foundation;

@class GraphQLModels.ApiMediaEntityColorPaletteFragment ?, GraphQLModels.ApiMediaEntityFeaturesFragment ?, GraphQLModels.ApiMediaEntityFragment.AdditionalMediaInfo ?, GraphQLModels.ApiMediaEntityFragment.AllowDownloadStatus ?, GraphQLModels.ApiMediaEntityFragment.ExtMediaAvailability ?, GraphQLModels.ApiMediaEntityFragment.ExtMediaRestrictions ?, GraphQLModels.ApiMediaEntityFragment.ExtMediaStats ?, GraphQLModels.ApiMediaEntityFragment.ExtStickerInfo ?, GraphQLModels.ApiMediaEntityFragment.MediaResults ?, GraphQLModels.ApiMediaEntityFragment.NativeEditorInfo ?, GraphQLModels.ApiMediaEntityFragment.OriginalInfo ?, GraphQLModels.ApiMediaEntitySizesFragment ?, GraphQLModels.ApiMediaEntityVideoInfoFragment ?, GraphQLModels.SensitiveMediaWarningFragment ?, GraphQLModels.UserResultsFragment ?, _$sSSSg, _$sSa -> GraphQLModels.ApiMediaPlaylistEntryFragment ?, _$sSa -> _$ss5Int64VMn ?, _TtCs12_SwiftObject;

@interface GraphQLModels.ApiMediaEntityFragment : Swift._SwiftObject { // (Swift)
    /* instance variables */
    GraphQLModels.ApiMediaEntityFragment.AdditionalMediaInfo ? additionalMediaInfo;
    GraphQLModels.ApiMediaEntityFragment.AllowDownloadStatus ? allowDownloadStatus;
    Swift.String? displayUrl;
    Swift.String? expandedUrl;
    Swift.String? extAltText;
    Swift.Array -> GraphQLModels.ApiMediaPlaylistEntryFragment ? extMasterPlaylistOnly;
    GraphQLModels.ApiMediaEntityFragment.ExtMediaAvailability ? extMediaAvailability;
    GraphQLModels.ApiMediaEntityColorPaletteFragment ? extMediaColor;
    GraphQLModels.ApiMediaEntityFragment.ExtMediaRestrictions ? extMediaRestrictions;
    GraphQLModels.ApiMediaEntityFragment.ExtMediaStats ? extMediaStats;
    Swift.Array -> GraphQLModels.ApiMediaPlaylistEntryFragment ? extPlaylists;
    GraphQLModels.ApiMediaEntityFragment.ExtStickerInfo ? extStickerInfo;
    GraphQLModels.ApiMediaEntityFeaturesFragment ? features;
    Swift.String? grokPostId;
    Swift.String? idStr;
    Swift.Array -> nominal type descriptor for Swift.Int64 ? indices;
    Swift.String? mediaKey;
    GraphQLModels.ApiMediaEntityFragment.MediaResults ? mediaResults;
    Swift.String? mediaUrlHttps;
    GraphQLModels.ApiMediaEntityFragment.NativeEditorInfo ? nativeEditorInfo;
    GraphQLModels.ApiMediaEntityFragment.OriginalInfo ? originalInfo;
    GraphQLModels.SensitiveMediaWarningFragment ? sensitiveMediaWarning;
    GraphQLModels.ApiMediaEntitySizesFragment ? sizes;
    Swift.String? sourceStatusIdStr;
    Swift.String? sourceUserIdStr;
    GraphQLModels.UserResultsFragment ? sourceUserResults;
    Swift.String? type;
    Swift.String? url;
    GraphQLModels.ApiMediaEntityVideoInfoFragment ? videoInfo;
}

@end

#endif /* _TtC13GraphQLModels22ApiMediaEntityFragment_h */
