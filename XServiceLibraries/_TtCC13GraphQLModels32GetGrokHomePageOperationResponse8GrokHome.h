//
#ifndef _TtCC13GraphQLModels32GetGrokHomePageOperationResponse8GrokHome_h
#define _TtCC13GraphQLModels32GetGrokHomePageOperationResponse8GrokHome_h
@import Foundation;

@class GraphQLModels.Enumeration GraphQLScalars.GrokMode ?, GraphQLModels.GetGrokHomePageOperationResponse.GrokHome.GrokPersonality ?, GraphQLModels.GetGrokHomePageOperationResponse.GrokHome.Layout ?, _$sSSSg, _$sSa -> GraphQLModels.Enumeration GraphQLScalars.GrokAccessIneligibleReason _$sGGSg ->, _$sSa -> GraphQLModels.GetGrokHomePageOperationResponse.GrokHome.GrokModelOptions ?, _$sSa -> GraphQLModels.GetGrokHomePageOperationResponse.GrokHome.Prompts ?, _$sSbSg, _TtCs12_SwiftObject;

@interface GraphQLModels.GetGrokHomePageOperationResponse.GrokHome : Swift._SwiftObject { // (Swift)
    /* instance variables */
    GraphQLModels.Enumeration GraphQLScalars.GrokMode ? defaultGrokMode;
    Swift.String? defaultGrokModelOptionId;
    Swift.Bool? eligibleForGrok;
    Swift.Bool? freeAccessEnabled;
    Swift.Array -> GraphQLModels.GetGrokHomePageOperationResponse.GrokHome.GrokModelOptions ? grokModelOptions;
    GraphQLModels.GetGrokHomePageOperationResponse.GrokHome.GrokPersonality ? grokPersonality;
    Swift.String? grokVersion;
    Swift.Array -> GraphQLModels.Enumeration GraphQLScalars.GrokAccessIneligibleReason _$sGGSg -> ineligibleReasons;
    GraphQLModels.GetGrokHomePageOperationResponse.GrokHome.Layout ? layout;
    Swift.Array -> GraphQLModels.GetGrokHomePageOperationResponse.GrokHome.Prompts ? prompts;
}

@end

#endif /* _TtCC13GraphQLModels32GetGrokHomePageOperationResponse8GrokHome_h */
