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
