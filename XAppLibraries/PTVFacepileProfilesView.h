//
#ifndef PTVFacepileProfilesView_h
#define PTVFacepileProfilesView_h
@import Foundation;

@class NSMutableArray, UIImage, UIView;

@interface PTVFacepileProfilesView : UIView

@property (retain, nonatomic) NSMutableArray *profileImageViews;
@property (retain, nonatomic) UIImage *facepileMaskImage;
@property (readonly, nonatomic) double avatarImageSize;

/* instance methods */
- (id)initWithAvatarImageSize:(double)size;
- (void)configureAvatarsWithUsers:(id)users;
- (void)createAvatarImageViewsWithUsers:(id)users;
- (void)removeProfileImageViewsIfNeeded;

@end

#endif /* PTVFacepileProfilesView_h */
