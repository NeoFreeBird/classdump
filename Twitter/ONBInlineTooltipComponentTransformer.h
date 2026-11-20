//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
