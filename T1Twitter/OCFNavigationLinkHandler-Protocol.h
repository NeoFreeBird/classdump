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
