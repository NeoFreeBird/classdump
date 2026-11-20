//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtCC8Payments14StripeElementsP33_DBF28F3C21FE949C54A20E732B36AA6B14MessageHandler_h
#define _TtCC8Payments14StripeElementsP33_DBF28F3C21FE949C54A20E732B36AA6B14MessageHandler_h
@import Foundation;

#include "WKScriptMessageHandler-Protocol.h"

@class NSObject;

@interface Payments.StripeElements.(MessageHandler in _DBF28F3C21FE949C54A20E732B36AA6B) : NSObject <WKScriptMessageHandler> { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 messageHandler;
}

/* instance methods */
- (void)userContentController:(id)controller didReceiveScriptMessage:(id)message;
- (id)init;

@end

#endif /* _TtCC8Payments14StripeElementsP33_DBF28F3C21FE949C54A20E732B36AA6B14MessageHandler_h */
