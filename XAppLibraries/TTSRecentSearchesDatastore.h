//
#ifndef TTSRecentSearchesDatastore_h
#define TTSRecentSearchesDatastore_h
@import Foundation;

@class NSArray, NSObject, TFSTuple;
@protocol OS_dispatch_queue;

@interface TTSRecentSearchesDatastore : NSObject {
    /* instance variables */
    NSObject<OS_dispatch_queue> *_dataAccessQueue;
}

@property (readonly, copy, nonatomic) NSArray *recentSearches;
@property (readonly, nonatomic) TFSTuple *recentQueriesAndUserIDs;

/* instance methods */
- (id)init;
- (id)initWithRecentSeaches:(id)seaches;
- (void)_tse_setRecentSearch:(id)search;
- (void)storeRecentSearchQuery:(id)query;
- (void)storeRecentSearchUserID:(long long)id;
- (void)removeRecentSearch:(id)search;
- (void)clearRecentSearches;

@end

#endif /* TTSRecentSearchesDatastore_h */
