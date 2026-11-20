//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNTwitterHomeMutingSet_h
#define TFNTwitterHomeMutingSet_h
@import Foundation;

#include "TFNTwitterAccount.h"

@class NSMutableSet, NSObject;

@interface TFNTwitterHomeMutingSet : NSObject

@property (retain, nonatomic) NSMutableSet *mutingSet;
@property (retain, nonatomic) NSMutableSet *updateMutingSet;
@property (nonatomic) _Bool processingMutingIDs;
@property (readonly, weak, nonatomic) TFNTwitterAccount *account;
@property (readonly, nonatomic) unsigned long long mutedUsersCount;

/* instance methods */
- (id)initWithAccount:(id)account;
- (_Bool)isMutingUser:(id)user;
- (void)addUserID:(long long)id;
- (void)removeUserID:(long long)id;
- (void)updatePolling:(_Bool)polling;
- (void)_refreshMutingWithCursor:(id)cursor polling:(_Bool)polling;
- (void)_processMutingIDsResponse:(id)response polling:(_Bool)polling;
- (void)_updateMutingForUserIDs:(id)ids;

@end

#endif /* TFNTwitterHomeMutingSet_h */
