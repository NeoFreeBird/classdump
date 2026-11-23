//
#ifndef OCFContentSizing_Protocol_h
#define OCFContentSizing_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol OCFContentSizing <NSObject>

@required

/* required instance methods */
- (double)ocf_calculatedContentHeight;

@optional

@end

#endif /* OCFContentSizing_Protocol_h */
