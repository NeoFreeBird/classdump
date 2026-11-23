//
#ifndef TFSTwitterDisplayTextRichTextRange_h
#define TFSTwitterDisplayTextRichTextRange_h
@import Foundation;

#include "TFSTwitterDisplayTextEntityRange.h"
#include "TFSTwitterRichTextTag.h"

@interface TFSTwitterDisplayTextRichTextRange : TFSTwitterDisplayTextEntityRange // (Swift)

@property (nonatomic, readonly) TFSTwitterRichTextTag *richTextTag;
@property (nonatomic, readonly) long long rangeFlavor;

/* instance methods */
- (id)initWithRichText:(id)text;
- (id)initWithCoder:(id)coder;

@end

#endif /* TFSTwitterDisplayTextRichTextRange_h */
