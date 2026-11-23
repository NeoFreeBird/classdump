//
#ifndef TFSTwitterRichTextTag_h
#define TFSTwitterRichTextTag_h
@import Foundation;

#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"
#include "TFSTwitterTextRange-Protocol.h"

@class NSObject, NSString;

@interface TFSTwitterRichTextTag : NSObject <NSCopying, NSCoding, TFSTwitterTextRange> { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 styles;
}

@property (nonatomic, readonly) struct _NSRange { unsigned long long x0; unsigned long long x1; } range;
@property (nonatomic, readonly) _Bool isBold;
@property (nonatomic, readonly) _Bool isItalic;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long hash;

/* instance methods */
- (_Bool)isEqual:(id)equal;
- (id)copyWithZone:(void *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (id)init;

@end

#endif /* TFSTwitterRichTextTag_h */
