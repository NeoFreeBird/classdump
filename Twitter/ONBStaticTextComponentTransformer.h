//
#ifndef ONBStaticTextComponentTransformer_h
#define ONBStaticTextComponentTransformer_h
@import Foundation;

#include "ONBComponentTransformer.h"

@class TFNAttributedTextView;

@interface ONBStaticTextComponentTransformer : ONBComponentTransformer {
    /* instance variables */
    TFNAttributedTextView *_primaryTextView;
}

/* class methods */
+ (Class)mutableComponentClass;

/* instance methods */
- (id)componentView;
- (_Bool)updateRichText:(id)text;
- (id)private_textViewForRichText:(id)text;

@end

#endif /* ONBStaticTextComponentTransformer_h */
