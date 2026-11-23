//
#ifndef T1CardViewDetailsEventHandler_h
#define T1CardViewDetailsEventHandler_h
@import Foundation;

#include "TUICardViewEventHandler-Protocol.h"

@class NSString, TUICardViewBaseEventHandler;

@interface T1CardViewDetailsEventHandler : TUICardViewBaseEventHandler <TUICardViewEventHandler>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)handleViewEvent:(id)event context:(id)context;
- (void)_handleOpenTweetDetailsEvent:(id)event context:(id)context;

@end

#endif /* T1CardViewDetailsEventHandler_h */
