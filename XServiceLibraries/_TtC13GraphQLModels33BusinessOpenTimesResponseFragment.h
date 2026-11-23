//
#ifndef _TtC13GraphQLModels33BusinessOpenTimesResponseFragment_h
#define _TtC13GraphQLModels33BusinessOpenTimesResponseFragment_h
@import Foundation;

@class GraphQLModels.Enumeration GraphQLScalars.BusinessOpenTimesType ?, GraphQLModels.OpenCloseTimeNextFragment ?, _$sSa -> GraphQLModels.BusinessOpenTimesRegularFragment ?, _$sSbSg, _TtCs12_SwiftObject;

@interface GraphQLModels.BusinessOpenTimesResponseFragment : Swift._SwiftObject { // (Swift)
    /* instance variables */
    GraphQLModels.OpenCloseTimeNextFragment ? closes;
    Swift.Bool? isOpen;
    GraphQLModels.Enumeration GraphQLScalars.BusinessOpenTimesType ? openTimesType;
    GraphQLModels.OpenCloseTimeNextFragment ? opens;
    Swift.Array -> GraphQLModels.BusinessOpenTimesRegularFragment ? regular;
}

@end

#endif /* _TtC13GraphQLModels33BusinessOpenTimesResponseFragment_h */
