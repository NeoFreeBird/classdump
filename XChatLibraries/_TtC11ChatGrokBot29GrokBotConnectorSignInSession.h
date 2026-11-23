//
#ifndef _TtC11ChatGrokBot29GrokBotConnectorSignInSession_h
#define _TtC11ChatGrokBot29GrokBotConnectorSignInSession_h
@import Foundation;

#include "ASWebAuthenticationPresentationContextProviding-Protocol.h"

@class NSObject, _$s10Foundation3URLVMn _$sSg_ -> _$ss5ErrorMp _$sSgtcSg, _$s10Foundation4UUIDVMn ?, _$sSo26ASWebAuthenticationSessionCSg, _$sSo8UIWindowCSgXw;

@interface ChatGrokBot.GrokBotConnectorSignInSession : NSObject <ASWebAuthenticationPresentationContextProviding> { // (Swift)
    /* instance variables */
    weak __C.UIWindow? anchor;
    nominal type descriptor for Foundation.URL _$sSg_ -> protocol descriptor for Swift.Error _$sSgtcSg completion;
    __C.ASWebAuthenticationSession? session;
    nominal type descriptor for Foundation.UUID ? token;
}

/* instance methods */
- (id)presentationAnchorForWebAuthenticationSession:(id)session;
- (id)init;

@end

#endif /* _TtC11ChatGrokBot29GrokBotConnectorSignInSession_h */
