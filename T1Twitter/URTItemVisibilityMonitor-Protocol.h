//
#ifndef URTItemVisibilityMonitor_Protocol_h
#define URTItemVisibilityMonitor_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol URTItemVisibilityMonitor <NSObject>

@required

/* required instance methods */
- (void)itemWillDisplay:(id)display atIndexPath:(id)path;
- (void)itemWillEndDisplaying:(id)displaying atIndexPath:(id)path;

@optional

@end

#endif /* URTItemVisibilityMonitor_Protocol_h */
