//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNTwitterCardScribeContextProvider_Protocol_h
#define TFNTwitterCardScribeContextProvider_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class TFSTwitterScribeContext;

@protocol TFNTwitterCardScribeContextProvider <NSObject>

@required

@property (readonly, copy, nonatomic) TFSTwitterScribeContext *baseScribeContext;
@property (readonly, nonatomic) long long displayMode;

@optional

/* optional instance methods */
- (id)scribeEventForURLActionWithLogEvent:(id)event isAppCard:(_Bool)card;
- (id)scribeEventForAppActionWithLogEvent:(id)event;
- (id)scribeEventForAppStoreActionWithLogEvent:(id)event;
- (id)scribeEventForClickWithLogEvent:(id)event;
- (id)scribeEventForSlideshowActionWithLogEvent:(id)event;
- (id)scribeEventForUserWithCardDataSource:(id)source;
- (id)scribeEventForAppStoreWithCardDataSource:(id)source;
- (id)scribeEventForImageWithCardDataSource:(id)source;
- (id)scribeEventForOffersCardWithLogEvent:(id)event;
- (id)scribeEventForAuthenticatedWebViewCardWithLogEvent:(id)event;
- (id)scribeEventForInlineVideoWithLogEvent:(id)event;
- (id)scribeEventForComposeWithLogEvent:(id)event;
- (id)scribeEventForSubmitWithLogEvent:(id)event;
- (id)scribeEventForPollWithLogEvent:(id)event;
- (id)scribeEventForFeedbackWithLogEvent:(id)event;
- (id)scribeEventForMessageMeCardWithLogEvent:(id)event;
- (id)scribeEventForDirectMessageCardWithLogEvent:(id)event;
- (id)scribeEventForSurveyCardClickWithLogEvent:(id)event;
- (id)scribeEventForSurveyCardSelectionWithLogEvent:(id)event;
- (id)scribeParametersForMessageMeCardWithCardData:(id)data;

@end

#endif /* TFNTwitterCardScribeContextProvider_Protocol_h */
