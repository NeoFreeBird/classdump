//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNAttributedStringImageAttachmentAttributeHandler_h
#define TFNAttributedStringImageAttachmentAttributeHandler_h
@import Foundation;

#include "TFNAttributedStringDynamicAttributeHandler-Protocol.h"

@class NSObject, NSString;

@interface TFNAttributedStringImageAttachmentAttributeHandler : NSObject <TFNAttributedStringDynamicAttributeHandler>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)updateAttributedStringAttributes:(id)attributes range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range forObject:(id)object;
- (_Bool)hasDynamicAttributesForString:(id)string withNewValues:(_Bool)values forObject:(id)object;
- (id)_tfn_imageWithDynamicRegeneratorForAttributeName:(id)name inAttributes:(id)attributes;

@end

#endif /* TFNAttributedStringImageAttachmentAttributeHandler_h */
