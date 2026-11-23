//
#ifndef _TtC10TFSAccount18RecentAccountStore_h
#define _TtC10TFSAccount18RecentAccountStore_h
@import Foundation;

@class NSObject, NSString, _$sSo11TFSKeychainC, _$sSo14NSUserDefaultsC;

@interface TFSAccount.RecentAccountStore : NSObject { // (Swift)
    /* instance variables */
    __C.NSUserDefaults userDefaults;
    __C.TFSKeychain keychain;
}

/* class methods */
+ (id)shared;

/* instance methods */
- (void)registerRecentUsedAccountWithHandle:(NSString *)handle userID:(NSString *)id fullName:(NSString *)name isBlueVerified:(_Bool)verified oAuthToken:(NSString *)token avatarURL:(NSString *)url affiliateBadgeURL:(NSString *)url completion:(id /* block */)completion;
- (void)removeAccountWithUserID:(long long)id completion:(id /* block */)completion;
- (id)init;

@end

#endif /* _TtC10TFSAccount18RecentAccountStore_h */
