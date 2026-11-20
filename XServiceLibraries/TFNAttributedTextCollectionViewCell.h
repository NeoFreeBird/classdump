//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNAttributedTextCollectionViewCell_h
#define TFNAttributedTextCollectionViewCell_h
@import Foundation;

#include "TFNAttributedTextView.h"
#include "TFNCollectionViewCell.h"

@interface TFNAttributedTextCollectionViewCell : TFNCollectionViewCell

@property (nonatomic) _Bool useTilingTextView;
@property (nonatomic) _Bool useHorizontallyCenteredTextView;
@property (readonly, nonatomic) TFNAttributedTextView *attributedTextView;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (id)accessibilityLabel;
- (id)accessibilityIdentifier;

@end

#endif /* TFNAttributedTextCollectionViewCell_h */
