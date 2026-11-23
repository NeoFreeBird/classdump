//
#ifndef _TtC14T1TwitterSwiftP33_2431C5F182B8D4B70AC761A11E5247FC21VoiceRoomTutorialItem_h
#define _TtC14T1TwitterSwiftP33_2431C5F182B8D4B70AC761A11E5247FC21VoiceRoomTutorialItem_h
@import Foundation;

#include "TFNAttributedTextViewDelegate-Protocol.h"

@class UIView;

@interface T1TwitterSwift.(VoiceRoomTutorialItem in _2431C5F182B8D4B70AC761A11E5247FC) : UIView <TFNAttributedTextViewDelegate> { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *iconView;
    NSNumber"16@0:8 *titleLabel;
    NSNumber"16@0:8 *detailLabel;
    NSNumber"16@0:8 *linkTextView;
    NSNumber"16@0:8 *linkTarget;
    NSNumber"16@0:8 *textStackView;
    NSNumber"16@0:8 *delegate;
}

/* instance methods */
- (void)attributedTextView:(id)view didTapRange:(id)range rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (id)initWithCoder:(id)coder;
- (void)handleLinkLabelTapped;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC14T1TwitterSwiftP33_2431C5F182B8D4B70AC761A11E5247FC21VoiceRoomTutorialItem_h */
