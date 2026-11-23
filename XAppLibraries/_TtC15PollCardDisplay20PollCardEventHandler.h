//
#ifndef _TtC15PollCardDisplay20PollCardEventHandler_h
#define _TtC15PollCardDisplay20PollCardEventHandler_h
@import Foundation;

#include "TUICardViewBaseEventHandler.h"
#include "TUICardViewEventHandler-Protocol.h"

@interface PollCardDisplay.PollCardEventHandler : TUICardViewBaseEventHandler <TUICardViewEventHandler> // (Swift)

/* instance methods */
- (id)handleViewEvent:(id)event context:(id)context;
- (id)init;

@end

#endif /* _TtC15PollCardDisplay20PollCardEventHandler_h */
