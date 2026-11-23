//
#ifndef _TtC14XSportsGraphQL19NFLGamePlayFragment_h
#define _TtC14XSportsGraphQL19NFLGamePlayFragment_h
@import Foundation;

@class XSportsGraphQL.NFLGamePlayFragment.EndSituation ?, XSportsGraphQL.NFLGamePlayFragment.OnFieldStatus ?, XSportsGraphQL.NFLGamePlayFragment.Score ?, XSportsGraphQL.NFLGamePlayFragment.StartSituation ?, _$s13GraphQLModels11EnumerationOMn _$s14GraphQLScalars16FootballPlayTypeOMn, _$s14GraphQLScalars13NumericStringVMn, _$s14GraphQLScalars13NumericStringVMn ?, _$sSS, _$sSSSg, _$sSa -> XSportsGraphQL.NFLGamePlayFragment.Details, _$sSbSg, _TtCs12_SwiftObject;

@interface XSportsGraphQL.NFLGamePlayFragment : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.String clock;
    Swift.String? description;
    Swift.Array -> XSportsGraphQL.NFLGamePlayFragment.Details details;
    XSportsGraphQL.NFLGamePlayFragment.EndSituation ? endSituation;
    Swift.String id;
    XSportsGraphQL.NFLGamePlayFragment.OnFieldStatus ? onFieldStatus;
    Swift.String? playDirection;
    nominal type descriptor for GraphQLModels.Enumeration nominal type descriptor for GraphQLScalars.FootballPlayType playType;
    Swift.String? postHandle;
    nominal type descriptor for GraphQLScalars.NumericString ? postId;
    XSportsGraphQL.NFLGamePlayFragment.Score ? score;
    Swift.Bool? scoringPlay;
    nominal type descriptor for GraphQLScalars.NumericString sequence;
    XSportsGraphQL.NFLGamePlayFragment.StartSituation ? startSituation;
    nominal type descriptor for GraphQLScalars.NumericString ? videoPostId;
    nominal type descriptor for GraphQLScalars.NumericString ? videoReplyPostId;
    Swift.String? wallClock;
}

@end

#endif /* _TtC14XSportsGraphQL19NFLGamePlayFragment_h */
