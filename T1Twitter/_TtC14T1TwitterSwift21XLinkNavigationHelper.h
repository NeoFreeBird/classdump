//
#ifndef _TtC14T1TwitterSwift21XLinkNavigationHelper_h
#define _TtC14T1TwitterSwift21XLinkNavigationHelper_h
@import Foundation;

@class Swift.Bool, _$sSaySSG, _$sShySSG, _$sSo17TFNTwitterAccountC, _TtCs12_SwiftObject;

@interface T1TwitterSwift.XLinkNavigationHelper : Swift._SwiftObject { // (Swift)
    /* instance variables */
    __C.TFNTwitterAccount account;
    Swift.Bool navigationDeepLinkBlacklistEnabled;
    [Swift.String] navigationDeepLinkBlacklistDomains;
    [Swift.String] navigationDeepLinkBlacklistAppIDs;
    [Swift.String] navigationUniversalLinkBlacklistDomains;
    Swift.Set<Swift.String> externalAppSchemes;
    Swift.Bool googleSignInSafariHandoffEnabled;
    Swift.Set<Swift.String> universalLinkPreventedDomains;
}

@end

#endif /* _TtC14T1TwitterSwift21XLinkNavigationHelper_h */
