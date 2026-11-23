//
#ifndef TAFSKAdImpressionSessionManager_h
#define TAFSKAdImpressionSessionManager_h
@import Foundation;

#include "TFSTwitterLegacyScribeLogMethods-Protocol.h"

@class NSDate, NSObject, SKAdImpression, _TtC14TFSTwitterCore25TFSTwitterPromotedContent;

@interface TAFSKAdImpressionSessionManager : NSObject

@property (retain, nonatomic) id <TFSTwitterLegacyScribeLogMethods> scribe;
@property (nonatomic) double minimumImpressionDuration;
@property (nonatomic) unsigned long long endImpressionTimingExperimentBucket;
@property (nonatomic) unsigned long long vtaRefactoringExperimentBucket;
@property (retain, nonatomic) SKAdImpression *impression;
@property (retain, nonatomic) TFSTwitterCore.TFSTwitterPromotedContent *promotedContent;
@property (retain, nonatomic) NSDate *impressionStartDate;
@property (retain, nonatomic) NSDate *endImpressionStartDate;
@property (nonatomic) unsigned long long numberOfStartImpressionCalls;
@property (nonatomic) unsigned long long numberOfEndImpressionCalls;
@property (nonatomic) _Bool skAdNetwork4Enabled;

/* class methods */
+ (id)queue;

/* instance methods */
- (id)initWithScribe:(id)scribe minimumImpressionDuration:(double)duration endImpressionTimingExperimentBucket:(unsigned long long)bucket vtaRefactoringExperimentBucket:(unsigned long long)bucket skAdNetwork4Enabled:(_Bool)enabled;
- (void)startSession:(id)session scribeContext:(id)context;
- (void)endSession:(id)session scribeContext:(id)context;
- (void)_taf_syncEndSession:(id)session scribeContext:(id)context completion:(id /* block */)completion;
- (void)_taf_startImpression:(id)impression context:(id)context;
- (void)_taf_endImpression:(id)impression context:(id)context completion:(id /* block */)completion;
- (id)_taf_generateSKAdImpression:(id)impression;
- (_Bool)_taf_isSessionInProgressFor:(id)_for;
- (_Bool)_taf_isSessionInProgress;
- (void)_taf_reset;
- (void)_taf_scribeImpressionIfValidatedWithContext:(id)context;
- (void)_taf_scribeAction:(id)action scribeContext:(id)context error:(id)error;
- (id)appendParametersToScribeContext:(id)context impression:(id)impression;
- (void)_taf_recordError:(id)error;

@end

#endif /* TAFSKAdImpressionSessionManager_h */
