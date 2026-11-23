//
#ifndef TFNFormFieldRemainingCharacterCountAccessoryProvider_h
#define TFNFormFieldRemainingCharacterCountAccessoryProvider_h
@import Foundation;

#include "TFNFormFieldAttributedTextAccessoryProvider.h"

@interface TFNFormFieldRemainingCharacterCountAccessoryProvider : TFNFormFieldAttributedTextAccessoryProvider

/* instance methods */
- (id)init;
- (void)setMaxCharacterCount:(long long)count forFormFieldView:(id)view;
- (long long)accessoryViewLocation;
- (void)updateAccessoryView:(id)view inFormFieldView:(id)view withText:(id)text;
- (void)private_updateCountForAccessoryView:(id)view inFormFieldView:(id)view;

@end

#endif /* TFNFormFieldRemainingCharacterCountAccessoryProvider_h */
