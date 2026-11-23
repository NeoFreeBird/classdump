//
#ifndef _TtC11TwitterDash14DashDataSource_h
#define _TtC11TwitterDash14DashDataSource_h
@import Foundation;

@class _$s7Combine9PublishedVMn Swift.Bool, _$s7Combine9PublishedVMn TwitterDash.DashBadgingDataSource, _$s7Combine9PublishedVMn TwitterDash.DashUser ?, _$s7Combine9PublishedVMn _$sSS, _$s7Combine9PublishedVMn _$sSaySo17TFNTwitterAccountCG, _$s7Combine9PublishedVMn _$sSi, _$s7Combine9PublishedVMn _$sSo17TFNTwitterAccountC, _$s7Combine9PublishedVMn _$sSo24TFNTwitterUserDataSourceC, _$s7Combine9PublishedVMn _$sSo24TPSFeatureSwitchesAccess_pSg, _$s7Combine9PublishedVMn _$sSu, _$s7Combine9PublishedVMn _$sySa -> TwitterDash.DashFolderItem, _$s7Combine9PublishedVMn _$sySa -> TwitterDash.DashPrimaryItem, _$s7Combine9PublishedVMn _$sySa -> TwitterDash.DashTertiaryItem, _TtCs12_SwiftObject;

@interface TwitterDash.DashDataSource : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for Combine.Published [__C.TFNTwitterAccount] _accounts;
    nominal type descriptor for Combine.Published __C.TFNTwitterAccount _currentAccount;
    nominal type descriptor for Combine.Published Swift.String _accountID;
    nominal type descriptor for Combine.Published Swift.String _fullName;
    nominal type descriptor for Combine.Published Swift.String _displayUserName;
    nominal type descriptor for Combine.Published Swift.Int _numberOfFollowing;
    nominal type descriptor for Combine.Published Swift.Int _numberOfFollowers;
    nominal type descriptor for Combine.Published Swift.UInt _numberOfSuperFollowers;
    nominal type descriptor for Combine.Published Swift.UInt _numberOfCreatorSubscriptions;
    nominal type descriptor for Combine.Published __C.TFNTwitterUserDataSource _userDataSource;
    nominal type descriptor for Combine.Published __C.TPSFeatureSwitchesAccess? _featureSwitches;
    nominal type descriptor for Combine.Published Swift.Bool _isProfessionalProfileEnabled;
    nominal type descriptor for Combine.Published Swift.Bool _canShowPromoteModeForAccount;
    nominal type descriptor for Combine.Published Swift.Bool _isAdvertiser;
    nominal type descriptor for Combine.Published Swift.Bool _isOwner;
    nominal type descriptor for Combine.Published  empty-list Swift.Array -> TwitterDash.DashPrimaryItem _primaryItems;
    nominal type descriptor for Combine.Published  empty-list Swift.Array -> TwitterDash.DashFolderItem _folderItems;
    nominal type descriptor for Combine.Published  empty-list Swift.Array -> TwitterDash.DashTertiaryItem _tertiaryItems;
    nominal type descriptor for Combine.Published TwitterDash.DashBadgingDataSource _badging;
    nominal type descriptor for Combine.Published TwitterDash.DashUser ? _dashUser;
}

@end

#endif /* _TtC11TwitterDash14DashDataSource_h */
