//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC15TwitterShareKit21PasteboardShareAction_h
#define _TtC15TwitterShareKit21PasteboardShareAction_h
@import Foundation;

@class Swift.Bool, TwitterShareKit.OrphanedViewSnapshotAssistant, TwitterShareKit.PasteboardShareAction.Configuration, TwitterShareKit.ShareActionAvatarConfiguration, TwitterShareKit.ShareApplicationContext, TwitterShareKit.ShareType, TwitterShareKit.VideoCompositeStatusCardOverlayProvider ?, TwitterShareKit.VideoCompositeWatermarkProvider ?, _$sSS, _$sSSSg, _$sSa -> TwitterShareKit.VideoShareProcessor.Operation, _$sSo20TSCSnapshotShareable_So014TSCOffPlatformB0p, _$sSo7UIImageCSg, _TtCs12_SwiftObject;

@interface TwitterShareKit.PasteboardShareAction : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.String? activityTypeScribeIdentifier;
    TwitterShareKit.ShareApplicationContext applicationContext;
    TwitterShareKit.ShareActionAvatarConfiguration avatarConfiguration;
    Swift.Bool awaitsShareLink;
    Swift.String identifier;
    Swift.String? scribeAction;
    __C.TSCSnapshotShareable & __C.TSCOffPlatformShareable shareable;
    Swift.String title;
    TwitterShareKit.ShareType type;
    TwitterShareKit.OrphanedViewSnapshotAssistant snapshotAssistant;
    __C.UIImage? conversationSnapshot;
    TwitterShareKit.VideoCompositeStatusCardOverlayProvider ? videoCompositeStatusCardOverlayProvider;
    TwitterShareKit.VideoCompositeWatermarkProvider ? videoCompositeWatermarkProvider;
    Swift.Array -> TwitterShareKit.VideoShareProcessor.Operation videoOperations;
    TwitterShareKit.PasteboardShareAction.Configuration configuration;
}

@end

#endif /* _TtC15TwitterShareKit21PasteboardShareAction_h */
