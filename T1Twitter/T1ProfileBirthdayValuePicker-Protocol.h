//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1ProfileBirthdayValuePicker_Protocol_h
#define T1ProfileBirthdayValuePicker_Protocol_h
@import Foundation;

#include "TFNValuePicker-Protocol.h"

@class TFSTwitterUserExtendedProfileBirthday;

@protocol T1ProfileBirthdayValuePicker <TFNValuePicker>

@required

@property (readonly, copy, nonatomic) TFSTwitterUserExtendedProfileBirthday *pickedBirthdayValue;

@optional

@end

#endif /* T1ProfileBirthdayValuePicker_Protocol_h */
