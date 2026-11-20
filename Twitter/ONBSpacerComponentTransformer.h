//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef ONBSpacerComponentTransformer_h
#define ONBSpacerComponentTransformer_h
@import Foundation;

#include "ONBComponentTransformer.h"

@interface ONBSpacerComponentTransformer : ONBComponentTransformer

/* class methods */
+ (Class)mutableComponentClass;

/* instance methods */
- (id)componentView;
- (id)dataViewItem;

@end

#endif /* ONBSpacerComponentTransformer_h */
