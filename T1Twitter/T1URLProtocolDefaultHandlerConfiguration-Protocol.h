//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1URLProtocolDefaultHandlerConfiguration_Protocol_h
#define T1URLProtocolDefaultHandlerConfiguration_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1URLProtocolDefaultHandlerConfiguration <NSObject>

@required

/* required instance methods */
- (id)tabForT1PanelID:(long long)id;
- (long long)panelIDForTab:(id)tab;
- (long long)panelIDForTab:(id)tab context:(id)context;

@optional

@end

#endif /* T1URLProtocolDefaultHandlerConfiguration_Protocol_h */
