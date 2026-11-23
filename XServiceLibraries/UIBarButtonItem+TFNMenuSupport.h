//
#ifndef UIBarButtonItem_TFNMenuSupport_h
#define UIBarButtonItem_TFNMenuSupport_h
@import Foundation;

@interface UIBarButtonItem (TFNMenuSupport) <TFNMenuSupport>

/* instance methods */
- (id)invocation;
- (void)setInvocation:(id)invocation;
- (void)prepareToDisplayMenuOnPrimaryAction;
- (void)prepareToDisplayMenuOnPrimaryActionWhen:(id /* block */)when;
- (void)_tfn_prepareToDisplayMenuOnPrimaryActionWhen:(id /* block */)when;
- (_Bool)isPreparedToDisplayMenuOnPrimaryAction;
- (id /* block */)willDisplayMenuOnPrimaryActionBlock;
- (void)_tfn_setWillDisplayMenuOnPrimaryActionBlock:(id /* block */)block;
- (void)populateMenuWithTitle:(id)title actionItems:(id)items;
- (void)populateMenuWithActionItems:(id)items;
- (void)_tfn_menu_populateMenuWithTitle:(id)title actionItems:(id)items;
- (id)_tfn_menu_button;
- (void)_tfn_menu_touchDown;
- (void)_tfn_menu_touchUpInside:(_Bool)inside;
- (_Bool)_tfn_menu_willDisplayMenu;
- (_Bool)_tfn_gestureRecognizer_touchesBegan:(id)began withEvent:(id)event;
- (void)_tfn_gestureRecognizer_touchesMoved:(id)moved withEvent:(id)event;
- (void)_tfn_gestureRecognizer_touchesEnded:(id)ended withEvent:(id)event;
- (void)_tfn_gestureRecognizer_touchesCancelled:(id)cancelled withEvent:(id)event;
- (void)_tfn_menu_performInvocation;
- (void)_tfn_prepareViewToDisplayMenuOnPrimaryAction:(id)action;

@end

#endif /* UIBarButtonItem_TFNMenuSupport_h */
