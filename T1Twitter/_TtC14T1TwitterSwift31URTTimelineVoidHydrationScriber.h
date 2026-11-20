//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift31URTTimelineVoidHydrationScriber_h
#define _TtC14T1TwitterSwift31URTTimelineVoidHydrationScriber_h
@import Foundation;

#include "_TtP10TwitterURT39TFNTwitterTimelineItemsHydrationScriber_-Protocol.h"

@class _TtCs12_SwiftObject;

@interface T1TwitterSwift.URTTimelineVoidHydrationScriber : Swift._SwiftObject <TwitterURT.TFNTwitterTimelineItemsHydrationScriber> // (Swift)

/* instance methods */
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

#endif /* _TtC14T1TwitterSwift31URTTimelineVoidHydrationScriber_h */
