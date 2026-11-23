//
#ifndef PTVParticipantsBarViewLayoutSpec_h
#define PTVParticipantsBarViewLayoutSpec_h
@import Foundation;

@class NSObject;

@interface PTVParticipantsBarViewLayoutSpec : NSObject

/* class methods */
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })DefaultFrame;
+ (double)DefaultHeight;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })SectionInsets;
+ (struct CGSize { double x0; double x1; })ContributorCellSize;
+ (struct CGSize { double x0; double x1; })SectionDividerSize;
+ (double)ItemSpacing;

@end

#endif /* PTVParticipantsBarViewLayoutSpec_h */
