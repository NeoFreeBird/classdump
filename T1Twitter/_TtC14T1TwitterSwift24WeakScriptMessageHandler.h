//
#ifndef _TtC14T1TwitterSwift24WeakScriptMessageHandler_h
#define _TtC14T1TwitterSwift24WeakScriptMessageHandler_h
@import Foundation;

#include "WKScriptMessageHandler-Protocol.h"

@class NSObject, _$sSo22WKScriptMessageHandler_pSgXw;

@interface T1TwitterSwift.WeakScriptMessageHandler : NSObject <WKScriptMessageHandler> { // (Swift)
    /* instance variables */
    weak __C.WKScriptMessageHandler? proxy;
}

/* instance methods */
- (void)userContentController:(id)controller didReceiveScriptMessage:(id)message;
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift24WeakScriptMessageHandler_h */
