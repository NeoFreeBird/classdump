//
#ifndef TTAStatusBodyTextDisplayable_Protocol_h
#define TTAStatusBodyTextDisplayable_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"
#include "TFNPreferredMaxLayoutWidthSizable-Protocol.h"
#include "TTAStatusBodyTextDisplayableDelegate-Protocol.h"

@class NSArray, TFNAttributedTextModel, UIColor;

@protocol TTAStatusBodyTextDisplayable <NSObject, TFNPreferredMaxLayoutWidthSizable>

@required

@property (weak, nonatomic) id <TTAStatusBodyTextDisplayableDelegate> textViewDelegate;
@property (retain, nonatomic) NSArray *activeRanges;
@property (nonatomic) _Bool selectionPaddingEnabled;
@property (nonatomic) _Bool textLayoutAnimationEnabled;
@property (retain, nonatomic) TFNAttributedTextModel *textModel;
@property (retain, nonatomic) UIColor *selectionColor;

/* required instance methods */
- (id)hitTestForActiveRangesAtPoint:(struct CGPoint { double x0; double x1; })point;
- (struct CGSize { double x0; double x1; })actualSize;
- (_Bool)isSelectionPaddingEnabled;
- (_Bool)isTextLayoutAnimationEnabled;

@optional

@end

#endif /* TTAStatusBodyTextDisplayable_Protocol_h */
