//
#ifndef TFNFormFieldDisclosureIndicatorAccessoryProvider_h
#define TFNFormFieldDisclosureIndicatorAccessoryProvider_h
@import Foundation;

#include "TFNFormFieldImageAccessoryProvider.h"

@class UIImage;

@interface TFNFormFieldDisclosureIndicatorAccessoryProvider : TFNFormFieldImageAccessoryProvider {
    /* instance variables */
    UIImage *_downImage;
    UIImage *_rightImage;
}

/* instance methods */
- (void)setType:(long long)type forFormFieldView:(id)view;
- (id)private_downImage;
- (id)private_rightImage;

@end

#endif /* TFNFormFieldDisclosureIndicatorAccessoryProvider_h */
