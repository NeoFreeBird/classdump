//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNIntrinsicContentSizeErasable_Protocol_h
#define TFNIntrinsicContentSizeErasable_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFNIntrinsicContentSizeErasable <NSObject>

@required

@property (nonatomic) _Bool eraseIntrinsicContentSize;

@optional

@end

#endif /* TFNIntrinsicContentSizeErasable_Protocol_h */
