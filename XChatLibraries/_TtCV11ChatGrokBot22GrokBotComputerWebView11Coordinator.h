//
#ifndef _TtCV11ChatGrokBot22GrokBotComputerWebView11Coordinator_h
#define _TtCV11ChatGrokBot22GrokBotComputerWebView11Coordinator_h
@import Foundation;

#include "WKScriptMessageHandler-Protocol.h"

@class ChatGrokBot.GrokBotComputerPageMessage _$sScMYcc ->, NSObject, _$s10Foundation3URLVMn ?;

@interface ChatGrokBot.GrokBotComputerWebView.Coordinator : NSObject <WKScriptMessageHandler> { // (Swift)
    /* instance variables */
    ChatGrokBot.GrokBotComputerPageMessage _$sScMYcc -> onMessage;
    nominal type descriptor for Foundation.URL ? loadedURL;
}

/* instance methods */
- (void)userContentController:(id)controller didReceiveScriptMessage:(id)message;
- (id)init;

@end

#endif /* _TtCV11ChatGrokBot22GrokBotComputerWebView11Coordinator_h */
