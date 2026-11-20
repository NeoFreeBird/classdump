//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVStarSelectionView_h
#define PTVStarSelectionView_h
@import Foundation;

#include "PTVStarSelectionViewDelegate-Protocol.h"

@class NSArray, UILabel, UIView;

@interface PTVStarSelectionView : UIView {
    /* instance variables */
    NSArray *_starButtons;
    unsigned long long _starSize;
    UILabel *_badLabel;
    UILabel *_goodLabel;
}

@property (weak, nonatomic) id <PTVStarSelectionViewDelegate> delegate;
@property (nonatomic) unsigned long long selectedValue;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)setStarSize:(unsigned long long)size;
- (void)_buttonPressed:(id)pressed;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (struct CGSize { double x0; double x1; })buttonSize;
- (void)_alignViewToRightStar:(id)star top:(double)top;
- (void)_alignViewToLeftStar:(id)star top:(double)top;

@end

#endif /* PTVStarSelectionView_h */
