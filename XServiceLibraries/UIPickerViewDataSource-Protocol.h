//
#ifndef UIPickerViewDataSource_Protocol_h
#define UIPickerViewDataSource_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol UIPickerViewDataSource <NSObject>

@required

/* required instance methods */
- (long long)numberOfComponentsInPickerView:(id)view;
- (long long)pickerView:(id)view numberOfRowsInComponent:(long long)component;

@optional

@end

#endif /* UIPickerViewDataSource_Protocol_h */
