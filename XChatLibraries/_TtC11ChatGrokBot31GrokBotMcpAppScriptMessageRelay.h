//
#ifndef _TtC11ChatGrokBot31GrokBotMcpAppScriptMessageRelay_h
#define _TtC11ChatGrokBot31GrokBotMcpAppScriptMessageRelay_h
@import Foundation;

#include "WKScriptMessageHandler-Protocol.h"

@class NSObject, _$sySDySSypGcSg;

@interface ChatGrokBot.GrokBotMcpAppScriptMessageRelay : NSObject <WKScriptMessageHandler> { // (Swift)
    /* instance variables */
    (([Swift.String : Any]) -> ())? onMessage;
}

/* instance methods */
- (void)userContentController:(id)controller didReceiveScriptMessage:(id)message;
- (id)init;

@end

#endif /* _TtC11ChatGrokBot31GrokBotMcpAppScriptMessageRelay_h */
