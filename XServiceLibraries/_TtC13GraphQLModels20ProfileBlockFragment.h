//
#ifndef _TtC13GraphQLModels20ProfileBlockFragment_h
#define _TtC13GraphQLModels20ProfileBlockFragment_h
@import Foundation;

@class GraphQLModels.Enumeration GraphQLScalars.ProfileBlockSurface, GraphQLModels.Enumeration GraphQLScalars.ProfileBlockType, GraphQLModels.Union GraphQLModels.ProfileBlockRichtextDataFragment ?, GraphQLScalars.NumericString, _TtCs12_SwiftObject;

@interface GraphQLModels.ProfileBlockFragment : Swift._SwiftObject { // (Swift)
    /* instance variables */
    GraphQLScalars.NumericString blockId;
    GraphQLModels.Enumeration GraphQLScalars.ProfileBlockType blockType;
    GraphQLModels.Union GraphQLModels.ProfileBlockRichtextDataFragment ? data;
    GraphQLModels.Enumeration GraphQLScalars.ProfileBlockSurface surface;
}

@end

#endif /* _TtC13GraphQLModels20ProfileBlockFragment_h */
