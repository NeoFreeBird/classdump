//
#ifndef PTVAudienceSelectorViewLayoutSpec_h
#define PTVAudienceSelectorViewLayoutSpec_h
@import Foundation;

@class NSObject;

@interface PTVAudienceSelectorViewLayoutSpec : NSObject

/* class methods */
+ (struct CGSize { double x0; double x1; })ProfileSize;
+ (double)CaretViewSpacing;
+ (double)TitleViewSpacing;
+ (struct { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x3; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x4; })LayoutInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect Direction:(long long)direction TitleLabelSize:(struct CGSize { double x0; double x1; })size SubtitleLabelSize:(struct CGSize { double x0; double x1; })size CaretViewSize:(struct CGSize { double x0; double x1; })size;

@end

#endif /* PTVAudienceSelectorViewLayoutSpec_h */
