//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterDisplayTextNoteTweetInlineMediaRange_h
#define TFSTwitterDisplayTextNoteTweetInlineMediaRange_h
@import Foundation;

#include "TFSTwitterDisplayTextEntityRange.h"
#include "TFSTwitterNoteTweetInlineMedia.h"

@interface TFSTwitterDisplayTextNoteTweetInlineMediaRange : TFSTwitterDisplayTextEntityRange // (Swift)

@property (nonatomic, readonly) TFSTwitterNoteTweetInlineMedia *noteTweetInlineMedia;
@property (nonatomic, readonly) long long rangeFlavor;

/* instance methods */
- (id)initWithNoteTweetInlineMedia:(id)media;
- (id)initWithCoder:(id)coder;

@end

#endif /* TFSTwitterDisplayTextNoteTweetInlineMediaRange_h */
