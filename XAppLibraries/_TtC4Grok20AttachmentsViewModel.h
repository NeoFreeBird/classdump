//
#ifndef _TtC4Grok20AttachmentsViewModel_h
#define _TtC4Grok20AttachmentsViewModel_h
@import Foundation;

@class _$s7Combine9PublishedVMn Swift.Bool, _$s7Combine9PublishedVMn _$sSaySSG, _$s7Combine9PublishedVMn _$sSaySaySSGG, _$s7Combine9PublishedVMn _$sySa -> Grok.GrokCard, _$s7Combine9PublishedVMn _$sySa -> Grok.ToolUsageCard, _$s7Combine9PublishedVMn _$sySa -> Grok.WebResult, _$s7Combine9PublishedVMn _$sySa -> _$s13GraphQLModels12UserFragmentCMn, _$s7Combine9PublishedVMn _$sySa -> _$s13GraphQLModels13TweetFragmentCMn, _$sSSSg, _TtCs12_SwiftObject;

@interface Grok.AttachmentsViewModel : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for Combine.Published  empty-list Swift.Array -> Grok.ToolUsageCard _toolUsageCards;
    nominal type descriptor for Combine.Published  empty-list Swift.Array -> Grok.WebResult _webResults;
    nominal type descriptor for Combine.Published  empty-list Swift.Array -> nominal type descriptor for GraphQLModels.TweetFragment _posts;
    nominal type descriptor for Combine.Published  empty-list Swift.Array -> nominal type descriptor for GraphQLModels.UserFragment _users;
    nominal type descriptor for Combine.Published  empty-list Swift.Array -> Grok.GrokCard _cardAttachments;
    nominal type descriptor for Combine.Published [[Swift.String]] _adjacentSearchedImageGroups;
    nominal type descriptor for Combine.Published [[Swift.String]] _adjacentGeneratedImageGroups;
    nominal type descriptor for Combine.Published [Swift.String] _allGeneratedImageCardIds;
    nominal type descriptor for Combine.Published Swift.Bool _hasUpsell;
    nominal type descriptor for Combine.Published Swift.Bool _isGenerating;
    Swift.String? agentChatItemId;
}

@end

#endif /* _TtC4Grok20AttachmentsViewModel_h */
