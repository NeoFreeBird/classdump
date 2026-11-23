//
#ifndef _TtCC14T1TwitterSwift19VoiceTabItemAdapterP33_0144DEFE1831AC6D636B4B475BC6ADF28BaseCell_h
#define _TtCC14T1TwitterSwift19VoiceTabItemAdapterP33_0144DEFE1831AC6D636B4B475BC6ADF28BaseCell_h
@import Foundation;

#include "TFNLayoutMetricsEnvironment-Protocol.h"

@class TFNTableViewCell;

@interface T1TwitterSwift.VoiceTabItemAdapter.(BaseCell in _0144DEFE1831AC6D636B4B475BC6ADF2) : TFNTableViewCell <TFNLayoutMetricsEnvironment> { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *imagePipeline;
    NSNumber"16@0:8 *userBadger;
    NSNumber"16@0:8 *eventBlock;
    NSNumber"16@0:8 *containerView;
    NSNumber"16@0:8 *socialProofView;
    NSNumber"16@0:8 *stackViewLeadingConstraint;
    NSNumber"16@0:8 *stackViewTrailingConstraint;
    NSNumber"16@0:8 *$__lazy_storage_$_stackView;
    NSNumber"16@0:8 *caretButtonColor;
    NSNumber"16@0:8 *$__lazy_storage_$_caretButton;
    NSNumber"16@0:8 *viewModel;
}

/* instance methods */
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (id)initWithCoder:(id)coder;
- (void)touchesBegan:(id)began withEvent:(id)event;
- (void)touchesEnded:(id)ended withEvent:(id)event;
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;
- (void)layoutMetricsDidChange:(id)change to:(id)to;
- (void)handleTapOnCaret;
- (void)handleTapOnCell;

@end

#endif /* _TtCC14T1TwitterSwift19VoiceTabItemAdapterP33_0144DEFE1831AC6D636B4B475BC6ADF28BaseCell_h */
