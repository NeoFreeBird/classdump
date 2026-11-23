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
