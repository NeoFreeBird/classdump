//
#ifndef GADIntrinsicContentSizeDelegate_Protocol_h
#define GADIntrinsicContentSizeDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol GADIntrinsicContentSizeDelegate <NSObject>

@required

/* required instance methods */
- (void)adViewIntrinsicContentSizeDidChange:(id)change;

@optional

@end

#endif /* GADIntrinsicContentSizeDelegate_Protocol_h */
