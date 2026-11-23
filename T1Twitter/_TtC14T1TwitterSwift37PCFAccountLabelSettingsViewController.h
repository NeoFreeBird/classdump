//
#ifndef _TtC14T1TwitterSwift37PCFAccountLabelSettingsViewController_h
#define _TtC14T1TwitterSwift37PCFAccountLabelSettingsViewController_h
@import Foundation;

#include "TFNPickerViewControllerDelegate-Protocol.h"
#include "TFNValuePickerDataSource-Protocol.h"

@class Swift.Bool, TFNItemsDataViewController, _$s14TFSTwitterCore23PCFLabelSettingsWrapperCMn, _$s20TwitterActionService0bC0CMn, _$sSo14TFNBooleanItemCSg, _$sSo15TFNDataViewItemCSg, _$sSo17TFNTwitterAccountC, _$sSo23TFSTwitterScribeContextC;

@interface T1TwitterSwift.PCFAccountLabelSettingsViewController : TFNItemsDataViewController <TFNValuePickerDataSource, TFNPickerViewControllerDelegate> { // (Swift)
    /* instance variables */
    __C.TFNTwitterAccount account;
    __C.TFSTwitterScribeContext scribeContext;
    Swift.Bool isEditProfileEnabled;
    Swift.Bool isParodyAccountProfileLabelEnabled;
    nominal type descriptor for TFSTwitterCore.PCFLabelSettingsWrapper parodyLabelSettings;
    nominal type descriptor for TwitterActionService.ActionService actionService;
    __C.TFNDataViewItem? $__lazy_storage_$_descriptionItem;
    __C.TFNBooleanItem? $__lazy_storage_$_enableParodyItem;
}

/* instance methods */
- (id)scribe;
- (id)scribePage;
- (id)scribeSection;
- (id)scribeComponent;
- (id)valuesForPicker:(id)picker;
- (id)initiallyPickedValueForPicker:(id)picker;
- (void)pickerViewController:(id)controller didPickValue:(id)value inSectionAtIndex:(unsigned long long)index willDismiss:(_Bool)dismiss;
- (void)update:(_Bool)update;
- (void)didTapBack;
- (id)initWithCollectionViewLayout:(id)layout isDiffableDataSourcesEnabled:(_Bool)enabled;
- (id)initWithCollectionViewLayout:(id)layout;

@end

#endif /* _TtC14T1TwitterSwift37PCFAccountLabelSettingsViewController_h */
