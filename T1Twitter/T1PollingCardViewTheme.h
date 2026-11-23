//
#ifndef T1PollingCardViewTheme_h
#define T1PollingCardViewTheme_h
@import Foundation;

@class NSObject, UIColor, UIFont;

@interface T1PollingCardViewTheme : NSObject

@property (readonly, nonatomic) _Bool hasBorder;
@property (readonly, nonatomic) _Bool choiceContainerHasBorder;
@property (readonly, nonatomic) _Bool resultContainerHasBorder;
@property (readonly, nonatomic) _Bool statusContainerHasBorder;
@property (readonly, nonatomic) UIColor *borderColor;
@property (readonly, nonatomic) double borderWidth;
@property (readonly, nonatomic) double cornerRadius;
@property (readonly, nonatomic) UIColor *highlightContainerBackgroundColor;
@property (readonly, nonatomic) double highlightContainerCornerRadius;
@property (readonly, nonatomic) UIColor *voteCountAndTimeBackgroundColor;
@property (readonly, nonatomic) UIColor *voteCountAndTimeTextColor;
@property (readonly, nonatomic) UIFont *voteCountAndTimeTextFont;
@property (readonly, nonatomic) _Bool shouldUseCustomChoiceButton;
@property (readonly, nonatomic) double choiceButtonCornerRadius;
@property (readonly, nonatomic) double choiceButtonBorderWidth;
@property (readonly, nonatomic) UIColor *choiceButtonBorderColor;
@property (readonly, nonatomic) UIColor *choiceButtonBackgroundColor;
@property (readonly, nonatomic) UIFont *choiceButtonTextFont;
@property (readonly, nonatomic) UIColor *colorBarBackgroundColor;
@property (readonly, nonatomic) UIFont *choiceLabelTextFont;
@property (readonly, nonatomic) UIColor *choiceLabelTextColor;
@property (readonly, nonatomic) double pollBarCornerRadius;
@property (readonly, nonatomic) double pollBarGraphHeight;
@property (readonly, nonatomic) UIFont *choiceLabelWinnerFont;
@property (readonly, nonatomic) UIColor *choiceLabelWinnerBackgroundColor;
@property (readonly, nonatomic) UIColor *choiceButtonHighlightedBackgroundColor;
@property (readonly, nonatomic) UIColor *choiceButtonHighlightedTextColor;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } choiceCheckmarkSize;
@property (readonly, nonatomic) double imageCornerRadius;
@property (readonly, nonatomic) UIColor *imageGradientBottomColor;
@property (readonly, nonatomic) double imageInnerShadowRadius;
@property (readonly, nonatomic) UIColor *imageInnerShadowColor;
@property (readonly, nonatomic) UIColor *imageHighlightContainerBackgroundColor;

/* class methods */
+ (id)defaultTheme;
+ (id)momentsTheme;
+ (id)photoTheme;

/* instance methods */

@end

#endif /* T1PollingCardViewTheme_h */
