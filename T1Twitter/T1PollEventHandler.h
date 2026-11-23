//
#ifndef T1PollEventHandler_h
#define T1PollEventHandler_h
@import Foundation;

#include "TUICardViewEventHandler-Protocol.h"

@class NSString, TUICardViewBaseEventHandler;

@interface T1PollEventHandler : TUICardViewBaseEventHandler <TUICardViewEventHandler>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)handleViewEvent:(id)event context:(id)context;
- (void)handleCAPIEvent:(id)capievent context:(id)context;
- (void)handlePollUpsellEvent:(id)event context:(id)context;

@end

#endif /* T1PollEventHandler_h */
