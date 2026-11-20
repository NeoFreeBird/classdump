//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1PeopleAddressBookViewControllerDataSourceDelegate_Protocol_h
#define T1PeopleAddressBookViewControllerDataSourceDelegate_Protocol_h
@import Foundation;

@protocol T1PeopleAddressBookViewControllerDataSourceDelegate

@required

/* required instance methods */
- (void)peopleAddressBookViewControllerDataSourceDidBeginLoading:(id)loading;
- (void)peopleAddressBookViewControllerDataSourceDidUpdate:(id)update;
- (void)peopleAddressBookViewControllerDataSource:(id)source didUpdateProgress:(double)progress;
- (void)peopleAddressBookViewControllerDataSourceDidEndLoading:(id)loading;

@optional

@end

#endif /* T1PeopleAddressBookViewControllerDataSourceDelegate_Protocol_h */
