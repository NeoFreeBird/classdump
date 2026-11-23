//
#ifndef PTVParticipantUserTableViewCellLayoutSpec_h
#define PTVParticipantUserTableViewCellLayoutSpec_h
@import Foundation;

@class NSObject;

@interface PTVParticipantUserTableViewCellLayoutSpec : NSObject

/* class methods */
+ (double)LabelSpacing;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })ProfileImageFrame:(struct CGSize { double x0; double x1; })frame ContentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets TraitCollection:(id)collection;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })LTRProfileImageFrame:(struct CGSize { double x0; double x1; })frame ContentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets TraitCollection:(id)collection;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })LTRProfileImageFrameWithSize:(struct CGSize { double x0; double x1; })size ContainerSize:(struct CGSize { double x0; double x1; })size ContentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets TraitCollection:(id)collection;
+ (struct CGSize { double x0; double x1; })ProfileImageSizePixels;
+ (struct CGSize { double x0; double x1; })ProfileImageSizePixelsWithTraitCollection:(id)collection;
+ (struct CGSize { double x0; double x1; })ProfileImageSizePoints;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })LTRDisplayNameFrameAccessoryImageSize:(struct CGSize { double x0; double x1; })size ProfileImageSize:(struct CGSize { double x0; double x1; })size ContainerSize:(struct CGSize { double x0; double x1; })size ContentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets TraitCollection:(id)collection;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })DisplayNameFrameAccessoryImageSize:(struct CGSize { double x0; double x1; })size ContainerSize:(struct CGSize { double x0; double x1; })size ContentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets TraitCollection:(id)collection;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })DisplayNameFrameAccessoryImageSize:(struct CGSize { double x0; double x1; })size ProfileImageSize:(struct CGSize { double x0; double x1; })size ContainerSize:(struct CGSize { double x0; double x1; })size ContentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets TraitCollection:(id)collection;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })DisplayNameFrameWithDetailLabelAndAccessoryImageSize:(struct CGSize { double x0; double x1; })size ContainerSize:(struct CGSize { double x0; double x1; })size ContentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets TraitCollection:(id)collection;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })DisplayNameFrameWithNoProfileImageContainerSize:(struct CGSize { double x0; double x1; })size ContentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets TraitCollection:(id)collection;
+ (id)DisplayNameFont;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })MultiLineDisplayNameFrameAccessoryImageSize:(struct CGSize { double x0; double x1; })size ContainerSize:(struct CGSize { double x0; double x1; })size ProfileImageSize:(struct CGSize { double x0; double x1; })size Text:(id)text ContentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets TraitCollection:(id)collection;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })DetailLabelFrameAccessoryImageSize:(struct CGSize { double x0; double x1; })size ContainerSize:(struct CGSize { double x0; double x1; })size ContentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets TraitCollection:(id)collection;
+ (id)DetailLabelFont;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })LTRAccessoryImageFrame:(struct CGSize { double x0; double x1; })frame ContainerSize:(struct CGSize { double x0; double x1; })size ContentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets TraitCollection:(id)collection;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })AccessoryImageFrame:(struct CGSize { double x0; double x1; })frame ContainerSize:(struct CGSize { double x0; double x1; })size ContentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets TraitCollection:(id)collection;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })BottomBarInsetFrameWithAccessoryImageSize:(struct CGSize { double x0; double x1; })size ContainerSize:(struct CGSize { double x0; double x1; })size ContentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets TraitCollection:(id)collection;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })BottomBarInsetFrameWithAccessoryImageSize:(struct CGSize { double x0; double x1; })size ProfileImageSize:(struct CGSize { double x0; double x1; })size ContainerSize:(struct CGSize { double x0; double x1; })size ContentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets TraitCollection:(id)collection;
+ (double)CellHeightWithMultiLineDisplayNameForText:(id)text ProfileImageSize:(struct CGSize { double x0; double x1; })size AccessoryImageSize:(struct CGSize { double x0; double x1; })size ContainerSize:(struct CGSize { double x0; double x1; })size ContentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets;

@end

#endif /* PTVParticipantUserTableViewCellLayoutSpec_h */
