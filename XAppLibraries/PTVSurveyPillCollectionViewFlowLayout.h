//
#ifndef PTVSurveyPillCollectionViewFlowLayout_h
#define PTVSurveyPillCollectionViewFlowLayout_h
@import Foundation;

@class UICollectionViewFlowLayout;

@interface PTVSurveyPillCollectionViewFlowLayout : UICollectionViewFlowLayout

/* instance methods */
- (_Bool)flipsHorizontallyInOppositeLayoutDirection;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (id)layoutAttributesForItemAtIndexPath:(id)path;

@end

#endif /* PTVSurveyPillCollectionViewFlowLayout_h */
