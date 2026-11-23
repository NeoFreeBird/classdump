//
#ifndef T1AuthenticatedWebViewCardEventHandler_h
#define T1AuthenticatedWebViewCardEventHandler_h
@import Foundation;

#include "T1AuthenticatedWebViewCardPresenter-Protocol.h"
#include "TUICardViewEventHandler-Protocol.h"

@class NSString, TUICardViewBaseEventHandler;

@interface T1AuthenticatedWebViewCardEventHandler : TUICardViewBaseEventHandler <TUICardViewEventHandler>

@property (retain, nonatomic) id <T1AuthenticatedWebViewCardPresenter> presenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)handleViewEvent:(id)event context:(id)context;
- (id)_t1_createWebViewModelFromContext:(id)context;
- (void)_t1_openURLThroughTwitterLoginInExternalBrowser:(id)browser;
- (id)_t1_logEventContextForViewEvent:(id)event cardEventContext:(id)context;
- (void)_t1_openURLInExternalBrowser:(id)browser;

@end

#endif /* T1AuthenticatedWebViewCardEventHandler_h */
