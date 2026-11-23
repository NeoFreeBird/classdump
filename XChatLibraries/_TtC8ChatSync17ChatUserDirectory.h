//
#ifndef _TtC8ChatSync17ChatUserDirectory_h
#define _TtC8ChatSync17ChatUserDirectory_h
@import Foundation;

@class Builtin.DefaultActorStorage, ChatModelsCore.UserID, ChatSync.ChatProjection, ChatTransport.ChatGraphQLClient, _$sSD -> ChatModelsCore.UserID _$sScTyyt _$ss5NeverOMn, _$sSh -> ChatModelsCore.UserID, _$sSi, _TtCs12_SwiftObject;

@interface ChatSync.ChatUserDirectory : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Builtin.DefaultActorStorage $defaultActor;
    ChatTransport.ChatGraphQLClient graphQLClient;
    ChatModelsCore.UserID owner;
    ChatSync.ChatProjection projection;
    Swift.Int maximumUsersPerRequest;
    Swift.Set -> ChatModelsCore.UserID requestedUserIDs;
    Swift.Dictionary -> ChatModelsCore.UserID Swift.Task empty-list () nominal type descriptor for Swift.Never refreshes;
}

@end

#endif /* _TtC8ChatSync17ChatUserDirectory_h */
