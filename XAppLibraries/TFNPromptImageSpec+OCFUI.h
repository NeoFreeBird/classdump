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
