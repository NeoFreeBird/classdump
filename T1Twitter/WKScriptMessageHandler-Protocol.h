//
#ifndef WKScriptMessageHandler_Protocol_h
#define WKScriptMessageHandler_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol WKScriptMessageHandler <NSObject>

@required

/* required instance methods */
- (void)userContentController:(id)controller didReceiveScriptMessage:(id)message;
- (void)userContentController:(id)controller didReceiveScriptMessage:(id)message;

@optional

@end

#endif /* WKScriptMessageHandler_Protocol_h */
