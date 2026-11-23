//
#ifndef TFNFormFieldIconAccessoryProvider_h
#define TFNFormFieldIconAccessoryProvider_h
@import Foundation;

#include "TFNFormFieldImageAccessoryProvider.h"

@class UIImage;

@interface TFNFormFieldIconAccessoryProvider : TFNFormFieldImageAccessoryProvider {
    /* instance variables */
    UIImage *_searchImage;
}

/* instance methods */
- (long long)typeForFormFieldView:(id)view;
- (void)setType:(long long)type forFormFieldView:(id)view;
- (long long)accessoryViewLocation;
- (id)private_searchImage;

@end

#endif /* TFNFormFieldIconAccessoryProvider_h */
