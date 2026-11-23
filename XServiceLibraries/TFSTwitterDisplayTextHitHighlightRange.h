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
