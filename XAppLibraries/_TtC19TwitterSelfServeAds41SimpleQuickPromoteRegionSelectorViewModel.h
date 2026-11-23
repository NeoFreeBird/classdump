//
#ifndef _TtC19TwitterSelfServeAds41SimpleQuickPromoteRegionSelectorViewModel_h
#define _TtC19TwitterSelfServeAds41SimpleQuickPromoteRegionSelectorViewModel_h
@import Foundation;

@class TwitterSelfServeAds.AdAccountModel, TwitterSelfServeAds.Location ?, TwitterSelfServeAds.LocationSearch ?, TwitterSelfServeAds.QuickPromoteAPI, TwitterSelfServeAds.QuickPromoteEventScriber, _$s7Combine9PublishedVMn _$sySa -> TwitterSelfServeAds.Location, _TtCs12_SwiftObject;

@interface TwitterSelfServeAds.SimpleQuickPromoteRegionSelectorViewModel : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for Combine.Published  empty-list Swift.Array -> TwitterSelfServeAds.Location _suggestedLocations;
    TwitterSelfServeAds.QuickPromoteEventScriber eventScriber;
    TwitterSelfServeAds.Location ? initialLocation;
    TwitterSelfServeAds.AdAccountModel adAccount;
    TwitterSelfServeAds.QuickPromoteAPI api;
    TwitterSelfServeAds.LocationSearch ? locationSearch;
}

@end

#endif /* _TtC19TwitterSelfServeAds41SimpleQuickPromoteRegionSelectorViewModel_h */
