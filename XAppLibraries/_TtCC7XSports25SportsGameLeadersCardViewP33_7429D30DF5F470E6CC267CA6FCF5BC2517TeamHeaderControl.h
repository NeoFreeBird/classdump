//
#ifndef _TtCC7XSports25SportsGameLeadersCardViewP33_7429D30DF5F470E6CC267CA6FCF5BC2517TeamHeaderControl_h
#define _TtCC7XSports25SportsGameLeadersCardViewP33_7429D30DF5F470E6CC267CA6FCF5BC2517TeamHeaderControl_h
@import Foundation;

@class UIControl;

@interface XSports.SportsGameLeadersCardView.(TeamHeaderControl in _7429D30DF5F470E6CC267CA6FCF5BC25) : UIControl { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 onSelect;
    @40@0:8:16@24@32 imagePipeline;
    @40@0:8:16@24@32 side;
    @40@0:8:16@24@32 logoView;
    @40@0:8:16@24@32 abbreviationLabel;
    @40@0:8:16@24@32 $__lazy_storage_$_logoLoader;
    @40@0:8:16@24@32 team;
}

@property (nonatomic) _Bool highlighted;

/* instance methods */
- (_Bool)isHighlighted;
- (id)initWithCoder:(id)coder;
- (void)traitCollectionDidChange:(id)change;
- (void)layoutSubviews;
- (_Bool)pointInside:(struct CGPoint { double x0; double x1; })inside withEvent:(id)event;
- (void)didTap;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtCC7XSports25SportsGameLeadersCardViewP33_7429D30DF5F470E6CC267CA6FCF5BC2517TeamHeaderControl_h */
