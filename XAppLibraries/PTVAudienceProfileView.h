//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVAudienceProfileView_h
#define PTVAudienceProfileView_h
@import Foundation;

#include "PTVAmplifyProgramSelectionIconView.h"
#include "PTVProfileImageView.h"

@class UIImage, UIImageView, UIView;

@interface PTVAudienceProfileView : UIView {
    /* instance variables */
    UIImageView *_audienceIconView;
    PTVProfileImageView *_profileImageView;
    PTVAmplifyProgramSelectionIconView *_amplifyProgramIconView;
    _Bool _isPrivateBroadcast;
    UIImage *_publicProfileImage;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)setupPTVAudienceProfileView;
- (void)updateCornerRadius;
- (void)setupAudienceIcon;
- (id)publicAudienceIcon;
- (id)privateAudienceIcon;
- (id)groupAudienceIcon;
- (void)updateAudienceIconViewIsGroupBroadcast:(_Bool)broadcast;
- (void)setupAmplifyProgramIcon;
- (void)setupProfileImageView;
- (void)setProfileImageFromEntity:(id)entity;
- (void)setProfileImageFromURL:(id)url;
- (void)setPublicBroadcastImage:(id)image;
- (void)setAudienceReference:(id)reference;
- (void)setIsPrivateBroadcast:(_Bool)broadcast;

@end

#endif /* PTVAudienceProfileView_h */
