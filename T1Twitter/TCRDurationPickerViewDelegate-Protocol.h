//
#ifndef TCRDurationPickerViewDelegate_Protocol_h
#define TCRDurationPickerViewDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TCRDurationPickerViewDelegate <NSObject>

@required

/* required instance methods */
- (void)pickerView:(id)view didChangeTimeInterval:(double)interval;

@optional

@end

#endif /* TCRDurationPickerViewDelegate_Protocol_h */
