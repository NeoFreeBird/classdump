//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC4Grok25GrokConnectorOAuthManager_h
#define _TtC4Grok25GrokConnectorOAuthManager_h
@import Foundation;

#include "ASWebAuthenticationPresentationContextProviding-Protocol.h"
#include "SFSafariViewControllerDelegate-Protocol.h"
#include "UIAdaptivePresentationControllerDelegate-Protocol.h"

@class NSObject, _$sSSSg, _$sSo16UIViewControllerCSgXw, _$sSo22SFSafariViewControllerCSg, _$sSo26ASWebAuthenticationSessionCSg, _$ss6ResultOMn _$s10Foundation3URLVMn _$ss5ErrorMp _$sGScMYccSg ->;

@interface Grok.GrokConnectorOAuthManager : NSObject <UIAdaptivePresentationControllerDelegate, SFSafariViewControllerDelegate, ASWebAuthenticationPresentationContextProviding> { // (Swift)
    /* instance variables */
    weak __C.UIViewController? presenter;
    __C.ASWebAuthenticationSession? authSession;
    __C.SFSafariViewController? browser;
    nominal type descriptor for Swift.Result nominal type descriptor for Foundation.URL protocol descriptor for Swift.Error _$sGScMYccSg -> authenticationCompletion;
    Swift.String? pendingNonce;
}

/* instance methods */
- (void)presentationControllerDidDismiss:(id)dismiss;
- (void)safariViewControllerDidFinish:(id)finish;
- (id)presentationAnchorForWebAuthenticationSession:(id)session;
- (id)init;

@end

#endif /* _TtC4Grok25GrokConnectorOAuthManager_h */
