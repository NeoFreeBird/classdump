//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1KeywordFormAppearance_h
#define T1KeywordFormAppearance_h
@import Foundation;

@class TFNLegacyFormAppearance;

@interface T1KeywordFormAppearance : TFNLegacyFormAppearance

/* instance methods */
- (id)validityIndicatorImageForFormField:(id)field validityState:(unsigned long long)state;
- (struct CGSize { double x0; double x1; })validityIndicatorSizeForFormField:(id)field validityState:(unsigned long long)state;
- (id)inputDisabledBackgroundColor;
- (double)lineSpacingForLayoutMetrics:(id)metrics;

@end

#endif /* T1KeywordFormAppearance_h */
