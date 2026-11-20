//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1PeopleAddressBookAccessControllerAlwaysPromptRequestPolicy_h
#define T1PeopleAddressBookAccessControllerAlwaysPromptRequestPolicy_h
@import Foundation;

#include "T1PeopleAddressBookAccessControllerRequestPolicy-Protocol.h"

@class TSAAlwaysPromptRequestPolicy;

@interface T1PeopleAddressBookAccessControllerAlwaysPromptRequestPolicy : TSAAlwaysPromptRequestPolicy <T1PeopleAddressBookAccessControllerRequestPolicy> // (Swift)

/* instance methods */
- (_Bool)shouldExecuteRequestFor:(id)_for settings:(id)settings;
- (id)init;

@end

#endif /* T1PeopleAddressBookAccessControllerAlwaysPromptRequestPolicy_h */
