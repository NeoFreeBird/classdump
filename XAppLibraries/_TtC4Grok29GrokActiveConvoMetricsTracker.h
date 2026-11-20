//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC4Grok29GrokActiveConvoMetricsTracker_h
#define _TtC4Grok29GrokActiveConvoMetricsTracker_h
@import Foundation;

@class Grok.GrokActiveConvoViewModel.GrokActiveConvoEnvironment, Swift.Bool, _$sSDyS2SG, _$sSDySS Grok.GrokActiveConvoMetricsTracker.ContentType, _$sSDySS _$s10Foundation4DateVMn, _$sSa -> Grok.GrokActiveConvoMetricsTracker.GrokChatItemUILocationWithId, _$sSa -> _$s10Foundation4DateVMn, _$sSh -> Grok.GrokActiveConvoMetricsTracker.GrokChatItemUILocationWithId, _TtCs12_SwiftObject;

@interface Grok.GrokActiveConvoMetricsTracker : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Grok.GrokActiveConvoViewModel.GrokActiveConvoEnvironment grokActiveConvoEnvironment;
    Swift.Bool isAppActive;
    Swift.Bool isScreenVisible;
    Swift.Array -> nominal type descriptor for Foundation.Date viewDisappearedDates;
    Swift.Array -> Grok.GrokActiveConvoMetricsTracker.GrokChatItemUILocationWithId logContentVisibleEventWhenAppBecomesActive;
    Swift.Set -> Grok.GrokActiveConvoMetricsTracker.GrokChatItemUILocationWithId isLocationVisible;
    Swift.Set -> Grok.GrokActiveConvoMetricsTracker.GrokChatItemUILocationWithId hasReceivedContent;
    Swift.Set -> Grok.GrokActiveConvoMetricsTracker.GrokChatItemUILocationWithId hasLoggedContentVisibleEvent;
    [Swift.String : Swift.String] agentChatItemIds;
    Swift.Dictionary empty-list Swift.String Grok.GrokActiveConvoMetricsTracker.ContentType contentTypes;
    Swift.Dictionary empty-list Swift.String nominal type descriptor for Foundation.Date requestStarts;
}

@end

#endif /* _TtC4Grok29GrokActiveConvoMetricsTracker_h */
