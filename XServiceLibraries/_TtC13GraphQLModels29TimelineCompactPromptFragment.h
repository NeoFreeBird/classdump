//
#ifndef _TtC13GraphQLModels29TimelineCompactPromptFragment_h
#define _TtC13GraphQLModels29TimelineCompactPromptFragment_h
@import Foundation;

@class GraphQLModels.TimelineMessageActionFragment ?, GraphQLModels.TimelineMessageTextActionFragment ?, GraphQLModels.TimelineRichTextFragment ?, _$sSS, _$sSSSg, _TtCs12_SwiftObject;

@interface GraphQLModels.TimelineCompactPromptFragment : Swift._SwiftObject { // (Swift)
    /* instance variables */
    GraphQLModels.TimelineMessageActionFragment ? action;
    GraphQLModels.TimelineRichTextFragment ? bodyRichText;
    Swift.String? bodyText;
    GraphQLModels.TimelineRichTextFragment ? headerRichText;
    Swift.String headerText;
    GraphQLModels.TimelineMessageTextActionFragment ? primaryButtonAction;
    GraphQLModels.TimelineMessageTextActionFragment ? secondaryButtonAction;
}

@end

#endif /* _TtC13GraphQLModels29TimelineCompactPromptFragment_h */
