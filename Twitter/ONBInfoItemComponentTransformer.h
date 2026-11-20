//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef ONBInfoItemComponentTransformer_h
#define ONBInfoItemComponentTransformer_h
@import Foundation;

#include "ONBComponentTransformer.h"

@interface ONBInfoItemComponentTransformer : ONBComponentTransformer

/* class methods */
+ (Class)mutableComponentClass;

/* instance methods */
- (id)componentView;

@end

#endif /* ONBInfoItemComponentTransformer_h */
