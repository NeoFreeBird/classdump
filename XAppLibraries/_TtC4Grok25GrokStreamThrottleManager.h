//
#ifndef _TtC4Grok25GrokStreamThrottleManager_h
#define _TtC4Grok25GrokStreamThrottleManager_h
@import Foundation;

@class Grok.GrokStreamThrottleManager.Configuration, _$s10Foundation4DateVMn ?, _$s8Dispatch0A8WorkItemCMn ?, _$sSa -> Grok.TranslationResult, _$sySa -> Grok.TranslationResult _$sGc, _TtCs12_SwiftObject;

@interface Grok.GrokStreamThrottleManager : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.Array -> Grok.TranslationResult results;
    nominal type descriptor for Dispatch.DispatchWorkItem ? workItem;
    Grok.GrokStreamThrottleManager.Configuration config;
     empty-list Swift.Array -> Grok.TranslationResult _$sGc progressCallback;
    nominal type descriptor for Foundation.Date ? startDate;
}

@end

#endif /* _TtC4Grok25GrokStreamThrottleManager_h */
