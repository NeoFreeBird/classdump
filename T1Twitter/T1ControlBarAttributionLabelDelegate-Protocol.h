//
#ifndef T1ControlBarAttributionLabelDelegate_Protocol_h
#define T1ControlBarAttributionLabelDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1ControlBarAttributionLabelDelegate <NSObject>

@required

/* required instance methods */
- (void)didTapAttributionLabel:(id)label;

@optional

@end

#endif /* T1ControlBarAttributionLabelDelegate_Protocol_h */
