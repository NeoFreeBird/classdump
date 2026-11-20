//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef ONBToggleWrapperComponentTransformer_h
#define ONBToggleWrapperComponentTransformer_h
@import Foundation;

#include "ONBComponentTransformer.h"
#include "ONBComponentTransformerController.h"

@interface ONBToggleWrapperComponentTransformer : ONBComponentTransformer {
    /* instance variables */
    ONBComponentTransformerController *_onTransformerController;
    ONBComponentTransformerController *_offTransformerController;
}

/* class methods */
+ (Class)mutableComponentClass;

/* instance methods */
- (void)setControllerDelegate:(id)delegate;
- (id)componentView;
- (void)private_toggleAction;

@end

#endif /* ONBToggleWrapperComponentTransformer_h */
