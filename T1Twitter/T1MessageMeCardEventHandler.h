//
#ifndef T1MessageMeCardEventHandler_h
#define T1MessageMeCardEventHandler_h
@import Foundation;

#include "T1DirectMessageConversationFromCardsPresenter-Protocol.h"
#include "TUICardViewEventHandler-Protocol.h"

@class NSString, TUICardViewBaseEventHandler;

@interface T1MessageMeCardEventHandler : TUICardViewBaseEventHandler <TUICardViewEventHandler>

@property (retain, nonatomic) id <T1DirectMessageConversationFromCardsPresenter> presenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)handleViewEvent:(id)event context:(id)context;
- (id)_logEventContextForViewEvent:(id)event cardEventContext:(id)context;

@end

#endif /* T1MessageMeCardEventHandler_h */
