//
#ifndef TSFExclusiveSpaceNotSuperFollowingErrorView_h
#define TSFExclusiveSpaceNotSuperFollowingErrorView_h
@import Foundation;

#include "TSFExclusiveSpaceModel-Protocol.h"
#include "TSFExclusiveSpaceNotSuperFollowingErrorViewDelegate-Protocol.h"

@class UIView;

@interface TSFExclusiveSpaceNotSuperFollowingErrorView : UIView { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *stackView;
    NSNumber"16@0:8 *titleLabel;
    NSNumber"16@0:8 *footerLabel;
    NSNumber"16@0:8 *$__lazy_storage_$_avatarPreviewView;
    NSNumber"16@0:8 *$__lazy_storage_$_avatarView;
    NSNumber"16@0:8 *$__lazy_storage_$_superFollowButton;
    NSNumber"16@0:8 *$__lazy_storage_$_buttonContainerView;
}

@property (nonatomic, retain) id <TSFExclusiveSpaceModel> exclusiveSpaceModel;
@property (nonatomic, weak) id <TSFExclusiveSpaceNotSuperFollowingErrorViewDelegate> delegate;

/* instance methods */
- (id)initWithExclusiveSpaceModel:(id)model;
- (id)initWithCoder:(id)coder;
- (void)superFollowButtonTapped;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* TSFExclusiveSpaceNotSuperFollowingErrorView_h */
