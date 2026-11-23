//
#ifndef T1SecurityTemporaryPasswordViewDelegate_Protocol_h
#define T1SecurityTemporaryPasswordViewDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1SecurityTemporaryPasswordViewDelegate <NSObject>

@required

/* required instance methods */
- (void)temporaryPasswordView:(id)view didTapGenerateButton:(id)button;
- (void)temporaryPasswordView:(id)view didTapTemporaryPasswordLabel:(id)label;

@optional

@end

#endif /* T1SecurityTemporaryPasswordViewDelegate_Protocol_h */
