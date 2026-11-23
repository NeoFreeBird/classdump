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
