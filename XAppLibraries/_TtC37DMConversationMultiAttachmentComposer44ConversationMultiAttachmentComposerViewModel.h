//
#ifndef _TtC37DMConversationMultiAttachmentComposer44ConversationMultiAttachmentComposerViewModel_h
#define _TtC37DMConversationMultiAttachmentComposer44ConversationMultiAttachmentComposerViewModel_h
@import Foundation;

@class DMComposition.MessageCompositionURLCardResolver, DMConversationMultiAttachmentComposer.ConversationMultiAttachmentComposerViewModelListener ?, DMUI.MediaAssetBuilder, DMUI.RootNavigation, Swift.Bool, _$s19ChatFeatureSwitches0A8FeaturesCMn, _$s7Combine9PublishedVMn Swift.Bool, _$s7Combine9PublishedVMn _$sSDySSSo7UIImageCG, _$s7Combine9PublishedVMn _$sSS, _$s7Combine9PublishedVMn _$sSi, _$s7Combine9PublishedVMn _$sySDySS DMConversationMultiAttachmentComposer.ConversationMultiAttachmentMediaType, _$s7Combine9PublishedVMn _$sySa -> DMComposition.MessageCompositionAttachment, _$sSDySSScTyyt _$ss5NeverOMn, _$sSi, _$sSo16TIPImagePipelineC, _TtCs12_SwiftObject;

@interface DMConversationMultiAttachmentComposer.ConversationMultiAttachmentComposerViewModel : Swift._SwiftObject { // (Swift)
    /* instance variables */
    DMConversationMultiAttachmentComposer.ConversationMultiAttachmentComposerViewModelListener ? listener;
    nominal type descriptor for Combine.Published  empty-list Swift.Array -> DMComposition.MessageCompositionAttachment _attachments;
    nominal type descriptor for Combine.Published Swift.Bool _isEditing;
    nominal type descriptor for Combine.Published  empty-list Swift.Dictionary empty-list Swift.String DMConversationMultiAttachmentComposer.ConversationMultiAttachmentMediaType _mediaTypes;
    nominal type descriptor for Combine.Published Swift.String _messageText;
    nominal type descriptor for Combine.Published Swift.Int _selectedIndex;
    nominal type descriptor for Combine.Published [Swift.String : __C.UIImage] _thumbnails;
    Swift.Bool allowsEditingAttachments;
    nominal type descriptor for ChatFeatureSwitches.ChatFeatures chatFeatures;
    __C.TIPImagePipeline imagePipeline;
    Swift.Bool isLegacyConversation;
    DMUI.MediaAssetBuilder mediaAssetBuilder;
    DMUI.RootNavigation rootNavigation;
    Swift.Bool allowsAddingAttachments;
    Swift.Int maxAttachmentsPerMessage;
    DMComposition.MessageCompositionURLCardResolver urlCardResolver;
    Swift.Dictionary empty-list Swift.StringSwift.Task empty-list () nominal type descriptor for Swift.Never hydrationTasks;
}

@end

#endif /* _TtC37DMConversationMultiAttachmentComposer44ConversationMultiAttachmentComposerViewModel_h */
