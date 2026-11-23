//
#ifndef TCRComposeTextView_h
#define TCRComposeTextView_h
@import Foundation;

@class TFNPlaceholderTextView;
@protocol TCRComposeTextViewDelegate;

@interface TCRComposeTextView : TFNPlaceholderTextView

@property (nonatomic) unsigned long long firstResponderRefusalDepth;
@property (weak, nonatomic) id <TCRComposeTextViewDelegate> delegate;
@property (nonatomic) _Bool editing;
@property (nonatomic) _Bool pasteEventPendingTracking;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame textContainer:(id)container;
- (_Bool)isEditing;
- (void)dropText:(id)text;
- (void)setBaseWritingDirection:(long long)direction forRange:(id)range;
- (_Bool)canBecomeFirstResponder;
- (void)performWithoutBecomingFirstResponder:(id /* block */)responder;
- (_Bool)canPerformAction:(SEL)action withSender:(id)sender;
- (void)paste:(id)paste;

@end

#endif /* TCRComposeTextView_h */
