//
#ifndef _TtC4Grok21GrokTopUpPackGridView_h
#define _TtC4Grok21GrokTopUpPackGridView_h
@import Foundation;

@class Grok.GrokTopUpPack _$scSg ->, UIView, _$sSa -> Grok.GrokTopUpPack, _$sSa -> _$s13XDesignSystem6ButtonCMn;

@interface Grok.GrokTopUpPackGridView : UIView { // (Swift)
    /* instance variables */
    Grok.GrokTopUpPack _$scSg -> onSelect;
    Swift.Array -> Grok.GrokTopUpPack packs;
    Swift.Array -> nominal type descriptor for XDesignSystem.Button buttons;
}

/* instance methods */
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;

@end

#endif /* _TtC4Grok21GrokTopUpPackGridView_h */
