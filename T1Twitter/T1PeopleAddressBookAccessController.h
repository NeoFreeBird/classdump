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
