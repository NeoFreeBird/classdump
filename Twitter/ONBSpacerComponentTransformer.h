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
