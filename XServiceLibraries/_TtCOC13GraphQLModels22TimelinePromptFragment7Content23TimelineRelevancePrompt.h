//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtCOC13GraphQLModels22TimelinePromptFragment7Content23TimelineRelevancePrompt_h
#define _TtCOC13GraphQLModels22TimelinePromptFragment7Content23TimelineRelevancePrompt_h
@import Foundation;

@class GraphQLModels.Enumeration GraphQLScalars.RelevancePromptDisplayType, GraphQLModels.TimelineCallbackFragment, GraphQLModels.TimelineCallbackFragment ?, GraphQLModels.Union GraphQLModels.TimelineRelevancePromptFollowUpFeedbackTypeFragment ?, _$sSS, _$sSSSg, _TtCs12_SwiftObject;

@interface GraphQLModels.TimelinePromptFragment.Content.TimelineRelevancePrompt : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.String confirmation;
    GraphQLModels.Enumeration GraphQLScalars.RelevancePromptDisplayType displayType;
    GraphQLModels.TimelineCallbackFragment isRelevantCallback;
    GraphQLModels.Union GraphQLModels.TimelineRelevancePromptFollowUpFeedbackTypeFragment ? isRelevantFollowUp;
    Swift.String isRelevantText;
    GraphQLModels.TimelineCallbackFragment ? neutralCallback;
    Swift.String? neutralText;
    GraphQLModels.TimelineCallbackFragment notRelevantCallback;
    GraphQLModels.Union GraphQLModels.TimelineRelevancePromptFollowUpFeedbackTypeFragment ? notRelevantFollowUp;
    Swift.String notRelevantText;
    Swift.String relevancePromptTitle;
    Swift.String? subtitle;
}

@end

#endif /* _TtCOC13GraphQLModels22TimelinePromptFragment7Content23TimelineRelevancePrompt_h */
