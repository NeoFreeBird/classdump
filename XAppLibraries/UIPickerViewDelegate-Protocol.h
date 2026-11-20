//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef UIPickerViewDelegate_Protocol_h
#define UIPickerViewDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol UIPickerViewDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (double)pickerView:(id)view widthForComponent:(long long)component;
- (double)pickerView:(id)view rowHeightForComponent:(long long)component;
- (id)pickerView:(id)view titleForRow:(long long)row forComponent:(long long)component;
- (id)pickerView:(id)view attributedTitleForRow:(long long)row forComponent:(long long)component;
- (id)pickerView:(id)view viewForRow:(long long)row forComponent:(long long)component reusingView:(id)view;
- (id)pickerView:(id)view viewForRow:(long long)row forComponent:(long long)component reusingView:(id)view;
- (void)pickerView:(id)view didSelectRow:(long long)row inComponent:(long long)component;

@end

#endif /* UIPickerViewDelegate_Protocol_h */
