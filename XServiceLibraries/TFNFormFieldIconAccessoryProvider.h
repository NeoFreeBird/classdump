//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
