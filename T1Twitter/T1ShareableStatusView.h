//
#ifndef T1ShareableStatusView_h
#define T1ShareableStatusView_h
@import Foundation;

#include "T1ConversationFocalStatusView.h"
#include "T1ShareableWatermarkView-Protocol.h"

@class NSString, UIImageView, UILabel;

@interface T1ShareableStatusView : T1ConversationFocalStatusView <T1ShareableWatermarkView> {
    /* instance variables */
    UIImageView *_logoImageView;
    UILabel *_engagementsLabel;
}

@property (nonatomic) _Bool watermarkHidden;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeWithLayoutMetrics:(id)metrics;
- (void)setViewModel:(id)model options:(unsigned long long)options account:(id)account;

@end

#endif /* T1ShareableStatusView_h */
