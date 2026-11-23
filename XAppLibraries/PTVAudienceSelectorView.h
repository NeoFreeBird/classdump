//
#ifndef PTVAudienceSelectorView_h
#define PTVAudienceSelectorView_h
@import Foundation;

#include "PTVAudienceListView.h"
#include "PTVAudienceProfileView.h"
#include "PTVAudienceReference.h"

@class UIControl, UIImageView, UILabel;

@interface PTVAudienceSelectorView : UIControl {
    /* instance variables */
    PTVAudienceProfileView *_audienceProfileView;
    PTVAudienceListView *_titleLabel;
    UILabel *_subtitleLabel;
    UIImageView *_caretView;
    _Bool _privateBroadcastsAllowed;
    PTVAudienceReference *_audienceReference;
}

@property (nonatomic) long long style;
@property (nonatomic) long long publicAudienceType;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)setEnabled:(_Bool)enabled;
- (void)setSelected:(_Bool)selected;
- (void)setupPTVAudienceSelectorView;
- (struct { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x3; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x4; })calculateLayoutInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (void)styleDidChange;
- (id)audienceProfileView;
- (id)titleLabel;
- (id)subtitleLabel;
- (void)updateTitleLabelText;
- (void)updateSubtitleLabelText;
- (void)updateLabelText;
- (id)caretView;
- (void)updateCaretView;
- (void)setPrivateBroadcastsAllowed:(_Bool)allowed;
- (void)setAudienceReference:(id)reference;

@end

#endif /* PTVAudienceSelectorView_h */
