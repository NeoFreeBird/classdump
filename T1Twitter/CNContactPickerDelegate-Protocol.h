//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef CNContactPickerDelegate_Protocol_h
#define CNContactPickerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol CNContactPickerDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)contactPickerDidCancel:(id)cancel;
- (void)contactPicker:(id)picker didSelectContact:(id)contact;
- (void)contactPicker:(id)picker didSelectContactProperty:(id)property;
- (void)contactPicker:(id)picker didSelectContacts:(id)contacts;
- (void)contactPicker:(id)picker didSelectContactProperties:(id)properties;

@end

#endif /* CNContactPickerDelegate_Protocol_h */
