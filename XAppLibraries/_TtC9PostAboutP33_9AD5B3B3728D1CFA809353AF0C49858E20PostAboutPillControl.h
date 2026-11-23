//
#ifndef _TtC9PostAboutP33_9AD5B3B3728D1CFA809353AF0C49858E20PostAboutPillControl_h
#define _TtC9PostAboutP33_9AD5B3B3728D1CFA809353AF0C49858E20PostAboutPillControl_h
@import Foundation;

@class UIControl;

@interface PostAbout.(PostAboutPillControl in _9AD5B3B3728D1CFA809353AF0C49858E) : UIControl { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 pill;
    @40@0:8:16@24@32 pillContentView;
    @40@0:8:16@24@32 label;
    @40@0:8:16@24@32 iconView;
    @40@0:8:16@24@32 $__lazy_storage_$_pressEffect;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;
@property (nonatomic) _Bool highlighted;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)traitCollectionDidChange:(id)change;
- (void)layoutSubviews;
- (_Bool)isHighlighted;
- (void)didTap;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC9PostAboutP33_9AD5B3B3728D1CFA809353AF0C49858E20PostAboutPillControl_h */
