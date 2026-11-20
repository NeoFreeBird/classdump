//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TUICardViewEventHandler_Protocol_h
#define TUICardViewEventHandler_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TUICardViewEventHandler <NSObject>

@required

/* required instance methods */
- (id)handleViewEvent:(id)event context:(id)context;
- (id)handleViewEvent:(id)event context:(id)context;

@optional

@end

#endif /* TUICardViewEventHandler_Protocol_h */
