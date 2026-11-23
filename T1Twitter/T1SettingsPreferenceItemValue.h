//
#ifndef T1SettingsPreferenceItemValue_h
#define T1SettingsPreferenceItemValue_h
@import Foundation;

#include "TFNPickableValue-Protocol.h"

@class NSObject, NSString, UIImage;

@interface T1SettingsPreferenceItemValue : NSObject <TFNPickableValue>

@property (retain, nonatomic) id identifier;
@property (copy, nonatomic) NSString *valueName;
@property (copy, nonatomic) UIImage *valueIcon;
@property (readonly, copy, nonatomic) NSString *valueDetail;
@property (readonly, copy, nonatomic) NSString *valueShortName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */

@end

#endif /* T1SettingsPreferenceItemValue_h */
