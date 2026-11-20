//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
