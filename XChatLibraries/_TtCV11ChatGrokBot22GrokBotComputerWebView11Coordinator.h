//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
