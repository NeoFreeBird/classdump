//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1CustomerFeedbackCardEventHandler_h
#define T1CustomerFeedbackCardEventHandler_h
@import Foundation;

#include "T1CustomerFeedbackCardPresenter.h"
#include "TUICardViewEventHandler-Protocol.h"

@class NSString, TUICardViewBaseEventHandler;

@interface T1CustomerFeedbackCardEventHandler : TUICardViewBaseEventHandler <TUICardViewEventHandler>

@property (retain, nonatomic) T1CustomerFeedbackCardPresenter *presenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)_logParametersForFeedbackID:(id)id feedbackState:(unsigned long long)state feedbackType:(id)type;

/* instance methods */
- (id)init;
- (id)handleViewEvent:(id)event context:(id)context;
- (void)_handleScoreSubmittedEvent:(id)event context:(id)context;
- (void)_handleDismissEvent:(id)event context:(id)context;
- (void)_handleImpressionEvent:(id)event context:(id)context;
- (void)_handleAddCommentEvent:(id)event context:(id)context;
- (void)_handleTweetEvent:(id)event context:(id)context;
- (void)_handleURLTappedEvent:(id)event context:(id)context;

@end

#endif /* T1CustomerFeedbackCardEventHandler_h */
