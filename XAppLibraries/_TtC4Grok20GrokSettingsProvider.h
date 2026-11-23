//
#ifndef _TtC4Grok20GrokSettingsProvider_h
#define _TtC4Grok20GrokSettingsProvider_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class Grok.GrokFeatureAccess, Grok.GrokSettingsProvider.GrokModelSource, Grok.GrokSettingsProvider.GroupedModelOptionsCache ?, Grok0A18AccountPerspective_p, _$s10Foundation4DateVMn ?, _$s20TwitterActionService0bC0CMn, _$s7Combine14AnyCancellableCMn ?, _$s7Combine18PassthroughSubjectCMn _$syyt _$ss5NeverOMn, _$s7Combine9PublishedVMn Grok.GrokModeButtonType, _$s7Combine9PublishedVMn Grok.GrokModelChoice ?, _$s7Combine9PublishedVMn Grok.GrokPersonalizedHome ?, _$s7Combine9PublishedVMn Grok.GrokSettingsFetchState, _$s7Combine9PublishedVMn Grok.GrokSubscriptionLevel, _$s7Combine9PublishedVMn _$s14GraphQLScalars8GrokModeOMn, _$s7Combine9PublishedVMn _$s19GraphQLCachedModels15GrokModelOptionVMn ?, _$s7Combine9PublishedVMn _$sSS, _$s7Combine9PublishedVMn _$sSbSg, _$s7Combine9PublishedVMn _$sySa -> Grok.GrokModeButton, _$s7Combine9PublishedVMn _$sySa -> Grok.GrokPrompt, _$s7Combine9PublishedVMn _$sySa -> _$s14GraphQLScalars26GrokAccessIneligibleReasonOMn ?, _$s7Combine9PublishedVMn _$sySa -> _$s19GraphQLCachedModels15GrokModelOptionVMn ?, _$sSS, _$sSSSg, _$sSo13TFNScribeSink_p, _$sSo23TFSTwitterScribeContextC, _TtCs12_SwiftObject;

@interface Grok.GrokSettingsProvider : Swift._SwiftObject <NSCopying> { // (Swift)
    /* instance variables */
    Grok0A18AccountPerspective_p account;
    Grok.GrokFeatureAccess grokAccess;
    __C.TFSTwitterScribeContext scribeContext;
    __C.TFNScribeSink scribeSink;
    Swift.String premiumPaywallReferringPage;
    nominal type descriptor for Combine.PassthroughSubject  empty-list () nominal type descriptor for Swift.Never didChange;
    nominal type descriptor for Combine.PassthroughSubject  empty-list () nominal type descriptor for Swift.Never userSelectedModel;
    nominal type descriptor for Combine.Published Grok.GrokSubscriptionLevel _subscriptionLevel;
    nominal type descriptor for Combine.Published nominal type descriptor for GraphQLScalars.GrokMode _grokMode;
    nominal type descriptor for Combine.Published  empty-list Swift.Array -> nominal type descriptor for GraphQLCachedModels.GrokModelOption ? _grokModelOptions;
    nominal type descriptor for Combine.Published nominal type descriptor for GraphQLCachedModels.GrokModelOption ? _grokModel;
    nominal type descriptor for Combine.Published Swift.String _grokVersion;
    nominal type descriptor for Combine.Published Grok.GrokModelChoice ? _sessionModelChoice;
    nominal type descriptor for TwitterActionService.ActionService actionService;
    nominal type descriptor for Combine.Published  empty-list Swift.Array -> Grok.GrokPrompt _prompts;
    nominal type descriptor for Combine.Published Grok.GrokSettingsFetchState _fetchingState;
    nominal type descriptor for Combine.Published Swift.Bool? _eligibleForGrok;
    nominal type descriptor for Combine.Published Swift.Bool? _freeAccessEnabled;
    nominal type descriptor for Combine.Published  empty-list Swift.Array -> nominal type descriptor for GraphQLScalars.GrokAccessIneligibleReason ? _ineligibleReasons;
    nominal type descriptor for Combine.Published Grok.GrokPersonalizedHome ? _personalizedHomeLayout;
    nominal type descriptor for Combine.Published  empty-list Swift.Array -> Grok.GrokModeButton _modeButtons;
    nominal type descriptor for Combine.Published Grok.GrokModeButtonType _grokSettingsMode;
    nominal type descriptor for Combine.Published  empty-list Swift.Array -> Grok.GrokModeButton _allModeButtons;
    nominal type descriptor for Foundation.Date ? lastSuccessfulLoadDate;
    nominal type descriptor for Combine.AnyCancellable ? gatewayModelsCancellable;
    Grok.GrokSettingsProvider.GrokModelSource modelSource;
    Grok.GrokSettingsProvider.GroupedModelOptionsCache ? groupedModelOptionsCache;
    Swift.String? gatewayPreferredModelID;
}

/* instance methods */
- (id)copyWithZone:(void *)zone;

@end

#endif /* _TtC4Grok20GrokSettingsProvider_h */
