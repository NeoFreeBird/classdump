//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC23ChatConversationDetails44AttachmentListAttachmentViewerSourceProvider_h
#define _TtC23ChatConversationDetails44AttachmentListAttachmentViewerSourceProvider_h
@import Foundation;

@class _$sSa -> ChatConversationDetails.AttachmentListAttachmentViewerSourceProvider.Source, _$sSaySo6UIViewCGyc, _$sSo6UIViewCSgSic, _$sSo6UIViewCSgSicSg, _$sSo6UIViewCSgXw, _TtCs12_SwiftObject;

@interface ChatConversationDetails.AttachmentListAttachmentViewerSourceProvider : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.Array -> ChatConversationDetails.AttachmentListAttachmentViewerSourceProvider.Source sources;
    (Swift.Int) -> __C.UIView? liveViewResolver;
    ((Swift.Int) -> __C.UIView?)? gridSourceViewProvider;
    weak __C.UIView? fallbackSourceView;
    () -> [__C.UIView] forwardmostViewResolver;
}

@end

#endif /* _TtC23ChatConversationDetails44AttachmentListAttachmentViewerSourceProvider_h */
