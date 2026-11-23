//
#ifndef _TtC11ChatGrokBot30GrokBotUserFormWebMessageRelay_h
#define _TtC11ChatGrokBot30GrokBotUserFormWebMessageRelay_h
@import Foundation;

#include "WKScriptMessageHandler-Protocol.h"

@class ChatGrokBot.GrokBotUserFormWebMessageRelay.Message _$scSg ->, NSObject, _$sSS;

@interface ChatGrokBot.GrokBotUserFormWebMessageRelay : NSObject <WKScriptMessageHandler> { // (Swift)
    /* instance variables */
    ChatGrokBot.GrokBotUserFormWebMessageRelay.Message _$scSg -> onMessage;
    Swift.String host;
}

/* instance methods */
- (void)userContentController:(id)controller didReceiveScriptMessage:(id)message;
- (id)init;

@end

#endif /* _TtC11ChatGrokBot30GrokBotUserFormWebMessageRelay_h */
