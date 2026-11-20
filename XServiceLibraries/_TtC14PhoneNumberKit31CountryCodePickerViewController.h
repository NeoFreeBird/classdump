//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14PhoneNumberKit31CountryCodePickerViewController_h
#define _TtC14PhoneNumberKit31CountryCodePickerViewController_h
@import Foundation;

#include "UISearchResultsUpdating-Protocol.h"

@class PhoneNumberKit.CountryCodePickerDelegate ?, PhoneNumberKit.CountryCodePickerOptions, PhoneNumberKit.PhoneNumberUtility, Swift.Bool, UITableViewController, _$sSa -> PhoneNumberKit.CountryCodePickerViewController.Country, _$sSa -> PhoneNumberKit.CountryCodePickerViewController.Country ?, _$sSaySSG, _$sSaySa -> PhoneNumberKit.CountryCodePickerViewController.Country _$sGGSg, _$sSo15UIBarButtonItemCSg, _$sSo18UISearchControllerCSg;

@interface PhoneNumberKit.CountryCodePickerViewController : UITableViewController <UISearchResultsUpdating> { // (Swift)
    /* instance variables */
    __C.UISearchController? $__lazy_storage_$_searchController;
    PhoneNumberKit.PhoneNumberUtility utility;
    PhoneNumberKit.CountryCodePickerOptions options;
    [Swift.String] commonCountryCodes;
    Swift.Bool shouldRestoreNavigationBarToHidden;
    Swift.Bool hasCurrent;
    Swift.Bool hasCommon;
    Swift.Array -> PhoneNumberKit.CountryCodePickerViewController.Country ? $__lazy_storage_$_allCountries;
    Swift.Array empty-list Swift.Array -> PhoneNumberKit.CountryCodePickerViewController.Country _$sGGSg $__lazy_storage_$_countries;
    Swift.Array -> PhoneNumberKit.CountryCodePickerViewController.Country filteredCountries;
    PhoneNumberKit.CountryCodePickerDelegate ? delegate;
    __C.UIBarButtonItem? $__lazy_storage_$_cancelButton;
}

/* instance methods */
- (void)updateSearchResultsForSearchController:(id)controller;
- (id)initWithCoder:(id)coder;
- (void)viewWillAppear:(_Bool)appear;
- (void)viewWillDisappear:(_Bool)disappear;
- (void)dismissAnimated;
- (long long)numberOfSectionsInTableView:(id)view;
- (long long)tableView:(id)view numberOfRowsInSection:(long long)section;
- (id)tableView:(id)view cellForRowAtIndexPath:(id)path;
- (id)tableView:(id)view titleForHeaderInSection:(long long)section;
- (id)sectionIndexTitlesForTableView:(id)view;
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)path;
- (id)initWithStyle:(long long)style;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC14PhoneNumberKit31CountryCodePickerViewController_h */
