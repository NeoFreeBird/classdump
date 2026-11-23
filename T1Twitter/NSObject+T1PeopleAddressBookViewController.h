//
#ifndef NSObject_T1PeopleAddressBookViewController_h
#define NSObject_T1PeopleAddressBookViewController_h
@import Foundation;

#include "T1PeopleAddressBookViewControllerAddressBookServiceDataSource.h"
#include "T1PeopleAddressBookViewControllerDataSource-Protocol.h"
#include "T1PeopleAddressBookViewControllerDataSourceDelegate-Protocol.h"
#include "XNAVConfigurationProviding-Protocol.h"

@class NSArray, NSDictionary, NSString, TFNBarProgressView, TFNItemsDataViewController, TFNTwitterAccount, UILocalizedIndexedCollation, UIScrollView, XNAVConfiguration;

@interface NSObject (T1PeopleAddressBookViewController)

/* instance methods */
- (id)t1_withPeopleDiscoveryIndexInModule:(long long)module;
- (id)_t1_withPeopleDiscoveryOption:(id)option key:(id)key;

@end

#endif /* NSObject_T1PeopleAddressBookViewController_h */
