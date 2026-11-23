//
#ifndef T1LiveEventCardViewEventHandler_h
#define T1LiveEventCardViewEventHandler_h
@import Foundation;

#include "TUICardViewEventHandler-Protocol.h"

@class NSString, TUICardViewBaseEventHandler;

@interface T1LiveEventCardViewEventHandler : TUICardViewBaseEventHandler <TUICardViewEventHandler>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)handleViewEvent:(id)event context:(id)context;
- (void)_t1_handleLiveEventViewEvent:(id)event context:(id)context;
- (id)_t1_handleLiveEventPreviewingEvent:(id)event context:(id)context;
- (void)_t1_handleLiveEventRemindMeButtonTappedEvent:(id)event context:(id)context;
- (void)_t1_handleLiveEventReloadDataViewControllerEvent:(id)event context:(id)context;
- (id)_t1_remindMeButtonPromotedEventExtraParametersForLiveEvent:(id)event;
- (_Bool)_t1_shouldHandleEvent:(id)event;
- (void)_t1_redirectLiveEventCardViewEvent:(id)event withContext:(id)context toEventWithType:(id)type;
- (void)_t1_logCardViewEvent:(id)event withContext:(id)context;
- (id)_t1_liveEventViewControllerForEvent:(id)event status:(id)status context:(id)context;

@end

#endif /* T1LiveEventCardViewEventHandler_h */
