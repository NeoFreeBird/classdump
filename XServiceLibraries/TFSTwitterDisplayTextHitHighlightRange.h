//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterDisplayTextHitHighlightRange_h
#define TFSTwitterDisplayTextHitHighlightRange_h
@import Foundation;

#include "TFSTwitterDisplayTextEntityRange.h"
#include "TFSTwitterHitHighlight.h"

@class NSString;

@interface TFSTwitterDisplayTextHitHighlightRange : TFSTwitterDisplayTextEntityRange // (Swift)

@property (nonatomic, readonly) TFSTwitterHitHighlight *hitHighlight;
@property (nonatomic, readonly) long long rangeFlavor;
@property (nonatomic, readonly) NSString *displayString;

/* instance methods */
- (id)initWithHitHighlight:(id)highlight;
- (id)initWithCoder:(id)coder;

@end

#endif /* TFSTwitterDisplayTextHitHighlightRange_h */
