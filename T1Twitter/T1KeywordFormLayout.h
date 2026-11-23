//
#ifndef T1KeywordFormLayout_h
#define T1KeywordFormLayout_h
@import Foundation;

#include "T1KeywordForm.h"

@class UICollectionViewFlowLayout;

@interface T1KeywordFormLayout : UICollectionViewFlowLayout

@property (weak, nonatomic) T1KeywordForm *form;

/* instance methods */
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;

@end

#endif /* T1KeywordFormLayout_h */
