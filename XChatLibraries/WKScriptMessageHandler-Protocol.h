//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
