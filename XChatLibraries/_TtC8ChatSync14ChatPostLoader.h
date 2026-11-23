//
#ifndef _TtC8ChatSync14ChatPostLoader_h
#define _TtC8ChatSync14ChatPostLoader_h
@import Foundation;

@class Builtin.DefaultActorStorage, ChatSync.ChatFetchedPostsStream, ChatSync.ChatPostStream, ChatSync.ChatSQLitePostCache, ChatTransport.ChatGraphQLClient, _$sSDySSScTyyt _$ss5NeverOMn, _TtCs12_SwiftObject;

@interface ChatSync.ChatPostLoader : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Builtin.DefaultActorStorage $defaultActor;
    ChatSync.ChatFetchedPostsStream fetchedPostsStream;
    ChatTransport.ChatGraphQLClient graphQLClient;
    ChatSync.ChatSQLitePostCache postCache;
    ChatSync.ChatPostStream postStream;
    Swift.Dictionary empty-list Swift.StringSwift.Task empty-list () nominal type descriptor for Swift.Never loads;
}

@end

#endif /* _TtC8ChatSync14ChatPostLoader_h */
