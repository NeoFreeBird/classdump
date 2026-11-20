//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
