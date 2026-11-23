//
#ifndef PTVSelectableLinkTextView_h
#define PTVSelectableLinkTextView_h
@import Foundation;

@class UITextView;

@interface PTVSelectableLinkTextView : UITextView

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame textContainer:(id)container;
- (_Bool)pointInside:(struct CGPoint { double x0; double x1; })inside withEvent:(id)event;
- (_Bool)hasLinkAtPosition:(id)position;
- (_Bool)hasLinkAtIndex:(long long)index;

@end

#endif /* PTVSelectableLinkTextView_h */
