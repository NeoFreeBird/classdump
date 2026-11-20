//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1NudgeResultsController_h
#define T1NudgeResultsController_h
@import Foundation;

@class NSObject;

@interface T1NudgeResultsController : NSObject

/* class methods */
+ (id)sharedNudgeResultsController;

/* instance methods */
- (void)main_recordAction:(unsigned long long)action forPage:(id)page forTweetType:(long long)type withNudgeID:(id)id withAccount:(id)account;
- (void)main_recordResult:(unsigned long long)result forPage:(id)page forTweetType:(long long)type withNudgeID:(id)id withAccount:(id)account;
- (void)_t1_internalRecordResult:(unsigned long long)result forPage:(id)page forTweetType:(long long)type withNudgeID:(id)id withAccount:(id)account createdTweetID:(id)id createdTweetIDNumber:(id)idnumber;
- (void)_t1_scribeNudgeAction:(unsigned long long)action page:(id)page tweetType:(long long)type nudgeID:(id)id account:(id)account;
- (void)_t1_scribeNudgeResult:(unsigned long long)result page:(id)page tweetType:(long long)type nudgeID:(id)id createdTweetID:(id)id account:(id)account;
- (void)main_recordNudgeImpressionForPage:(id)page forTweetType:(long long)type withNudgeID:(id)id withAccount:(id)account;
- (void)_t1_recordNudgeAction:(unsigned long long)action nudgeID:(id)id account:(id)account;
- (void)_t1_recordNudgeResult:(unsigned long long)result nudgeID:(id)id createdTweetID:(id)id account:(id)account;
- (_Bool)_t1_shouldSendActionToBackend:(unsigned long long)backend forPage:(id)page;
- (_Bool)_t1_shouldSendResultToBackend:(unsigned long long)backend forPage:(id)page;

@end

#endif /* T1NudgeResultsController_h */
