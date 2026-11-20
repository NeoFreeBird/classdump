//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1PeopleAddressBookAccessController_h
#define T1PeopleAddressBookAccessController_h
@import Foundation;

@class NSObject;

@interface T1PeopleAddressBookAccessController : NSObject { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *addressBook;
    NSNumber"16@0:8 *settings;
    NSNumber"16@0:8 *requestPolicy;
}

/* class methods */
+ (id)peopleAddressBookAccessLevelChangedNotification;

/* instance methods */
- (void)requestAccessFromViewController:(id)controller account:(id)account scribePage:(id)page completion:(id /* block */)completion;
- (id)init;

@end

#endif /* T1PeopleAddressBookAccessController_h */
