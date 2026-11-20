//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNTwitterAccountModel_h
#define TFNTwitterAccountModel_h
@import Foundation;

#include "TFNTwitterAccount.h"

@class NSMapTable, NSObject, TFSLegacyModelSupport, TFSModelContext;

@interface TFNTwitterAccountModel : NSObject {
    /* instance variables */
    NSMapTable *_usersByID;
    NSMapTable *_usersByUsername;
    NSMapTable *_canonicalUsersByID;
    NSMapTable *_canonicalUsersByUsername;
    NSMapTable *_canonicalStatusesByID;
    NSMapTable *_imageInterstitialsByStatusID;
    TFSLegacyModelSupport *_legacyModelSupport;
}

@property (weak, nonatomic) TFNTwitterAccount *account;
@property (readonly, nonatomic) TFSModelContext *modelContext;

/* class methods */
+ (id)databaseFullVersion;
+ (id)_sharedBackgroundQueue;

/* instance methods */
- (void)userForUser:(id)user completion:(id /* block */)completion;
- (void)statusForStatus:(id)status authenticatedAccountUserID:(long long)id completion:(id /* block */)completion;
- (id)initWithAccount:(id)account modelContext:(id)context;
- (id)deprecatedCachedStatusForID:(long long)id;
- (id)_statusForCachedCanonicalStatus:(id)status;
- (id)_cachedUserForID:(long long)id;
- (id)_cachedUserForUsername:(id)username;
- (id)_cachedCanonicalUserForID:(long long)id;
- (id)_cachedCanonicalUserForUsername:(id)username;
- (id)_cachedUserWithCanonicalUser:(id)user;
- (_Bool)conversationHasNonAuthorReplyForConversationID:(long long)id authorUserID:(long long)id;
- (id)statusIDsOfCachedCanonicalStatusesFromUserID:(long long)id;
- (id)replyStatusIDsOfCachedCanonicalStatusesWithConversationID:(long long)id;
- (id)cachedCanonicalStatusesInReplyToStatusID:(long long)id;
- (id)definitiveUser:(id)user;
- (id)_definitiveUser:(id)user forceAssimilation:(_Bool)assimilation;
- (id)_definitiveUser:(id)user cs2Transaction:(id)transaction;
- (id)_definitiveUser:(id)user cs2Transaction:(id)transaction forceAssimilation:(_Bool)assimilation;
- (void)_updateUserCacheIndicesWithUser:(id)user cs2Transaction:(id)transaction;
- (void)_updateUserCacheIndicesWithUser:(id)user cs2Transaction:(id)transaction forceAssimilation:(_Bool)assimilation;
- (id)definitiveStatus:(id)status;
- (id)_definitiveStatus:(id)status cs2Transaction:(id)transaction;
- (id)_definitiveStatus:(id)status inTopLevel:(_Bool)level cs2Transaction:(id)transaction;
- (id)definitiveUsers:(id)users;
- (id)_definitiveUsers:(id)users cs2Transaction:(id)transaction;
- (id)definitiveStatuses:(id)statuses;
- (id)_definitiveStatuses:(id)statuses cs2Transaction:(id)transaction;
- (id)_definitiveStatuses:(id)statuses inTopLevel:(_Bool)level cs2Transaction:(id)transaction;
- (void)removeStatusFromCacheWithStatusID:(long long)id;
- (void)removeUserFromCache:(id)cache;
- (void)bulkInsertStatus:(id)status completion:(id /* block */)completion;
- (void)bulkInsertStatuses:(id)statuses completion:(id /* block */)completion;
- (void)bulkInsertStatuses:(id)statuses users:(id)users dictionariesCompletion:(id /* block */)completion;
- (void)bulkInsertUser:(id)user completion:(id /* block */)completion;
- (void)bulkInsertUsers:(id)users completion:(id /* block */)completion;
- (id)private_usersReferencedByStatuses:(id)statuses;
- (void)_bulkInsert:(id)insert type:(int)type completion:(id /* block */)completion;
- (void)_assimilateStatus:(id)status transaction:(id)transaction;
- (void)lookUpStatusForID:(long long)id completionBlock:(id /* block */)block;
- (void)lookUpStatusesForIDs:(id)ids enforceQoS:(_Bool)s completionBlock:(id /* block */)block;
- (void)_hydrateAllStatuses:(id)statuses enforceQoS:(_Bool)s completion:(id /* block */)completion;
- (void)_hydrateAdditionalTweetReferences:(id)references enforceQoS:(_Bool)s completion:(id /* block */)completion;
- (void)_lookupLegacyStatusesForIDs:(id)ids enforceQoS:(_Bool)s completion:(id /* block */)completion;
- (id)_statusForID:(id)id fromResults:(id)results canonicalStatuses:(id)statuses canonicalUsers:(id)users quoteLevel:(unsigned long long)level isRetweeted:(_Bool)retweeted;
- (id)_canonicalStatusForID:(id)id fromResults:(id)results canonicalUsers:(id)users;
- (id)_cardDataForURLString:(id)urlstring fromResults:(id)results canonicalUsers:(id)users;
- (id)_communityMembershipForCommunityID:(id)id fromResults:(id)results;
- (id)_unifiedCardForUnifiedCardID:(id)id fromResults:(id)results;
- (id)_userForUserID:(id)id fromResults:(id)results canonicalUsers:(id)users;
- (void)lookUpUserForID:(long long)id completionBlock:(id /* block */)block;
- (void)lookUpUserForUsername:(id)username completionBlock:(id /* block */)block;
- (void)lookUpUsersForIDs:(id)ids enforceQoS:(_Bool)s completionBlock:(id /* block */)block;
- (id)_conversationDetailsFromCS2ConversationContext:(id)context fromResults:(id)results canonicalUsers:(id)users;
- (id)_cachedConversationDetailsFromCS2ConversationContext:(id)context;
- (void)_prepareStatuses:(id)statuses;

@end

#endif /* TFNTwitterAccountModel_h */
