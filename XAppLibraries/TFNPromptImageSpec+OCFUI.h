//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNPromptImageSpec_OCFUI_h
#define TFNPromptImageSpec_OCFUI_h
@import Foundation;

@interface TFNPromptImageSpec (OCFUI)

/* class methods */
+ (id)imageSpecForHeaderImageType:(long long)type image:(id)image accountID:(id)id placeholderImageProvider:(id /* block */)provider;
+ (long long)private_imageLayoutForImageType:(long long)type;

/* instance methods */
- (id)flexibleLayoutItem;

@end

#endif /* TFNPromptImageSpec_OCFUI_h */
