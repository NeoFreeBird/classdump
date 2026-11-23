//
#ifndef _TtC13GraphQLModels28TimelineInlinePromptFragment_h
#define _TtC13GraphQLModels28TimelineInlinePromptFragment_h
@import Foundation;

@class GraphQLModels.TimelineMessageTextActionFragment ?, GraphQLModels.TimelineRichTextFragment ?, GraphQLModels.TimelineUserFacepileFragment ?, GraphQLModels.Union GraphQLModels.TimelineSocialContextFragment ?, _$sSS, _$sSSSg, _TtCs12_SwiftObject;

@interface GraphQLModels.TimelineInlinePromptFragment : Swift._SwiftObject { // (Swift)
    /* instance variables */
    GraphQLModels.TimelineRichTextFragment ? bodyRichText;
    Swift.String? bodyText;
    GraphQLModels.TimelineRichTextFragment ? headerRichText;
    Swift.String inlinePromptHeaderText;
    GraphQLModels.TimelineMessageTextActionFragment ? primaryButtonAction;
    GraphQLModels.TimelineMessageTextActionFragment ? secondaryButtonAction;
    GraphQLModels.Union GraphQLModels.TimelineSocialContextFragment ? socialContext;
    GraphQLModels.TimelineUserFacepileFragment ? userFacepile;
}

@end

#endif /* _TtC13GraphQLModels28TimelineInlinePromptFragment_h */
