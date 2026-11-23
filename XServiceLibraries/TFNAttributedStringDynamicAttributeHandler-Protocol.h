//
#ifndef TFNAttributedStringDynamicAttributeHandler_Protocol_h
#define TFNAttributedStringDynamicAttributeHandler_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFNAttributedStringDynamicAttributeHandler <NSObject>

@required

/* required instance methods */
- (_Bool)hasDynamicAttributesForString:(id)string withNewValues:(_Bool)values forObject:(id)object;
- (void)updateAttributedStringAttributes:(id)attributes range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range forObject:(id)object;

@optional

@end

#endif /* TFNAttributedStringDynamicAttributeHandler_Protocol_h */
