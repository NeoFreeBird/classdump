//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1ProfileBirthdayPickerViewController_h
#define T1ProfileBirthdayPickerViewController_h
@import Foundation;

#include "T1ProfileBirthdayDisplayFormViewController.h"
#include "T1ProfileBirthdayDisplayFormViewControllerDelegate-Protocol.h"
#include "T1ProfileBirthdayValuePicker-Protocol.h"
#include "TFNPickableValue-Protocol.h"

@class NSDate, NSSet, NSString, TFNDataViewItem, TFNItemsDataViewController, TFNTwitterAccount, TFSTwitterUserExtendedProfileBirthday, UIDatePicker;

@interface T1ProfileBirthdayPickerViewController : TFNItemsDataViewController <T1ProfileBirthdayDisplayFormViewControllerDelegate, T1ProfileBirthdayValuePicker>

@property (nonatomic) _Bool isBirthdayPresentInProfile;
@property (nonatomic) _Bool isDatePickerVisible;
@property (nonatomic) _Bool hasVisibilityChanged;
@property (nonatomic) _Bool hasDateChanged;
@property (retain, nonatomic) NSDate *maximumDate;
@property (retain, nonatomic) NSDate *maximumDateForNonMinor;
@property (retain, nonatomic) NSDate *minimumDate;
@property (retain, nonatomic) T1ProfileBirthdayDisplayFormViewController *dateDisplayViewController;
@property (retain, nonatomic) TFSTwitterUserExtendedProfileBirthday *currentBirthday;
@property (retain, nonatomic) TFSTwitterUserExtendedProfileBirthday *updatedBirthday;
@property (retain, nonatomic) UIDatePicker *datePicker;
@property (retain, nonatomic) TFNDataViewItem *dateRemoveItem;
@property (retain, nonatomic) TFNDataViewItem *subtitlePolicyItem;
@property (retain, nonatomic) TFNDataViewItem *visibilitySectionFooter;
@property (retain, nonatomic) TFNDataViewItem *visibilitySectionHeader;
@property (readonly, nonatomic) TFNDataViewItem *visibilitySelectDateItem;
@property (readonly, nonatomic) TFNDataViewItem *visibilitySelectYearItem;
@property (copy, nonatomic) id /* block */ cancelBlock;
@property (copy, nonatomic) id /* block */ doneBlock;
@property (readonly, nonatomic) TFNTwitterAccount *account;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) TFSTwitterUserExtendedProfileBirthday *pickedBirthdayValue;
@property (readonly, nonatomic) _Bool canPickMultipleValues;
@property (readonly, nonatomic) id <TFNPickableValue> pickedValue;
@property (readonly, copy, nonatomic) NSSet *pickedValues;
@property (copy, nonatomic) id /* block */ didPickValueBlock;
@property (readonly, nonatomic) unsigned long long index;
@property (readonly, copy, nonatomic) NSString *valueQuery;

/* instance methods */
- (id)initWithAccount:(id)account birthday:(id)birthday doneBlock:(id /* block */)block cancelBlock:(id /* block */)block;
- (id)init;
- (id)initWithCollectionViewLayout:(id)layout;
- (void)_t1_didTapCancel:(id)cancel;
- (void)_t1_didTapDone:(id)done;
- (void)viewDidLoad;
- (void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)array;
- (struct CGSize { double x0; double x1; })constraintSizeForProfileBirthdayDisplayFormViewController:(id)controller;
- (void)profileBirthdayDisplayFormViewControllerWillChange:(id)change;
- (void)profileBirthdayDisplayFormViewControllerSizeDidChange:(id)change;
- (void)update:(_Bool)update;
- (id)_t1_viewForDatePickerVisible;
- (void)commitChanges;
- (void)_calculateDateRanges;
- (id)_defaultDate;
- (_Bool)_dateIndicatesMinor;
- (void)_observeDateChange;
- (void)_enforceMinorProtection;
- (void)_updateAndScribeVisibilityChangeForElement:(id)element;
- (id)_visibilityItemWithLabel:(id)label pickerTitle:(id)title visibility:(long long)visibility shouldRestrictChoicesToSelfIfMinor:(_Bool)minor setBlock:(id /* block */)block;
- (void)_changeAccessibilityFocusToItem:(id)item;
- (id)scribePage;
- (id)scribeSection;

@end

#endif /* T1ProfileBirthdayPickerViewController_h */
