//
#ifndef TFNTwitterScribe_h
#define TFNTwitterScribe_h
@import Foundation;

#include "TFNTwitterScribeConfiguration.h"
#include "TFNTwitterScribeImpressionLogger.h"
#include "TFNTwitterScribeOptions.h"
#include "TFNTwitterScribePromotedEngagementDelegate-Protocol.h"
#include "TFNTwitterScribeWriter-Protocol.h"
#include "TFSCacheRegistrant-Protocol.h"
#include "TFSTwitterLegacyScribeLogMethods-Protocol.h"

@class NSObject, NSString, TFSScribe;
@protocol TFNTwitterScribeGlobalParameterProvider;

@interface TFNTwitterScribe : NSObject <TFSCacheRegistrant, TFSTwitterLegacyScribeLogMethods>

@property (readonly, copy, nonatomic) NSString *accountID;
@property (readonly, nonatomic) TFSScribe *scribeService;
@property (readonly, copy, nonatomic) NSString *clientName;
@property (retain, nonatomic) TFNTwitterScribeConfiguration *configuration;
@property (retain, nonatomic) TFNTwitterScribeImpressionLogger *impressionLogger;
@property (retain, nonatomic) id <TFNTwitterScribeWriter> scribeWriter;
@property (retain) TFNTwitterScribeOptions *options;
@property (retain) id <TFNTwitterScribeGlobalParameterProvider> globalParameterProvider;
@property (weak) id <TFNTwitterScribePromotedEngagementDelegate> promotedEngagementDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (_Bool)shouldScribeSampleWithSampleSize:(long long)size;
+ (id)scribeForAccountID:(id)id;
+ (id)guestScribe;
+ (id)guestScribeGroup;
+ (id)_tfn_latencySensitiveEvents;

/* instance methods */
- (id)init;
- (id)initWithAccountID:(id)id options:(id)options;
- (id)_scribeGroup;
- (void)logAction:(id)action page:(id)page section:(id)section;
- (void)logAction:(id)action page:(id)page section:(id)section component:(id)component;
- (void)logAction:(id)action page:(id)page section:(id)section component:(id)component element:(id)element;
- (void)logAction:(id)action page:(id)page section:(id)section component:(id)component parameters:(id)parameters;
- (void)logAction:(id)action page:(id)page section:(id)section component:(id)component element:(id)element parameters:(id)parameters;
- (_Bool)_tfn_isPromotedLatencySensitiveEvent:(id)event parameters:(id)parameters;
- (void)logEvent:(id)event parameters:(id)parameters;
- (void)logPerformanceEvent:(id)event size:(long long)size;
- (void)logPerformanceEvent:(id)event duration:(double)duration count:(long long)count;
- (void)logPerformanceEvent:(id)event duration:(double)duration impressionID:(id)id metadata:(id)metadata size:(long long)size;
- (void)_tfn_logPerformanceEvent:(id)event duration:(double)duration impressionID:(id)id promotedImpressionID:(id)id metadata:(id)metadata;
- (void)logPerformanceEvent:(id)event duration:(double)duration;
- (void)logPerformanceEvent:(id)event duration:(double)duration metadata:(id)metadata;
- (void)logPerformanceEvent:(id)event duration:(double)duration promotedImpressionID:(id)id;
- (void)logPerformanceEvent:(id)event duration:(double)duration impressionID:(id)id metadata:(id)metadata;
- (_Bool)shouldLogPerformanceEvent:(id)event;
- (void)logExtendedMediaDetailsEvent:(id)event;
- (void)logErrorWithType:(id)type functionName:(id)name;
- (void)logJSONEvent:(id)jsonevent;
- (void)enqueueCompletionBlock:(id /* block */)block;
- (void)collectMetrics:(id /* block */)metrics;
- (void)purgeWithReason:(unsigned long long)reason completion:(id /* block */)completion;

@end

#endif /* TFNTwitterScribe_h */
