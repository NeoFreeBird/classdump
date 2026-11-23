//
#ifndef T1VoiceRoomCardViewEventHandler_h
#define T1VoiceRoomCardViewEventHandler_h
@import Foundation;

#include "TUICardViewEventHandler-Protocol.h"

@class NSString, TUICardViewBaseEventHandler;

@interface T1VoiceRoomCardViewEventHandler : TUICardViewBaseEventHandler <TUICardViewEventHandler>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)handleViewEvent:(id)event context:(id)context;
- (id)_t1_scribeContextWithContext:(id)context;
- (id)handleViewEvent:(id)event context:(id)context spaceID:(id)id presentingViewController:(id)controller scribeContext:(id)context;
- (id)_t1_handleViewEvent:(id)event context:(id)context spaceID:(id)id presentingViewController:(id)controller scribeContext:(id)context entryStatus:(id)status;
- (void)presentCaretMenuFromViewController:(id)controller withContext:(id)context event:(id)event spaceID:(id)id scribeContext:(id)context;
- (void)logClickEventWithContext:(id)context scribeContext:(id)context;

@end

#endif /* T1VoiceRoomCardViewEventHandler_h */
