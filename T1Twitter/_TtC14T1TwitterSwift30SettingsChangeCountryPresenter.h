//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift30SettingsChangeCountryPresenter_h
#define _TtC14T1TwitterSwift30SettingsChangeCountryPresenter_h
@import Foundation;

#include "TFNPickerViewControllerDelegate-Protocol.h"
#include "TFNValuePickerDataSource-Protocol.h"

@class NSObject, _$s17TFSUtilitiesSwift25AsynchronouslySetPropertyCMn _$sSSSg, _$sSaySSG, _$sSo17TFNTwitterAccountC, _$sSo22T1CountryCodeFormatterC, _$sSo33T1SettingsOnboardingFlowPresenterC;

@interface T1TwitterSwift.SettingsChangeCountryPresenter : NSObject <TFNValuePickerDataSource, TFNPickerViewControllerDelegate> { // (Swift)
    /* instance variables */
    nominal type descriptor for TFSUtilitiesSwift.AsynchronouslySetProperty Swift.String? value;
    [Swift.String] availableValues;
    __C.TFNTwitterAccount account;
    __C.T1SettingsOnboardingFlowPresenter settingsOnboardingFlowPresenter;
    __C.T1CountryCodeFormatter formatter;
}

/* instance methods */
- (void)presentWithPresentingController:(id)controller;
- (id)valuesForPicker:(id)picker;
- (id)initiallyPickedValueForPicker:(id)picker;
- (void)pickerViewController:(id)controller didPickValue:(id)value inSectionAtIndex:(unsigned long long)index willConfirm:(_Bool)confirm willDismiss:(_Bool)dismiss;
- (void)pickerViewController:(id)controller didDeselectValue:(id)value inSectionAtIndex:(unsigned long long)index willConfirm:(_Bool)confirm willDismiss:(_Bool)dismiss;
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift30SettingsChangeCountryPresenter_h */
