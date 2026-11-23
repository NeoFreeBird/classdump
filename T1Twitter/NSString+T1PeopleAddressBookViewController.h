//
#ifndef NSString_T1PeopleAddressBookViewController_h
#define NSString_T1PeopleAddressBookViewController_h
@import Foundation;

#include "T1PeopleAddressBookViewControllerAddressBookServiceDataSource.h"
#include "T1PeopleAddressBookViewControllerDataSource-Protocol.h"
#include "T1PeopleAddressBookViewControllerDataSourceDelegate-Protocol.h"
#include "XNAVConfigurationProviding-Protocol.h"

@class NSArray, NSDictionary, NSString, TFNBarProgressView, TFNItemsDataViewController, TFNTwitterAccount, UILocalizedIndexedCollation, UIScrollView, XNAVConfiguration;

@interface NSString (T1PeopleAddressBookViewController)

/* instance methods */
- (id)formatCode;
- (id)t1_asPeopleDiscoverySectionHeaderWithActionText:(id)text actionBlock:(id /* block */)block icon:(id)icon bottomInsetCustomization:(double)customization;
- (id)_t1_asPeopleDiscoverySectionHeaderWithActionText:(id)text actionBlock:(id /* block */)block icon:(id)icon topInsetCustomization:(double)customization bottomInsetCustomization:(double)customization;

@end

#endif /* NSString_T1PeopleAddressBookViewController_h */
