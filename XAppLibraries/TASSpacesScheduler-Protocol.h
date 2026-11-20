//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TASSpacesScheduler_Protocol_h
#define TASSpacesScheduler_Protocol_h
@import Foundation;

@protocol TASSpacesScheduler

@required

/* required instance methods */
- (void)scheduleSpaceWithScheduledStartTime:(id)time title:(id)title availableForReplay:(_Bool)replay availableForClipping:(_Bool)clipping topicIDs:(id)ids communityID:(id)id narrowCastType:(long long)type contentType:(long long)type noIncognito:(_Bool)incognito completion:(id /* block */)completion;
- (void)loadFirstScheduledSpaceWithCompletion:(id /* block */)completion;
- (void)cancelScheduledSpaceWithSpaceID:(id)id completion:(id /* block */)completion;
- (void)editScheduledSpaceWithSpaceID:(id)id title:(id)title scheduledStartTime:(id)time availableForReplay:(_Bool)replay availableForClipping:(_Bool)clipping topicIDs:(id)ids noIncognito:(_Bool)incognito contentType:(long long)type completion:(id /* block */)completion;
- (void)fetchUserScheduledSpacesDataWithCompletion:(id /* block */)completion;

@optional

@end

#endif /* TASSpacesScheduler_Protocol_h */
