//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNFloatingActionButton_h
#define TFNFloatingActionButton_h
@import Foundation;

#include "TFNExpandingButton.h"
#include "TFNExpandingButtonGestureRecognizer.h"
#include "TFNTouchDownGestureRecognizer.h"
#include "UIGestureRecognizerDelegate-Protocol.h"

@class NSSet, NSString, UILongPressGestureRecognizer, UITapGestureRecognizer, UIView;

@interface TFNFloatingActionButton : UIView <UIGestureRecognizerDelegate>

@property (readonly, nonatomic) TFNTouchDownGestureRecognizer *touchDownRecognizer;
@property (readonly, nonatomic) UITapGestureRecognizer *tapRecognizer;
@property (readonly, nonatomic) UILongPressGestureRecognizer *longPressRecognizer;
@property (readonly, nonatomic) NSSet *gestureRecognizerSet;
@property (readonly, nonatomic) TFNExpandingButtonGestureRecognizer *expandingButtonGestureRecognizer;
@property (nonatomic) _Bool hitTestingEnabled;
@property (readonly, nonatomic) TFNExpandingButton *expandingButton;
@property (nonatomic) _Bool allowsExpansion;
@property (copy, nonatomic) id /* block */ actionOverrideBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)dealloc;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (void)_tfn_updateExpandingButtonLayoutForCurrentPosition;
- (void)_tfn_touchDownAction:(id)action;
- (void)_tfn_tapAction:(id)action;
- (void)_tfn_expandingButtonAction:(id)action;
- (void)_tfn_longPressAction:(id)action;
- (void)_tfn_longPressExpansionAction:(id)action;
- (void)_tfn_longPressSecondaryAction:(id)action;
- (_Bool)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
- (_Bool)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)recognizer;
- (_Bool)gestureRecognizerShouldBegin:(id)begin;
- (_Bool)gestureRecognizer:(id)recognizer shouldBeRequiredToFailByGestureRecognizer:(id)recognizer;
- (void)showAnimated:(_Bool)animated completion:(id /* block */)completion;
- (void)hideAnimated:(_Bool)animated completion:(id /* block */)completion;
- (void)showTutorialForItemWithCategory:(unsigned long long)category completion:(id /* block */)completion;
- (_Bool)isAccessibilityElement;
- (void)_tfn_voiceOverStatusChanged;
- (_Bool)tfn_isAppGestureEnabled:(unsigned long long)enabled;
- (_Bool)tfn_navigationControllerBackGestureEnabled;

@end

#endif /* TFNFloatingActionButton_h */
