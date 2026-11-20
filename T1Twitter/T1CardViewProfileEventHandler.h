//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1CardViewProfileEventHandler_h
#define T1CardViewProfileEventHandler_h
@import Foundation;

#include "T1CardUserPresenter.h"
#include "TUICardViewEventHandler-Protocol.h"

@class NSString, TUICardViewBaseEventHandler;

@interface T1CardViewProfileEventHandler : TUICardViewBaseEventHandler <TUICardViewEventHandler>

@property (retain, nonatomic) T1CardUserPresenter *presenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)handleViewEvent:(id)event context:(id)context;

@end

#endif /* T1CardViewProfileEventHandler_h */
