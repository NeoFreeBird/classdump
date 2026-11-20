//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC8ChatSync23XChatSenderKeyRefresher_h
#define _TtC8ChatSync23XChatSenderKeyRefresher_h
@import Foundation;

@class Builtin.DefaultActorStorage, ChatKeys.XChatPublicKeyDirectory, _$sShySSG, _TtCs12_SwiftObject;

@interface ChatSync.XChatSenderKeyRefresher : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Builtin.DefaultActorStorage $defaultActor;
    ChatKeys.XChatPublicKeyDirectory publicKeyDirectory;
    Swift.Set<Swift.String> refreshedSenderIDs;
}

@end

#endif /* _TtC8ChatSync23XChatSenderKeyRefresher_h */
