//
#ifndef _TtC14XSportsGraphQL15NHLPlayFragment_h
#define _TtC14XSportsGraphQL15NHLPlayFragment_h
@import Foundation;

@class Swift.Bool, XSportsGraphQL.NHLPlayFragment.Player ?, XSportsGraphQL.NHLPlayFragment.Team ?, _$s14GraphQLScalars13NumericStringVMn, _$s14GraphQLScalars13NumericStringVMn ?, _$sSS, _$sSSSg, _$sSa -> XSportsGraphQL.NHLPlayFragment.Participants, _$ss5Int32VMn ?, _TtCs12_SwiftObject;

@interface XSportsGraphQL.NHLPlayFragment : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for Swift.Int32 ? awayGoals;
    Swift.String? clock;
    nominal type descriptor for Swift.Int32 ? coordX;
    nominal type descriptor for Swift.Int32 ? coordY;
    Swift.String? description;
    nominal type descriptor for Swift.Int32 ? homeGoals;
    Swift.String id;
    Swift.String kind;
    Swift.Array -> XSportsGraphQL.NHLPlayFragment.Participants participants;
    XSportsGraphQL.NHLPlayFragment.Player ? player;
    Swift.String? reason;
    Swift.Bool scoring;
    nominal type descriptor for GraphQLScalars.NumericString sequence;
    Swift.String? stoppageType;
    Swift.String? strength;
    XSportsGraphQL.NHLPlayFragment.Team ? team;
    nominal type descriptor for GraphQLScalars.NumericString ? videoPostId;
}

@end

#endif /* _TtC14XSportsGraphQL15NHLPlayFragment_h */
