//
#ifndef T1CardViewURLEventHandler_h
#define T1CardViewURLEventHandler_h
@import Foundation;

#include "T1CardURLPresenter.h"
#include "TUICardViewEventHandler-Protocol.h"

@class NSString, TUICardViewBaseEventHandler;

@interface T1CardViewURLEventHandler : TUICardViewBaseEventHandler <TUICardViewEventHandler>

@property (retain, nonatomic) T1CardURLPresenter *presenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)handleViewEvent:(id)event context:(id)context;

@end

#endif /* T1CardViewURLEventHandler_h */
