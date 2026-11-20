//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1StandardSpacesScheduler_h
#define T1StandardSpacesScheduler_h
@import Foundation;

#include "TASSpacesContext-Protocol.h"
#include "TASSpacesScheduler-Protocol.h"

@class NSObject;

@interface T1StandardSpacesScheduler : NSObject <TASSpacesScheduler>

@property (weak, nonatomic) id <TASSpacesContext> context;

/* class methods */
+ (long long)_t1_broadcastNarrowCastTypeWithContentType:(long long)type;
+ (long long)_t1_broadcastContentTypeWithContentType:(long long)type;

/* instance methods */
- (id)initWithContext:(id)context;
- (void)scheduleSpaceWithScheduledStartTime:(id)time title:(id)title availableForReplay:(_Bool)replay availableForClipping:(_Bool)clipping topicIDs:(id)ids communityID:(id)id narrowCastType:(long long)type contentType:(long long)type noIncognito:(_Bool)incognito completion:(id /* block */)completion;
- (void)fetchUserScheduledSpacesDataWithCompletion:(id /* block */)completion;
- (void)loadFirstScheduledSpaceWithCompletion:(id /* block */)completion;
- (void)cancelScheduledSpaceWithSpaceID:(id)id completion:(id /* block */)completion;
- (void)editScheduledSpaceWithSpaceID:(id)id title:(id)title scheduledStartTime:(id)time availableForReplay:(_Bool)replay availableForClipping:(_Bool)clipping topicIDs:(id)ids noIncognito:(_Bool)incognito contentType:(long long)type completion:(id /* block */)completion;
- (void)_t1_authenticatePeriscopeWithDirect:(_Bool)direct completion:(id /* block */)completion;
- (id)_t1_preferredLanguages;

@end

#endif /* T1StandardSpacesScheduler_h */
