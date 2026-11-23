//
#ifndef TFNLegacyButtonActiveAnimation_h
#define TFNLegacyButtonActiveAnimation_h
@import Foundation;

#include "TFNLegacyButtonAnimationType.h"

@class NSObject;

@interface TFNLegacyButtonActiveAnimation : NSObject

@property (readonly, nonatomic) TFNLegacyButtonAnimationType *animationType;

/* instance methods */
- (id)initWithAnimationType:(id)type;
- (id)init;

@end

#endif /* TFNLegacyButtonActiveAnimation_h */
