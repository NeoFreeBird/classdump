//
#ifndef TFNLongPressGestureRecognizer_h
#define TFNLongPressGestureRecognizer_h
@import Foundation;

#include "TFNMenuCompatibleGestureRecognizerHelper.h"
#include "TFNMenuDisplayEvents-Protocol.h"
#include "TFNMenuSupport-Protocol.h"

@class NSString, UIImpactFeedbackGenerator, UILongPressGestureRecognizer;

@interface TFNLongPressGestureRecognizer : UILongPressGestureRecognizer <TFNMenuSupport, TFNMenuDisplayEvents>

@property (retain, nonatomic) UIImpactFeedbackGenerator *impactFeedbackGenerator;
@property (retain, nonatomic) TFNMenuCompatibleGestureRecognizerHelper *menuHelper;
@property (nonatomic) _Bool hapticFeedbackEnabled;
@property (readonly, nonatomic) _Bool isPreparedToDisplayMenuOnPrimaryAction;
@property (readonly, copy, nonatomic) id /* block */ willDisplayMenuOnPrimaryActionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ willDisplayMenuBlock;
@property (copy, nonatomic) id /* block */ willDismissMenuBlock;

/* instance methods */
- (id)initWithTarget:(id)target action:(SEL)action;
- (_Bool)isHapticFeedbackEnabled;
- (void)touchesBegan:(id)began withEvent:(id)event;
- (void)touchesEnded:(id)ended withEvent:(id)event;
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;
- (void)setState:(long long)state;
- (void)prepareToDisplayMenuOnPrimaryAction;
- (void)populateMenuWithTitle:(id)title actionItems:(id)items;
- (void)populateMenuWithActionItems:(id)items;

@end

#endif /* TFNLongPressGestureRecognizer_h */
