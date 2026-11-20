//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterTextRange_Protocol_h
#define TFSTwitterTextRange_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFSTwitterTextRange <NSObject>

@required

@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } range;

/* required instance methods */
- (id)copyWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;

@optional

@end

#endif /* TFSTwitterTextRange_Protocol_h */
