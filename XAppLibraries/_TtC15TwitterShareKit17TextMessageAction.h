//
#ifndef _TtC15TwitterShareKit17TextMessageAction_h
#define _TtC15TwitterShareKit17TextMessageAction_h
@import Foundation;

@class Swift.Bool, TwitterShareKit.ShareActionAvatarConfiguration, TwitterShareKit.ShareKit.TextComposeAssistant, TwitterShareKit.ShareType, _$sSS, _$sSSSg, _$sSo23TSCOffPlatformShareable_p, _TtCs12_SwiftObject;

@interface TwitterShareKit.TextMessageAction : Swift._SwiftObject { // (Swift)
    /* instance variables */
    __C.TSCOffPlatformShareable shareable;
    TwitterShareKit.ShareKit.TextComposeAssistant textComposeAssistant;
    Swift.String? activityTypeScribeIdentifier;
    TwitterShareKit.ShareActionAvatarConfiguration avatarConfiguration;
    Swift.Bool awaitsShareLink;
    Swift.String identifier;
    Swift.String successIdentifier;
    Swift.String? scribeAction;
    Swift.String title;
    TwitterShareKit.ShareType type;
}

@end

#endif /* _TtC15TwitterShareKit17TextMessageAction_h */
