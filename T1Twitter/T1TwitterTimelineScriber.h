//
#ifndef T1TwitterTimelineScriber_h
#define T1TwitterTimelineScriber_h
@import Foundation;

#include "TFSTwitterLegacyScribeLogMethods-Protocol.h"
#include "_TtP10TwitterURT25TFNTwitterTimelineScriber_-Protocol.h"

@class NSObject, NSString;

@interface T1TwitterTimelineScriber : NSObject <TwitterURT.TFNTwitterTimelineScriber>

@property (retain, nonatomic) id <TFSTwitterLegacyScribeLogMethods> scribe;
@property (retain, nonatomic) NSString *scribePage;
@property (retain, nonatomic) NSString *scribeSection;
@property (nonatomic) _Bool scribeHydrationErrors;
@property (nonatomic) long long slowHydrationScribeThreshold;

/* instance methods */
- (id)initWithScribe:(id)scribe scribePage:(id)page scribeSection:(id)section scribeHydrationErrors:(_Bool)errors slowHydrationScribeThreshold:(long long)threshold;
- (void)timelineDeserializationDidFail;
- (void)hydrationFailedForStatusID:(id)id isPromoted:(_Bool)promoted;
- (void)hydrationFailedForUserID:(id)id isPromoted:(_Bool)promoted;
- (void)hydrationFailedForCardIdentifier:(id)identifier isPromoted:(_Bool)promoted;
- (void)hydrationRetryEvent;
- (void)hydrationRetryFailure;
- (void)hydrationRetryRecapturedPartial;
- (void)hydrationRetrySuccess;
- (void)timelineRapidReloadDidOccur;
- (void)_t1_logHydrationAction:(id)action;
- (void)_t1_logHydrationAction:(id)action parameters:(id)parameters;
- (id)serializeDictionary:(id)dictionary;
- (_Bool)shouldScribeSlowHydration;
- (void)hydrationLegacyUserLookupCompletedWithStartTime:(double)time userCount:(long long)count missCount:(long long)count;
- (void)hydrationLegacyStatusLookupCompletedWithStartTime:(double)time statusCount:(long long)count missCount:(long long)count;
- (void)hydrationLegacyCompletedWithStartTime:(double)time retryCount:(long long)count;
- (void)hydrationViewModelBuildCompletedWithStartTime:(double)time entryCount:(long long)count;
- (void)hydrationPipelineCompletedWithStartTime:(double)time entryCount:(long long)count;
- (void)hydrationInitialModelFetchCompletedWithStartTime:(double)time;

@end

#endif /* T1TwitterTimelineScriber_h */
