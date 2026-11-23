//
#ifndef _TtC9PostAbout23PostAboutDisclosureView_h
#define _TtC9PostAbout23PostAboutDisclosureView_h
@import Foundation;

@class PostAbout.PostAboutDisclosureChevronView, Swift.Bool, UIView, _$s13XDesignSystem9ListItemsCMn;

@interface PostAbout.PostAboutDisclosureView : UIView { // (Swift)
    /* instance variables */
    nominal type descriptor for XDesignSystem.ListItems header;
    PostAbout.PostAboutDisclosureChevronView chevron;
    nominal type descriptor for XDesignSystem.ListItems rows;
    Swift.Bool isExpanded;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC9PostAbout23PostAboutDisclosureView_h */
