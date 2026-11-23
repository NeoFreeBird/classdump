//
#ifndef _TtC13ChatTransport21ChatAuthTokenProvider_h
#define _TtC13ChatTransport21ChatAuthTokenProvider_h
@import Foundation;

@class Builtin.DefaultActorStorage, ChatDatabase.ChatAuthTokenStore, ChatTransport.ChatAuthTokenProvider.CachedToken ?, ChatTransport.ChatGraphQLClient, _$sScTySS _$ss5ErrorMp ?, _TtCs12_SwiftObject;

@interface ChatTransport.ChatAuthTokenProvider : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Builtin.DefaultActorStorage $defaultActor;
    ChatTransport.ChatGraphQLClient graphQLClient;
    ChatDatabase.ChatAuthTokenStore tokenStore;
    ChatTransport.ChatAuthTokenProvider.CachedToken ? cachedToken;
    Swift.Task empty-list Swift.String protocol descriptor for Swift.Error ? mintTask;
}

@end

#endif /* _TtC13ChatTransport21ChatAuthTokenProvider_h */
