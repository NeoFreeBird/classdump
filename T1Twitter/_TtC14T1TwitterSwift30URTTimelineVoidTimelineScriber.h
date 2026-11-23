//
#ifndef _TtC14T1TwitterSwift30URTTimelineVoidTimelineScriber_h
#define _TtC14T1TwitterSwift30URTTimelineVoidTimelineScriber_h
@import Foundation;

#include "_TtP10TwitterURT25TFNTwitterTimelineScriber_-Protocol.h"

@class _TtCs12_SwiftObject;

@interface T1TwitterSwift.URTTimelineVoidTimelineScriber : Swift._SwiftObject <TwitterURT.TFNTwitterTimelineScriber> // (Swift)

/* instance methods */
- (void)timelineDeserializationDidFail;
- (void)timelineRapidReloadDidOccur;
- (void)hydrationFailedForUserID:(id)id isPromoted:(_Bool)promoted;
- (void)hydrationFailedForStatusID:(id)id isPromoted:(_Bool)promoted;
- (void)hydrationFailedForCardIdentifier:(id)identifier isPromoted:(_Bool)promoted;
- (void)hydrationRetryEvent;
- (void)hydrationRetryFailure;
- (void)hydrationRetryRecapturedPartial;
- (void)hydrationRetrySuccess;
- (void)hydrationLegacyUserLookupCompletedWithStartTime:(double)time userCount:(long long)count missCount:(long long)count;
- (void)hydrationLegacyStatusLookupCompletedWithStartTime:(double)time statusCount:(long long)count missCount:(long long)count;
- (void)hydrationLegacyCompletedWithStartTime:(double)time retryCount:(long long)count;
- (void)hydrationViewModelBuildCompletedWithStartTime:(double)time entryCount:(long long)count;
- (void)hydrationPipelineCompletedWithStartTime:(double)time entryCount:(long long)count;
- (void)hydrationInitialModelFetchCompletedWithStartTime:(double)time;

@end

#endif /* _TtC14T1TwitterSwift30URTTimelineVoidTimelineScriber_h */
