//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef UIButton_TFNGlassBarButtonItem_h
#define UIButton_TFNGlassBarButtonItem_h
@import Foundation;

@interface UIButton (TFNGlassBarButtonItem) <TIPImageFetchable, TFNMenuSupport>

/* class methods */
+ (_Bool)tfn_defaultShouldFlipForRightToLeftTransform;

/* instance methods */
- (_Bool)tfn_isPointerInteractionEnabled;
- (void)setTfn_pointerInteractionEnabled:(_Bool)enabled;
- (void)tfn_setupPointerInteractionsWithStyleProvider:(id /* block */)provider;
- (void)tfn_removePointerInteraction;
- (id)tip_fetchedImage;
- (void)setTip_fetchedImage:(id)image;
- (void)prepareToDisplayMenuOnPrimaryAction;
- (void)prepareToDisplayMenuOnPrimaryActionWhen:(id /* block */)when;
- (void)_tfn_prepareToDisplayMenuOnPrimaryActionWhen:(id /* block */)when;
- (_Bool)isPreparedToDisplayMenuOnPrimaryAction;
- (id /* block */)willDisplayMenuOnPrimaryActionBlock;
- (void)_tfn_setWillDisplayMenuOnPrimaryActionBlock:(id /* block */)block;
- (void)populateMenuWithTitle:(id)title actionItems:(id)items;
- (void)populateMenuWithActionItems:(id)items;
- (void)_tfn_menu_populateMenuWithTitle:(id)title actionItems:(id)items;
- (void)_tfn_menu_menuActionTriggered;
- (void)_tfn_menu_touchDown;
- (void)_tfn_menu_touchUpInside;
- (void)_tfn_menu_touchUp;
- (void)tfn_convertToAttributedTitleLinkForState:(unsigned long long)state;
- (id)_tfn_activeAnimation;
- (void)set_tfn_activeAnimation:(id)animation;
- (void)_tfn_notifyAnimationEvent:(id)event;
- (void)tfn_alignContentInGlassBarSlot;
- (void)_tfn_matchInterfaceStyleOfGlassBar:(id)bar;
- (void)tfn_setNeedsGlassBarSlotAlignment;

@end

#endif /* UIButton_TFNGlassBarButtonItem_h */
