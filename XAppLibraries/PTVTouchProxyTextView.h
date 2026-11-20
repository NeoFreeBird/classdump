//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVTouchProxyTextView_h
#define PTVTouchProxyTextView_h
@import Foundation;

@class NSTimer, UITextView, UIView;

@interface PTVTouchProxyTextView : UITextView {
    /* instance variables */
    PTVTouchProxyTextView *_weakSelf;
}

@property (copy, nonatomic) id /* block */ linkSelectionCallback;
@property (retain, nonatomic) UIView *highlightView;
@property (retain, nonatomic) NSTimer *hideHighlightViewTimer;

/* instance methods */
- (void)dealloc;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (void)touchesBegan:(id)began withEvent:(id)event;
- (void)touchesMoved:(id)moved withEvent:(id)event;
- (void)touchesEnded:(id)ended withEvent:(id)event;
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame textContainer:(id)container;
- (void)handleTap:(id)tap;
- (_Bool)didTouchLink:(struct CGPoint { double x0; double x1; })link;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForLinkAtTouchPoint:(struct CGPoint { double x0; double x1; })point;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForLinkAtTouchPoint:(struct CGPoint { double x0; double x1; })point constrainedByLinkValues:(id)values;
- (id)stringForLinkAtTouchPoint:(struct CGPoint { double x0; double x1; })point;
- (void)startTimerToHideHighlightView;
- (void)hideHighlightView;
- (void)showHighlightViewAtPoint:(struct CGPoint { double x0; double x1; })point;
- (void)showHighlightViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* PTVTouchProxyTextView_h */
