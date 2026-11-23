//
#ifndef _TtC4Grok35GrokSearchOverviewConversationStore_h
#define _TtC4Grok35GrokSearchOverviewConversationStore_h
@import Foundation;

@class Grok.GatewayUnfairLock _$sySD -> _$ss5Int64VMn _$sShySo8NSStringCGG, _$sSo7NSCacheCySo8NSStringC Grok.GrokSearchOverviewConversationStore.BindingBox, _$sSo7NSCacheCySo8NSStringC Grok.GrokSearchOverviewConversationStore.ItemsBox, _$sSo7NSCacheCySo8NSStringC Grok.GrokSearchOverviewConversationStore.OverviewBox, _$sSo7NSCacheCySo8NSStringCADG, _TtCs12_SwiftObject;

@interface Grok.GrokSearchOverviewConversationStore : Swift._SwiftObject { // (Swift)
    /* instance variables */
    __C.NSCache empty-list __C.NSString Grok.GrokSearchOverviewConversationStore.BindingBox bindings;
    __C.NSCache<__C.NSString, __C.NSString> bindingKeysByConversation;
    __C.NSCache empty-list __C.NSString Grok.GrokSearchOverviewConversationStore.ItemsBox conversations;
    __C.NSCache empty-list __C.NSString Grok.GrokSearchOverviewConversationStore.OverviewBox overviews;
    Grok.GatewayUnfairLock  empty-list Swift.Dictionary -> nominal type descriptor for Swift.Int64 _$sShySo8NSStringCGG keysByUserID;
}

@end

#endif /* _TtC4Grok35GrokSearchOverviewConversationStore_h */
