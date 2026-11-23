//
#ifndef TFNLegacyFormTextInputCustomizationDelegate_Protocol_h
#define TFNLegacyFormTextInputCustomizationDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFNLegacyFormTextInputCustomizationDelegate <NSObject>

@required

/* required instance methods */
- (void)formTextInputDidChangeText:(id)text fromUserInteraction:(_Bool)interaction;
- (void)formTextInput:(id)input clearButtonBoundsDidChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })change;

@optional

@end

#endif /* TFNLegacyFormTextInputCustomizationDelegate_Protocol_h */
