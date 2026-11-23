//
#ifndef T1NudgeQuotedStatusPreviewView_h
#define T1NudgeQuotedStatusPreviewView_h
@import Foundation;

#include "T1StatusViewModel-Protocol.h"

@class TFNTwitterAccount, UIView;

@interface T1NudgeQuotedStatusPreviewView : UIView

@property (retain, nonatomic) UIView *statusView;
@property (readonly, nonatomic) TFNTwitterAccount *account;
@property (readonly, nonatomic) id <T1StatusViewModel> status;
@property (nonatomic) double preferredMaxLayoutWidth;

/* instance methods */
- (id)initWithStatus:(id)status account:(id)account;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

@end

#endif /* T1NudgeQuotedStatusPreviewView_h */
