//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVParticipantTableViewCellLayoutSpec_h
#define PTVParticipantTableViewCellLayoutSpec_h
@import Foundation;

@class NSObject;

@interface PTVParticipantTableViewCellLayoutSpec : NSObject

/* class methods */
+ (double)CellHeight;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })InnerPadding;
+ (struct CGSize { double x0; double x1; })PreferredProfileSizePoints;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })LTRAvatarFrameWithTraitCollection:(id)collection;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })AvatarFrame:(double)frame TraitCollection:(id)collection;
+ (id)DisplayNameFont;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })LTRDisplayNameFrame:(struct CGSize { double x0; double x1; })frame HeartLabelVisible:(_Bool)visible AttributedDisplayName:(id)name IsFollowing:(_Bool)following FollowingIconSize:(struct CGSize { double x0; double x1; })size TraitCollection:(id)collection;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })DisplayNameFrameWithLTRFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })ltrframe ContainerSize:(struct CGSize { double x0; double x1; })size;
+ (double)XSpacingBetweenParticipantNameAndEachIcon;
+ (id)FollowingIcon;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })FollowingIconFrame:(struct CGSize { double x0; double x1; })frame LTRDisplayNameFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame FollowingIconSize:(struct CGSize { double x0; double x1; })size TraitCollection:(id)collection;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })LTRFollowingIconFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame FollowingIconSize:(struct CGSize { double x0; double x1; })size TraitCollection:(id)collection;
+ (id)HeartsFont;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })HeartFrame:(struct CGSize { double x0; double x1; })frame ContainerWidth:(double)width TraitCollection:(id)collection;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })LTRHeartLabelFrame:(struct CGSize { double x0; double x1; })frame DisplayNameRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect TraitCollection:(id)collection;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })HeartLabelFrame:(struct CGSize { double x0; double x1; })frame LTRDisplayNameRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect TraitCollection:(id)collection;

@end

#endif /* PTVParticipantTableViewCellLayoutSpec_h */
