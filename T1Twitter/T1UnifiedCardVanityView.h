//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1UnifiedCardVanityView_h
#define T1UnifiedCardVanityView_h
@import Foundation;

#include "T1UnifiedCardVanityViewDelegate-Protocol.h"

@class TFNButton, UILabel, UIStackView, UITapGestureRecognizer, UIView;

@interface T1UnifiedCardVanityView : UIView

@property (retain, nonatomic) UIStackView *containerStackView;
@property (retain, nonatomic) UIStackView *labelStackView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *urlLabel;
@property (retain, nonatomic) UIView *spacerView;
@property (retain, nonatomic) TFNButton *ctaButton;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (weak, nonatomic) id <T1UnifiedCardVanityViewDelegate> delegate;

/* class methods */
+ (struct CGSize { double x0; double x1; })preferredSizeForMaxWidth:(unsigned long long)width;

/* instance methods */
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)configureWithVanityURLString:(id)urlstring showsAdDisclosure:(_Bool)disclosure vanityTitle:(id)title ctaButtonTitle:(id)title customCTAButtonBackgroundColor:(id)color isViewTappable:(_Bool)tappable;
- (void)_didTapView;

@end

#endif /* T1UnifiedCardVanityView_h */
