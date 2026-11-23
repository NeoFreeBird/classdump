//
#ifndef ONBInlineFeedbackComponentTransformer_h
#define ONBInlineFeedbackComponentTransformer_h
@import Foundation;

#include "ONBComponentTransformer.h"

@interface ONBInlineFeedbackComponentTransformer : ONBComponentTransformer

/* class methods */
+ (Class)mutableComponentClass;

/* instance methods */
- (id)componentView;
- (id)private_inlineFeedbackItem;
- (id)private_inlineFeedbackButtonType;
- (long long)private_inlineFeedbackButtonStyle;

@end

#endif /* ONBInlineFeedbackComponentTransformer_h */
