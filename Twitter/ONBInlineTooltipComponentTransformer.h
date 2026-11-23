//
#ifndef ONBInlineTooltipComponentTransformer_h
#define ONBInlineTooltipComponentTransformer_h
@import Foundation;

#include "ONBComponentTransformer.h"

@interface ONBInlineTooltipComponentTransformer : ONBComponentTransformer

/* class methods */
+ (Class)mutableComponentClass;

/* instance methods */
- (id)componentView;
- (id)private_inlineTooltipItem;
- (id)private_placeholderImage;
- (id /* block */)private_imageViewUpdater;
- (void)private_dismissLinkTapped;

@end

#endif /* ONBInlineTooltipComponentTransformer_h */
