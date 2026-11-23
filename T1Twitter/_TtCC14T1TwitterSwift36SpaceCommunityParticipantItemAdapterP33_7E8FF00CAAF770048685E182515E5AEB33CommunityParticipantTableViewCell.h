//
#ifndef _TtCC14T1TwitterSwift36SpaceCommunityParticipantItemAdapterP33_7E8FF00CAAF770048685E182515E5AEB33CommunityParticipantTableViewCell_h
#define _TtCC14T1TwitterSwift36SpaceCommunityParticipantItemAdapterP33_7E8FF00CAAF770048685E182515E5AEB33CommunityParticipantTableViewCell_h
@import Foundation;

#include "TUIImageViewFetchHelperDelegate-Protocol.h"

@class TFNTableViewCell;

@interface T1TwitterSwift.SpaceCommunityParticipantItemAdapter.(CommunityParticipantTableViewCell in _7E8FF00CAAF770048685E182515E5AEB) : TFNTableViewCell <TUIImageViewFetchHelperDelegate> { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *hostViewController;
    NSNumber"16@0:8 *communityModelObserver;
    NSNumber"16@0:8 *communityModel;
    NSNumber"16@0:8 *$__lazy_storage_$_thumbnailImageView;
    NSNumber"16@0:8 *$__lazy_storage_$_nameLabel;
    NSNumber"16@0:8 *$__lazy_storage_$_descriptionLabel;
    NSNumber"16@0:8 *$__lazy_storage_$_textSubStackView;
    NSNumber"16@0:8 *$__lazy_storage_$_actionButton;
    NSNumber"16@0:8 *$__lazy_storage_$_joinInteraction;
    NSNumber"16@0:8 *$__lazy_storage_$_contentStackView;
    NSNumber"16@0:8 *context;
}

/* instance methods */
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (id)initWithCoder:(id)coder;
- (void)cleanup;
- (void)onActionButtonTap:(id)tap;
- (id)tui_focusRectanglesForFocusMode:(long long)mode inBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds forFetchHelper:(id)helper;
- (long long)tui_scaleAspectFillFocusModeForFetchHelper:(id)helper;

@end

#endif /* _TtCC14T1TwitterSwift36SpaceCommunityParticipantItemAdapterP33_7E8FF00CAAF770048685E182515E5AEB33CommunityParticipantTableViewCell_h */
