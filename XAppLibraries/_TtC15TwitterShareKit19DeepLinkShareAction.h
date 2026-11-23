//
#ifndef _TtC15TwitterShareKit19DeepLinkShareAction_h
#define _TtC15TwitterShareKit19DeepLinkShareAction_h
@import Foundation;

@class Swift.Bool, TwitterShareKit.ShareActionAvatarConfiguration, TwitterShareKit.ShareApplicationContext, TwitterShareKit.ShareType, TwitterShareKitProtocols.OffPlatformAppType, _$s10Foundation3URLVMn, _$s10Foundation3URLVMn _$sSgSSc, _$sSS, _$sSSSg, _$sSo23TSCOffPlatformShareable_p, _TtCs12_SwiftObject;

@interface TwitterShareKit.DeepLinkShareAction : Swift._SwiftObject { // (Swift)
    /* instance variables */
    __C.TSCOffPlatformShareable shareable;
    TwitterShareKitProtocols.OffPlatformAppType appType;
    nominal type descriptor for Foundation.URL _$sSgSSc makeDeepLinkURL;
    Swift.String? activityTypeScribeIdentifier;
    TwitterShareKit.ShareApplicationContext applicationContext;
    TwitterShareKit.ShareActionAvatarConfiguration avatarConfiguration;
    Swift.Bool awaitsShareLink;
    Swift.String identifier;
    nominal type descriptor for Foundation.URL installationCheckURL;
    Swift.String? scribeAction;
    Swift.String title;
    TwitterShareKit.ShareType type;
}

@end

#endif /* _TtC15TwitterShareKit19DeepLinkShareAction_h */
