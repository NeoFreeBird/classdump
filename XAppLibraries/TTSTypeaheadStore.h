//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TTSTypeaheadStore_h
#define TTSTypeaheadStore_h
@import Foundation;

#include "NSCoding-Protocol.h"
#include "TFSTwitterAPICommandContext-Protocol.h"
#include "TFSTwitterAPICommandLoader-Protocol.h"
#include "TTSRecentSearchesDatastore.h"
#include "TTSTypeaheadNotificationsConfiguration.h"
#include "TTSTypeaheadStoreDataModel.h"

@class NSObject, TASActionService, TFSModelContext, TFSTwitterTypeaheadService;
@protocol OS_dispatch_queue, TTSAccount;

@interface TTSTypeaheadStore : NSObject <NSCoding> {
    /* instance variables */
    NSObject<OS_dispatch_queue> *_dataModelQueue;
}

@property (weak, nonatomic) id <TTSAccount> account;
@property (nonatomic) long long refreshTTL;
@property (retain, nonatomic) TFSTwitterTypeaheadService *cs2Service;
@property (nonatomic) double cs2LastUserPrefetchSuccessTime;
@property (nonatomic) double cs2userPrefetchBackoffTime;
@property (retain, nonatomic) id <TFSTwitterAPICommandLoader> commandLoader;
@property (retain, nonatomic) id <TFSTwitterAPICommandContext> commandContext;
@property (retain, nonatomic) TASActionService *actionService;
@property (retain, nonatomic) TFSModelContext *modelContext;
@property (retain, nonatomic) TTSTypeaheadNotificationsConfiguration *notificationsConfiguration;
@property (readonly, copy) TTSTypeaheadStoreDataModel *dataModel;
@property (readonly, nonatomic) TTSRecentSearchesDatastore *recentSearchesDataStore;

/* class methods */
+ (id)mergedUsersFromPrefetch:(id)prefetch remote:(id)remote;
+ (id)sharedQueue;
+ (id)_tse_internalQueue;
+ (_Bool)_searchString:(id)string matches:(id)matches;

/* instance methods */
- (id)init;
- (id)initWithDataModel:(id)model account:(id)account refreshTTL:(long long)ttl commandLoader:(id)loader commandContext:(id)context modelContext:(id)context actionService:(id)service notificationsConfiguration:(id)configuration;
- (id)initWithAccount:(id)account refreshTTL:(long long)ttl commandLoader:(id)loader commandContext:(id)context modelContext:(id)context actionService:(id)service notificationsConfiguration:(id)configuration;
- (id)initWithCoder:(id)coder;
- (void)dealloc;
- (void)setup;
- (void)encodeWithCoder:(id)coder;
- (void)refreshUserCacheIfNecessaryWithForce:(_Bool)force completion:(id /* block */)completion;
- (id)_typeaheadTopicCacheFileForNewFormat:(_Bool)format;
- (id)_typeaheadUserCacheFilePath;
- (id)_typeaheadUserCacheFileForVersion:(id)version;
- (void)notifySelectedTypeaheadUser:(id)user;
- (id)typeaheadLocalLookupWithQuery:(id)query resultType:(long long)type resultsBlock:(id /* block */)block;
- (void)cancelTypeaheadLocalLookupWithIdentifier:(id)identifier;
- (void)prepareTypeaheadLocalUserLookup;
- (id)typeaheadResultsForUsersWithResultsBlock:(id /* block */)block;
- (void)typeaheadRemoteLookupWithQuery:(id)query resultType:(long long)type source:(unsigned long long)source geoRequestFilter:(_Bool)filter contextText:(id)text topicType:(unsigned long long)type resultsBlock:(id /* block */)block;
- (void)typeaheadRemoteLookupWithQuery:(id)query resultType:(long long)type source:(unsigned long long)source geoRequestFilter:(_Bool)filter contextText:(id)text topicType:(unsigned long long)type communityId:(id)id resultsBlock:(id /* block */)block;
- (void)_updateDataModelWithRecentSearches:(id)searches;
- (void)_updateDataModelWithLastPrefetchSuccessTime:(double)time userPrefetchBackoffTime:(double)time;
- (void)addRecentHashtags:(id)hashtags;
- (void)recentHashtagsWithResultsBlock:(id /* block */)block;
- (id)_deprecatedUserCachePaths;
- (void)private_didFollowUser:(id)user;
- (void)private_didUnfollowUser:(id)user;

@end

#endif /* TTSTypeaheadStore_h */
