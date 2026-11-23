//
#ifndef TUITwitterTooltip_h
#define TUITwitterTooltip_h
@import Foundation;

@class NSString, TFNTextTooltipContentView, TFNTooltip, TFNTooltipView, UIColor, UIFont;

@interface TUITwitterTooltip : TFNTooltip {
    /* instance variables */
    TFNTooltipView *_tooltipView;
}

@property (retain, nonatomic) TFNTextTooltipContentView *textContentView;
@property (copy, nonatomic) NSString *labelText;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *labelColor;
@property (retain, nonatomic) UIFont *labelFont;
@property (nonatomic) _Bool shouldCenterLabel;

/* class methods */
+ (id)spacesTooltipWithText:(id)text;
+ (id)tooltipWithText:(id)text;
+ (id)tooltipWithText:(id)text delegate:(id)delegate;
+ (id)tooltipWithText:(id)text delegate:(id)delegate permittedArrowDirections:(unsigned long long)directions;
+ (id)tooltipWithText:(id)text delegate:(id)delegate permittedArrowDirections:(unsigned long long)directions tapAnywhereToDismiss:(_Bool)dismiss;

/* instance methods */
- (id)init;

@end

#endif /* TUITwitterTooltip_h */
