//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNTwitterCardEventLogger_h
#define TFNTwitterCardEventLogger_h
@import Foundation;

#include "TFNTwitterCardEventLogger-Protocol.h"
#include "TFNTwitterCardLogger.h"
#include "TFNTwitterCardScribeContextProvider-Protocol.h"

@class NSObject, NSString;

@interface TFNTwitterCardEventLogger : NSObject <TFNTwitterCardEventLogger>

@property (retain, nonatomic) TFNTwitterCardLogger *logger;
@property (readonly, nonatomic) id <TFNTwitterCardScribeContextProvider> cardScribeContextProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithAccount:(id)account cardScribeContextProvider:(id)provider;
- (id)init;
- (void)logEvent:(id)event;
- (void)_logMediaOpenWithLogEvent:(id)event;
- (void)_logOffersRequestWithLogEvent:(id)event;
- (void)_logAuthenticatedWebViewRequestWithLogEvent:(id)event;
- (void)_logProfileOpenWithEvent:(id)event;
- (void)_logURLOpenWithLogEvent:(id)event;
- (void)_logAppStoreOpenWithLogEvent:(id)event;
- (void)_logAppStoreResponseWithLogEvent:(id)event;
- (void)_logAppOpenAttemptWithLogEvent:(id)event;
- (void)_logAppOpenedSuccessfullyWithLogEvent:(id)event;
- (void)_logComposeTweetWithLogEvent:(id)event;
- (void)_logTweetDetailsOpenWithLogEvent:(id)event;
- (void)_logImageActionOnSlideshowWithEvent:(id)event;
- (void)_logVideoURLOpenWithLogEvent:(id)event;
- (void)_logInlineVideoWithLogEvent:(id)event;
- (void)_logLeadSubmissionWithLogEvent:(id)event;
- (void)_logPollVoteWithLogEvent:(id)event;
- (void)_logConversationCardClickWithLogEvent:(id)event;
- (void)_logCustomerFeedbackCardLogEvent:(id)event;
- (void)_logMessageMeCardClickWithLogEvent:(id)event;
- (void)_logDirectMessageCardCTAClickWithLogEvent:(id)event;
- (void)_logDirectMessageCardUserClickWithLogEvent:(id)event;

@end

#endif /* TFNTwitterCardEventLogger_h */
