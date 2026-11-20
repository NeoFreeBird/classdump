//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1PeopleAddressBookAccessControllerRequestPolicy_Protocol_h
#define T1PeopleAddressBookAccessControllerRequestPolicy_Protocol_h
@import Foundation;

#include "TSARequestPolicy-Protocol.h"

@protocol T1PeopleAddressBookAccessControllerRequestPolicy <TSARequestPolicy>

@required

/* required instance methods */
- (_Bool)shouldExecuteRequestFor:(id)_for settings:(id)settings;

@optional

@end

#endif /* T1PeopleAddressBookAccessControllerRequestPolicy_Protocol_h */
