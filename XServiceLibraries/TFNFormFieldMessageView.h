//
#ifndef TFNFormFieldMessageView_h
#define TFNFormFieldMessageView_h
@import Foundation;

#include "TFNTextTooltipContentView.h"
#include "TFNTooltipView.h"

@class NSString;

@interface TFNFormFieldMessageView : TFNTooltipView {
    /* instance variables */
    TFNTextTooltipContentView *_contentView;
}

@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) id /* block */ sizeDidUpdateBlock;

/* instance methods */
- (id)init;
- (void)tfn_fontSizeChanged;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)sizeToFit;
- (void)private_setContentViewFont;
- (void)dealloc;

@end

#endif /* TFNFormFieldMessageView_h */
