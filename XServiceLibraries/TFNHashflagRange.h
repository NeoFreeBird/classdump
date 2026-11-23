//
#ifndef TFNHashflagRange_h
#define TFNHashflagRange_h
@import Foundation;

#include "TFNHashflag.h"

@class NSObject;

@interface TFNHashflagRange : NSObject

@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } range;
@property (readonly, nonatomic) TFNHashflag *hashflag;
@property (readonly, nonatomic) _Bool isRightToLeft;

/* instance methods */
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range hashflag:(id)hashflag isRightToLeft:(_Bool)left;

@end

#endif /* TFNHashflagRange_h */
