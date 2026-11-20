//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1ConversationVideoMonetizationSettingsView_h
#define T1ConversationVideoMonetizationSettingsView_h
@import Foundation;

@class T1InfoTextView, TFNTappableHighlightView, UIView;

@interface T1ConversationVideoMonetizationSettingsView : UIView

@property (readonly, nonatomic) T1InfoTextView *infoTextView;
@property (readonly, nonatomic) TFNTappableHighlightView *highlightView;
@property (copy, nonatomic) id /* block */ tapActionBlock;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)settingsTapped;
- (void)updateWithLayoutSpecIfNeeded:(id)needed;

@end

#endif /* T1ConversationVideoMonetizationSettingsView_h */
