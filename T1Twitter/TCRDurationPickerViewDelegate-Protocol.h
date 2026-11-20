//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
