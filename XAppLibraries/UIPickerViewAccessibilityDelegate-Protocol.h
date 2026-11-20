//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef UIPickerViewAccessibilityDelegate_Protocol_h
#define UIPickerViewAccessibilityDelegate_Protocol_h
@import Foundation;

#include "UIPickerViewDelegate-Protocol.h"

@protocol UIPickerViewAccessibilityDelegate <UIPickerViewDelegate>

@required

@optional

/* optional instance methods */
- (id)pickerView:(id)view accessibilityLabelForComponent:(long long)component;
- (id)pickerView:(id)view accessibilityHintForComponent:(long long)component;
- (id)pickerView:(id)view accessibilityUserInputLabelsForComponent:(long long)component;
- (id)pickerView:(id)view accessibilityAttributedLabelForComponent:(long long)component;
- (id)pickerView:(id)view accessibilityAttributedHintForComponent:(long long)component;
- (id)pickerView:(id)view accessibilityAttributedUserInputLabelsForComponent:(long long)component;

@end

#endif /* UIPickerViewAccessibilityDelegate_Protocol_h */
