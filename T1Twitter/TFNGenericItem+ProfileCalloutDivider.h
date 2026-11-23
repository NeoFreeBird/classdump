//
#ifndef TFNGenericItem_ProfileCalloutDivider_h
#define TFNGenericItem_ProfileCalloutDivider_h
@import Foundation;

@interface TFNGenericItem (ProfileCalloutDivider)

/* class methods */
+ (id)profileDividerWithTitle:(id)title font:(id)font lineBreakMode:(long long)mode multipleLines:(_Bool)lines dismissBlock:(id /* block */)block selectionStyle:(long long)style;

@end

#endif /* TFNGenericItem_ProfileCalloutDivider_h */
