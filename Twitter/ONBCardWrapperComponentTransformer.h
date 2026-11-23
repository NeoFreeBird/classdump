//
#ifndef ONBCardWrapperComponentTransformer_h
#define ONBCardWrapperComponentTransformer_h
@import Foundation;

#include "ONBComponentTransformer.h"
#include "ONBComponentTransformerController.h"

@interface ONBCardWrapperComponentTransformer : ONBComponentTransformer {
    /* instance variables */
    ONBComponentTransformerController *_transformerController;
}

/* class methods */
+ (Class)mutableComponentClass;

/* instance methods */
- (void)setControllerDelegate:(id)delegate;
- (id)componentView;

@end

#endif /* ONBCardWrapperComponentTransformer_h */
