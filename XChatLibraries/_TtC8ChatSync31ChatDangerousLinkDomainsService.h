//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC8ChatSync31ChatDangerousLinkDomainsService_h
#define _TtC8ChatSync31ChatDangerousLinkDomainsService_h
@import Foundation;

@class Builtin.DefaultActorStorage, ChatTransport.XChatGraphQLClient, _$sSS, _$sSo14NSUserDefaultsC, _TtCs12_SwiftObject;

@interface ChatSync.ChatDangerousLinkDomainsService : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Builtin.DefaultActorStorage $defaultActor;
    ChatTransport.XChatGraphQLClient graphQLClient;
    Swift.String storageKey;
    __C.NSUserDefaults userDefaults;
}

@end

#endif /* _TtC8ChatSync31ChatDangerousLinkDomainsService_h */
