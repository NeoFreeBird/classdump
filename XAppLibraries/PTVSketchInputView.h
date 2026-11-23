//
#ifndef PTVSketchInputView_h
#define PTVSketchInputView_h
@import Foundation;

#include "PTVSketchColorSwatch.h"
#include "PTVSketchInputViewDelegate-Protocol.h"
#include "UIGestureRecognizerDelegate-Protocol.h"

@class NSArray, NSLayoutConstraint, NSMutableArray, NSString, UIButton, UIColor, UIPinchGestureRecognizer, UITapGestureRecognizer, UIView;

@interface PTVSketchInputView : UIView <UIGestureRecognizerDelegate>

@property (retain, nonatomic) UIColor *defaultPickerColor;
@property (weak, nonatomic) UIButton *doneButton;
@property (retain, nonatomic) NSMutableArray *outgoingPointQueue;
@property (retain, nonatomic) NSArray *colorSwatches;
@property (weak, nonatomic) PTVSketchColorSwatch *pickerSwatch;
@property (weak, nonatomic) UIView *dividerView;
@property (nonatomic) long long state;
@property (weak, nonatomic) NSLayoutConstraint *lastColorSwatchToPickerConstraint;
@property (nonatomic) _Bool pickerHidden;
@property (weak, nonatomic) UIPinchGestureRecognizer *pinchGestureRecognizer;
@property (weak, nonatomic) UITapGestureRecognizer *doubleTapGestureRecognizer;
@property (weak, nonatomic) id <PTVSketchInputViewDelegate> delegate;
@property (readonly, nonatomic) _Bool isSketching;
@property (readonly, nonatomic) double paletteHeight;
@property (readonly, nonatomic) UIColor *activeColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sketchInputViewWithDelegate:(id)delegate;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (id)activeSwatch;
- (void)didTapDone:(id)done;
- (void)didTapColor:(id)color;
- (void)didTapColorPicker:(id)picker;
- (void)awakeFromNib;
- (void)touchesBegan:(id)began withEvent:(id)event;
- (void)touchesMoved:(id)moved withEvent:(id)event;
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;
- (void)touchesEnded:(id)ended withEvent:(id)event;
- (void)didPinch:(id)pinch;
- (void)didDoubleTap:(id)tap;
- (_Bool)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;

@end

#endif /* PTVSketchInputView_h */
