//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1SecurityLoginRequestCell_h
#define T1SecurityLoginRequestCell_h
@import Foundation;

#include "T1SecurityLoginRequestCellDelegate-Protocol.h"

@class TFNTableViewCell, TFSTwitterLoginRequest, UIButton, UILabel;

@interface T1SecurityLoginRequestCell : TFNTableViewCell {
    /* instance variables */
    UILabel *_messageLabel;
    UIButton *_acceptButton;
    UIButton *_denyButton;
}

@property (retain, nonatomic) TFSTwitterLoginRequest *loginRequest;
@property (weak, nonatomic) id <T1SecurityLoginRequestCellDelegate> delegate;

/* class methods */
+ (double)heightForLoginRequest:(id)request tableWidth:(double)width contentPadding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })padding;
+ (void)_getAcceptButtonFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)frame denyButtonFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)frame forContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;

/* instance methods */
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (void)layoutSubviews;
- (void)_acceptButtonTapped;
- (void)_denyButtonTapped;

@end

#endif /* T1SecurityLoginRequestCell_h */
