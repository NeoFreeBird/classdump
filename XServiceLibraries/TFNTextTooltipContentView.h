//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNTextTooltipContentView_h
#define TFNTextTooltipContentView_h
@import Foundation;

#include "TFNTooltipContentView-Protocol.h"

@class NSString, UIColor, UIFont, UILabel, UIView;

@interface TFNTextTooltipContentView : UIView <TFNTooltipContentView>

@property (retain, nonatomic) UILabel *label;
@property (copy, nonatomic) NSString *labelText;
@property (retain, nonatomic) UIFont *labelFont;
@property (retain, nonatomic) UIColor *labelColor;
@property (nonatomic) _Bool shouldCenterLabel;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } contentEdgeInsets;
@property (copy, nonatomic) id /* block */ contentSizeChangedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)tfn_fontSizeChanged;
- (struct CGSize { double x0; double x1; })private_labelSizeThatFits:(struct CGSize { double x0; double x1; })fits;

@end

#endif /* TFNTextTooltipContentView_h */
