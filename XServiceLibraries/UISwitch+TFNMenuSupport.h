//
#ifndef UISwitch_TFNMenuSupport_h
#define UISwitch_TFNMenuSupport_h
@import Foundation;

@interface UISwitch (TFNMenuSupport) <TFNMenuSupport>

/* class methods */
+ (_Bool)tfn_defaultShouldFlipForRightToLeftTransform;

/* instance methods */
- (id)tfn_onTintColor;
- (void)setTfn_onTintColor:(id)color;
- (id)menuControl;
- (void)setMenuControl:(id)control;
- (_Bool)hasSelectedMenuItem;
- (void)setHasSelectedMenuItem:(_Bool)item;
- (void)prepareToDisplayMenuOnPrimaryAction;
- (_Bool)isPreparedToDisplayMenuOnPrimaryAction;
- (void)populateMenuWithTitle:(id)title actionItems:(id)items;
- (void)populateMenuWithActionItems:(id)items;
- (void)_tfn_menu_populateMenuWithTitle:(id)title actionItems:(id)items;

@end

#endif /* UISwitch_TFNMenuSupport_h */
