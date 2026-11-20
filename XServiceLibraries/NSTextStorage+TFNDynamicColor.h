//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef NSTextStorage_TFNDynamicColor_h
#define NSTextStorage_TFNDynamicColor_h
@import Foundation;

@interface NSTextStorage (TFNDynamicColor)

/* instance methods */
- (id)tfn_attributedString;
- (void)setTfn_attributedString:(id)string;

@end

#endif /* NSTextStorage_TFNDynamicColor_h */
