//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1CardViewComposeEventHandler_h
#define T1CardViewComposeEventHandler_h
@import Foundation;

#include "T1CardComposePresenter-Protocol.h"
#include "TUICardViewEventHandler-Protocol.h"

@class NSString, TUICardViewBaseEventHandler;

@interface T1CardViewComposeEventHandler : TUICardViewBaseEventHandler <TUICardViewEventHandler>

@property (retain, nonatomic) id <T1CardComposePresenter> presenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)handleViewEvent:(id)event context:(id)context;

@end

#endif /* T1CardViewComposeEventHandler_h */
