//
#ifndef PTVVideoOrAudioOnlyButton_h
#define PTVVideoOrAudioOnlyButton_h
@import Foundation;

#include "PTVForcedActivityIndicatorView.h"
#include "PTVGuestContainerView.h"

@class UILabel, UIView;

@interface PTVVideoOrAudioOnlyButton : UIView {
    /* instance variables */
    PTVVideoOrAudioOnlyButton *_weakSelf;
    PTVForcedActivityIndicatorView *_loadingIndicatorView;
}

@property (readonly, nonatomic) PTVGuestContainerView *preview;
@property (readonly, nonatomic) UILabel *label;
@property (nonatomic) _Bool shouldAnimateLoadingIndicator;

/* instance methods */
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })previewSizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (id)initWithLabel:(id)label;
- (void)setParticipantIndex:(long long)index;

@end

#endif /* PTVVideoOrAudioOnlyButton_h */
