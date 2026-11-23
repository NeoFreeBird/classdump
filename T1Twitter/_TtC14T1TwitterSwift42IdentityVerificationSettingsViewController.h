//
#ifndef _TtC14T1TwitterSwift42IdentityVerificationSettingsViewController_h
#define _TtC14T1TwitterSwift42IdentityVerificationSettingsViewController_h
@import Foundation;

@class Swift.Bool, TFNItemsDataViewController, _$s10Foundation3URLVMn, _$s10TFNUISwift26InlineCalloutConfigurationCMn ?, _$s14TFSTwitterCore30IdentityVerificationUserStatusOMn, _$sSo14TFNBooleanItemCSg, _$sSo17TFNTwitterAccountC;

@interface T1TwitterSwift.IdentityVerificationSettingsViewController : TFNItemsDataViewController { // (Swift)
    /* instance variables */
    nominal type descriptor for Foundation.URL helpCenterUrl;
    Swift.Bool lastSavedIsIdentityVerifiedLabelHidden;
    __C.TFNBooleanItem? $__lazy_storage_$_isIdentityVerifiedLabelHiddenItem;
    nominal type descriptor for TFNUISwift.InlineCalloutConfiguration ? $__lazy_storage_$_subscribeToBlueItem;
    __C.TFNTwitterAccount account;
    nominal type descriptor for TFSTwitterCore.IdentityVerificationUserStatus status;
}

/* instance methods */
- (void)viewWillAppear:(_Bool)appear;
- (id)scribe;
- (id)scribePage;
- (id)scribeSection;
- (id)initWithCollectionViewLayout:(id)layout isDiffableDataSourcesEnabled:(_Bool)enabled;
- (id)initWithCollectionViewLayout:(id)layout;

@end

#endif /* _TtC14T1TwitterSwift42IdentityVerificationSettingsViewController_h */
