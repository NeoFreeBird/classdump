//
#ifndef _TtC14XSportsGraphQL15NBAPlayFragment_h
#define _TtC14XSportsGraphQL15NBAPlayFragment_h
@import Foundation;

@class Swift.Bool, XSportsGraphQL.NBAPlayFragment.Player ?, XSportsGraphQL.NBAPlayFragment.Team ?, _$s14GraphQLScalars13NumericStringVMn, _$s14GraphQLScalars13NumericStringVMn ?, _$sSS, _$sSSSg, _$sSa -> XSportsGraphQL.NBAPlayFragment.Participants, _$sSbSg, _$ss5Int32VMn ?, _TtCs12_SwiftObject;

@interface XSportsGraphQL.NBAPlayFragment : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for Swift.Int32 ? awayPoints;
    Swift.String? clock;
    nominal type descriptor for Swift.Int32 ? coordX;
    nominal type descriptor for Swift.Int32 ? coordY;
    Swift.String? description;
    nominal type descriptor for Swift.Int32 ? homePoints;
    Swift.String id;
    Swift.String kind;
    Swift.Array -> XSportsGraphQL.NBAPlayFragment.Participants participants;
    XSportsGraphQL.NBAPlayFragment.Player ? player;
    Swift.Bool? rescinded;
    Swift.Bool scoring;
    nominal type descriptor for GraphQLScalars.NumericString sequence;
    Swift.String? shotType;
    XSportsGraphQL.NBAPlayFragment.Team ? team;
    nominal type descriptor for GraphQLScalars.NumericString ? videoPostId;
}

@end

#endif /* _TtC14XSportsGraphQL15NBAPlayFragment_h */
