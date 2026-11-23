//
#ifndef _TtC4Grok22GrokAccountSyncManager_h
#define _TtC4Grok22GrokAccountSyncManager_h
@import Foundation;

@class Grok.GrokAccountSyncDataSource ?, Grok.GrokAppSharedStoring, NSObject, _$sSS4Grok0A13Authenticable_pYaYbKc, _$sScTyyt _$ss5NeverOMn ?;

@interface Grok.GrokAccountSyncManager : NSObject { // (Swift)
    /* instance variables */
    Grok.GrokAppSharedStoring store;
    @Sendable (Grok.GrokAuthenticable) async throws -> Swift.String tokenFetcher;
    Grok.GrokAccountSyncDataSource ? dataSource;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? syncTask;
}

/* class methods */
+ (id)oauthHandoffScheme;
+ (id)oauthHandoffDogfoodScheme;
+ (id)shared;

/* instance methods */
- (void)removeAccountDataForUserID:(long long)id;
- (void)debugFetchSharedAuthTokenForUserID:(long long)id completionHandler:(id /* block */)handler;
- (void)debugFetchSharedAuthInfoWithCompletionHandler:(id /* block */)handler;
- (id)init;

@end

#endif /* _TtC4Grok22GrokAccountSyncManager_h */
