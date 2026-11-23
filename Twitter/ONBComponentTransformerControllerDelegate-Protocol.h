//
#ifndef ONBComponentTransformerControllerDelegate_Protocol_h
#define ONBComponentTransformerControllerDelegate_Protocol_h
@import Foundation;

#include "ONBComponentTransformerDelegate-Protocol.h"

@protocol ONBComponentTransformerControllerDelegate <ONBComponentTransformerDelegate>

@required

/* required instance methods */
- (void)onboardingComponentTransformerController:(id)controller didTapShowMore:(id)more;

@optional

@end

#endif /* ONBComponentTransformerControllerDelegate_Protocol_h */
