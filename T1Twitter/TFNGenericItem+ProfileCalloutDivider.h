//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNGenericItem_ProfileCalloutDivider_h
#define TFNGenericItem_ProfileCalloutDivider_h
@import Foundation;

@interface TFNGenericItem (ProfileCalloutDivider)

/* class methods */
+ (id)profileDividerWithTitle:(id)title font:(id)font lineBreakMode:(long long)mode multipleLines:(_Bool)lines dismissBlock:(id /* block */)block selectionStyle:(long long)style;

@end

#endif /* TFNGenericItem_ProfileCalloutDivider_h */
