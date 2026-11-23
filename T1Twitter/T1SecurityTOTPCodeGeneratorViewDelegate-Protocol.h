//
#ifndef T1SecurityTOTPCodeGeneratorViewDelegate_Protocol_h
#define T1SecurityTOTPCodeGeneratorViewDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1SecurityTOTPCodeGeneratorViewDelegate <NSObject>

@required

/* required instance methods */
- (void)totpCodeGeneratorView:(id)view didTapHereButton:(id)button;

@optional

@end

#endif /* T1SecurityTOTPCodeGeneratorViewDelegate_Protocol_h */
