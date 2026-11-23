//
#ifndef _TtC16ChatConversation30AttachmentViewerSourceProvider_h
#define _TtC16ChatConversation30AttachmentViewerSourceProvider_h
@import Foundation;

@class _$sSa -> ChatConversation.AttachmentViewerSourceProvider.Source, _$sSaySo6UIViewCGyc, _$sSo6UIViewCSgSic, _$sSo6UIViewCSgSicSg, _$sSo6UIViewCSgXw, _TtCs12_SwiftObject;

@interface ChatConversation.AttachmentViewerSourceProvider : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.Array -> ChatConversation.AttachmentViewerSourceProvider.Source sources;
    (Swift.Int) -> __C.UIView? liveViewResolver;
    ((Swift.Int) -> __C.UIView?)? gridSourceViewProvider;
    weak __C.UIView? fallbackSourceView;
    () -> [__C.UIView] forwardmostViewResolver;
}

@end

#endif /* _TtC16ChatConversation30AttachmentViewerSourceProvider_h */
