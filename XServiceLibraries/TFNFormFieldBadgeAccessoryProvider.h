//
#ifndef TFNFormFieldBadgeAccessoryProvider_h
#define TFNFormFieldBadgeAccessoryProvider_h
@import Foundation;

#include "TFNFormFieldImageAccessoryProvider.h"

@class UIImage;

@interface TFNFormFieldBadgeAccessoryProvider : TFNFormFieldImageAccessoryProvider {
    /* instance variables */
    UIImage *_alertImage;
    UIImage *_successImage;
    UIImage *_waitingImage;
}

/* instance methods */
- (long long)typeForFormFieldView:(id)view;
- (void)setType:(long long)type forFormFieldView:(id)view;
- (id)accessoryView;
- (id)private_alertImage;
- (id)private_successImage;
- (id)private_waitingImage;

@end

#endif /* TFNFormFieldBadgeAccessoryProvider_h */
