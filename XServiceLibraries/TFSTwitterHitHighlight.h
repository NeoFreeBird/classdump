//
#ifndef TFSTwitterHitHighlight_h
#define TFSTwitterHitHighlight_h
@import Foundation;

#include "TFSTwitterTextRange-Protocol.h"

@class NSObject, NSString;

@interface TFSTwitterHitHighlight : NSObject <TFSTwitterTextRange>

@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } range;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)asDisplayTextRange;
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (id)copyWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;

@end

#endif /* TFSTwitterHitHighlight_h */
