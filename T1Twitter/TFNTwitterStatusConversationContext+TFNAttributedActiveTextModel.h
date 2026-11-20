//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNTwitterStatusConversationContext_TFNAttributedActiveTextModel_h
#define TFNTwitterStatusConversationContext_TFNAttributedActiveTextModel_h
@import Foundation;

@interface TFNTwitterStatusConversationContext (TFNAttributedActiveTextModel)

/* class methods */
+ (id)socialTextFont;
+ (id)socialTextFixedFont;
+ (id)socialTextFixedDarkBackgroundTextColor;

/* instance methods */
- (id)socialTextAttributedActiveTextViewModelWithLoadingAccount:(id)account tappable:(_Bool)tappable darkBackground:(_Bool)background useFixedFont:(_Bool)font useFixedDarkBackgroundTextColor:(_Bool)color;
- (id)_tfn_activeRangeParserWithHTMLString:(id)htmlstring;

@end

#endif /* TFNTwitterStatusConversationContext_TFNAttributedActiveTextModel_h */
