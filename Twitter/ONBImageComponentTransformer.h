//
#ifndef ONBImageComponentTransformer_h
#define ONBImageComponentTransformer_h
@import Foundation;

#include "ONBComponentTransformer.h"

@interface ONBImageComponentTransformer : ONBComponentTransformer

/* class methods */
+ (Class)mutableComponentClass;

/* instance methods */
- (id)componentView;

@end

#endif /* ONBImageComponentTransformer_h */
