//
#ifndef TFNTwitterPromotedEventLogger_h
#define TFNTwitterPromotedEventLogger_h
@import Foundation;

#include "TFSScribeOutgoingEventsHandler-Protocol.h"
#include "TFSTwitterLegacyScribeLogMethods-Protocol.h"
#include "TLTScribeBackgroundTaskManager.h"
#include "TPSFeatureSwitchesAccess-Protocol.h"

@class NSMutableDictionary, NSMutableSet, NSObject, NSString, TFSScribe;

@interface TFNTwitterPromotedEventLogger : NSObject <TFSScribeOutgoingEventsHandler>

@property (retain, nonatomic) TFSScribe *scribeService;
@property (retain, nonatomic) id <TFSTwitterLegacyScribeLogMethods> clientEventsScribe;
@property (retain, nonatomic) TLTScribeBackgroundTaskManager *backgroundTaskManager;
@property (retain, nonatomic) NSString *group;
@property (readonly, nonatomic) NSMutableDictionary *completionBlocks;
@property (readonly, nonatomic) NSMutableSet *loggedImpressionIDs;
@property (readonly, nonatomic) id <TPSFeatureSwitchesAccess> featureSwitches;
@property (readonly, nonatomic) _Bool stackTraceForPromotedEventErrorsEnabled;
@property (readonly, copy, nonatomic) NSString *accountID;

/* instance methods */
- (id)initWithAccountID:(id)id clientEventsScribe:(id)scribe featureSwitches:(id)switches;
- (_Bool)logEventWithParameters:(id)parameters scribeContext:(id)context;
- (_Bool)logEventWithParameters:(id)parameters;
- (void)flush:(id /* block */)flush;
- (id)initWithAccountID:(id)id scribe:(id)scribe clientEventsScribe:(id)scribe featureSwitches:(id)switches backgroundTaskManager:(id)manager;
- (id)init;
- (id)eventSerializerForParameters:(id)parameters;
- (_Bool)logEventWithParameters:(id)parameters eventHandler:(id)handler;
- (_Bool)logEventWithParameters:(id)parameters scribeContext:(id)context eventHandler:(id)handler;
- (void)flushWithEventHandler:(id)handler;
- (void)_flushWithEventHandler:(id)handler token:(id)token;
- (void)_completeToken:(id)token;
- (void)handleScribeOutgoingEvents:(id)events retryDistribution:(id)distribution completionHandler:(id /* block */)handler;
- (void)_didFlush:(id)flush;
- (void)_wrapInBackgroundTask:(id /* block */)task;
- (_Bool)logEventIfNeeded:(long long)needed usingInput:(id)input extraParameters:(id)parameters;
- (void)logUserEventIfNeeded:(long long)needed onUserPromotedContent:(id)content;
- (void)logEventIfNeeded:(long long)needed usingInput:(id)input;
- (_Bool)logImpressionEventIfNeededUsingInput:(id)input viewController:(id)controller extraParameters:(id)parameters;
- (_Bool)_tfn_logPromotedFlybyImpressionEventIfNeededUsingInput:(id)input extraParameters:(id)parameters;
- (void)checkEngagementBeforeImpressionWithParameters:(id)parameters scribeContext:(id)context;
- (_Bool)isStackTraceForPromotedEventErrorsEnabled;

@end

#endif /* TFNTwitterPromotedEventLogger_h */
