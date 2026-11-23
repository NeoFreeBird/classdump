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
