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
