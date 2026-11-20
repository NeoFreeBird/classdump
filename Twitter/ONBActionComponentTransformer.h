//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef ONBActionComponentTransformer_h
#define ONBActionComponentTransformer_h
@import Foundation;

#include "ONBComponentTransformer.h"

@interface ONBActionComponentTransformer : ONBComponentTransformer

/* class methods */
+ (Class)mutableComponentClass;

/* instance methods */
- (id)detailText;
- (id)componentView;
- (void)private_tapAction;

@end

#endif /* ONBActionComponentTransformer_h */
