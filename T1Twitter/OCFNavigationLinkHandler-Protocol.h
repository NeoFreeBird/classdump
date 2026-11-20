//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef OCFNavigationLinkHandler_Protocol_h
#define OCFNavigationLinkHandler_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol OCFNavigationLinkHandler <NSObject>

@required

/* required instance methods */
- (void)didActivateNavigationLink:(id)link;

@optional

@end

#endif /* OCFNavigationLinkHandler_Protocol_h */
