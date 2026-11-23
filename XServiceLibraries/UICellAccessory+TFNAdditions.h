//
#ifndef UICellAccessory_TFNAdditions_h
#define UICellAccessory_TFNAdditions_h
@import Foundation;

@interface UICellAccessory (TFNAdditions)

/* class methods */
+ (id)cellAccessoryForCustomType:(long long)type;
+ (id)tfn_disclosureIndicator;
+ (id)tfn_downFacingDisclosureIndicator;
+ (id)tfn_upFacingDisclosureIndicator;
+ (id)tfn_checkmark;
+ (id)tfn_lightCheckmark;
+ (id)tfn_circleChecked;
+ (id)tfn_circleUnchecked;
+ (id)tfn_multiSelectCheckmark;
+ (id)tfn_multiSelectCircleUnchecked;
+ (id)tfn_switch;
+ (id)tfn_loadingIndicator;
+ (id)tfn_remove;

/* instance methods */
- (_Bool)tfn_isLeading;
- (double)tfn_defaultLayoutWidth;

@end

#endif /* UICellAccessory_TFNAdditions_h */
