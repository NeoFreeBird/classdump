//
#ifndef ONBDestructiveActionComponentTransformer_h
#define ONBDestructiveActionComponentTransformer_h
@import Foundation;

#include "ONBComponentTransformer.h"

@interface ONBDestructiveActionComponentTransformer : ONBComponentTransformer

/* class methods */
+ (Class)mutableComponentClass;

/* instance methods */
- (id)componentView;
- (void)private_tapAction;

@end

#endif /* ONBDestructiveActionComponentTransformer_h */
