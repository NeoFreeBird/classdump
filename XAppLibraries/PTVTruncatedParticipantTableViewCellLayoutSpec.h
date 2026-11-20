//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVTruncatedParticipantTableViewCellLayoutSpec_h
#define PTVTruncatedParticipantTableViewCellLayoutSpec_h
@import Foundation;

@class NSObject;

@interface PTVTruncatedParticipantTableViewCellLayoutSpec : NSObject

/* class methods */
+ (id)ContentFont;
+ (id)SecondaryFont;
+ (id)TitleAttributed:(id)attributed SecondaryTitle:(id)title Color:(id)color;
+ (id)CountAttributed:(id)attributed Color:(id)color;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })LTRTitleLabelFrameWithAttributedTitle:(id)title SuperviewSize:(struct CGSize { double x0; double x1; })size TraitCollection:(id)collection;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })TitleLabelFrameWithAttributedTitle:(id)title SuperviewSize:(struct CGSize { double x0; double x1; })size TraitCollection:(id)collection;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })LTRTruncationCountBackgroundFrameWithSuperViewSize:(struct CGSize { double x0; double x1; })size TraitCollection:(id)collection;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })TruncationCountBackgroundFrameWithSuperViewSize:(struct CGSize { double x0; double x1; })size TraitCollection:(id)collection;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })TruncationCountLabelFrameWithSuperViewSize:(struct CGSize { double x0; double x1; })size TraitCollection:(id)collection;
+ (double)CircularBorderWidth;

@end

#endif /* PTVTruncatedParticipantTableViewCellLayoutSpec_h */
