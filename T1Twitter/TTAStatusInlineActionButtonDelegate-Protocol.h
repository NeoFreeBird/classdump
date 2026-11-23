//
#ifndef TTAStatusInlineActionButtonDelegate_Protocol_h
#define TTAStatusInlineActionButtonDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TTAStatusInlineActionButtonDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)didTapInlineActionButton:(id)button;
- (void)didTapInlineActionButton:(id)button;
- (void)didTapInlineActionButton:(id)button withPrompt:(id)prompt menuItem:(long long)item;
- (void)didTapInlineActionButton:(id)button withPrompt:(id)prompt menuItem:(long long)item;
- (void)didTapSecondaryInlineActionButton:(id)button;
- (void)didTapInlineActionButtonFromAccessibilitySheet:(id)sheet;
- (void)didTapInlineActionButtonFromAccessibilitySheet:(id)sheet;
- (_Bool)isAlternateActionEnabledForInlineActionButton:(id)button;
- (_Bool)isAlternateActionEnabledForInlineActionButton:(id)button;
- (void)didTriggerAlternateActionInInlineActionButton:(id)button;
- (void)didTriggerAlternateActionInInlineActionButton:(id)button;
- (void)didStartBrandedAnimationFromInlineActionButton:(id)button;
- (void)didStartBrandedAnimationFromInlineActionButton:(id)button;
- (void)inlineActionButtonDidRecognizeLongPressBegan:(id)began;

@end

#endif /* TTAStatusInlineActionButtonDelegate_Protocol_h */
