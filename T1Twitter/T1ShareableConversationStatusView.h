//
#ifndef T1ShareableConversationStatusView_h
#define T1ShareableConversationStatusView_h
@import Foundation;

#include "T1ShareableWatermarkView-Protocol.h"
#include "T1StandardStatusView.h"
#include "TFNLayoutMetricsSizing-Protocol.h"

@class NSString, UIImageView, UIView;

@interface T1ShareableConversationStatusView : UIView <TFNLayoutMetricsSizing, T1ShareableWatermarkView> {
    /* instance variables */
    T1StandardStatusView *_parentStatusView;
    T1StandardStatusView *_replyStatusView;
    UIImageView *_logoImageView;
}

@property (nonatomic) _Bool watermarkHidden;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)setParentViewModel:(id)model replyViewModel:(id)model account:(id)account;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeWithLayoutMetrics:(id)metrics;

@end

#endif /* T1ShareableConversationStatusView_h */
