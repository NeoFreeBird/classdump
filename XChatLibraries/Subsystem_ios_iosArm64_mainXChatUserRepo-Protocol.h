//
#ifndef Subsystem_ios_iosArm64_mainXChatUserRepo_Protocol_h
#define Subsystem_ios_iosArm64_mainXChatUserRepo_Protocol_h
@import Foundation;

#include "Subsystem_ios_iosArm64_mainUserRefresher-Protocol.h"

@protocol Subsystem_ios_iosArm64_mainXChatUserRepo <Subsystem_ios_iosArm64_mainUserRefresher>

@required

/* required instance methods */
- (void)deleteAllWithCompletionHandler:(id /* block */)handler;
- (void)deleteAllWithCompletionHandler:(id /* block */)handler;
- (void)getCachedUserId:(id)id completionHandler:(id /* block */)handler;
- (void)getCachedUserId:(id)id completionHandler:(id /* block */)handler;
- (void)insertUser:(id)user completionHandler:(id /* block */)handler;
- (void)insertUser:(id)user completionHandler:(id /* block */)handler;
- (void)insertUsers:(id)users completionHandler:(id /* block */)handler;
- (void)insertUsers:(id)users completionHandler:(id /* block */)handler;
- (id)observeAllNicknamedUsersAndRefetchStaleStalenessThreshold:(id)threshold;
- (id)observeAllNicknamedUsersAndRefetchStaleStalenessThreshold:(id)threshold;
- (id)observeCachedUserStatesAndFetchMissingOrStaleUserIds:(id)ids why:(id)why stalenessThreshold:(id)threshold requireSocialProof:(_Bool)proof;
- (id)observeCachedUserStatesAndFetchMissingOrStaleUserIds:(id)ids why:(id)why stalenessThreshold:(id)threshold requireSocialProof:(_Bool)proof;
- (id)observeCachedUsersByIdsAndFetchMissingOrStaleUserIds:(id)ids partialResultsOk:(_Bool)ok stalenessThreshold:(id)threshold;
- (id)observeCachedUsersByIdsAndFetchMissingOrStaleUserIds:(id)ids partialResultsOk:(_Bool)ok stalenessThreshold:(id)threshold;
- (id)observeCachedUsersByScreenNamesAndFetchMissingOrStaleScreenNames:(id)names partialResultsOk:(_Bool)ok stalenessThreshold:(id)threshold;
- (id)observeCachedUsersByScreenNamesAndFetchMissingOrStaleScreenNames:(id)names partialResultsOk:(_Bool)ok stalenessThreshold:(id)threshold;
- (void)updateId:(id)id modification:(id /* block */)modification completionHandler:(id /* block */)handler;
- (void)updateId:(id)id modification:(id /* block */)modification completionHandler:(id /* block */)handler;

@optional

@end

#endif /* Subsystem_ios_iosArm64_mainXChatUserRepo_Protocol_h */
