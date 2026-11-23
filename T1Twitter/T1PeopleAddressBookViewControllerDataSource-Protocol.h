//
#ifndef T1PeopleAddressBookViewControllerDataSource_Protocol_h
#define T1PeopleAddressBookViewControllerDataSource_Protocol_h
@import Foundation;

#include "T1PeopleAddressBookViewControllerDataSourceDelegate-Protocol.h"

@class NSArray;

@protocol T1PeopleAddressBookViewControllerDataSource

@required

@property (nonatomic, readonly) double progress;
@property (nonatomic, readonly) _Bool loading;
@property (nonatomic, readonly) _Bool hasError;
@property (nonatomic, readonly) _Bool contactsSynchronizationAuthorized;
@property (nonatomic, readonly) NSArray *recommendations;
@property (nonatomic, weak) id <T1PeopleAddressBookViewControllerDataSourceDelegate> delegate;

/* required instance methods */
- (void)refresh;

@optional

@end

#endif /* T1PeopleAddressBookViewControllerDataSource_Protocol_h */
