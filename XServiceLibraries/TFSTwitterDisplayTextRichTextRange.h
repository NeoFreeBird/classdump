//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
