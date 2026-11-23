//
#ifndef _TtC13GraphQLModels22FinanceSessionFragment_h
#define _TtC13GraphQLModels22FinanceSessionFragment_h
@import Foundation;

@class GraphQLModels.Enumeration GraphQLScalars.FinanceSessionType, GraphQLScalars.NumericString, _TtCs12_SwiftObject;

@interface GraphQLModels.FinanceSessionFragment : Swift._SwiftObject { // (Swift)
    /* instance variables */
    GraphQLScalars.NumericString endTimestampMs;
    GraphQLModels.Enumeration GraphQLScalars.FinanceSessionType sessionType;
    GraphQLScalars.NumericString startTimestampMs;
}

@end

#endif /* _TtC13GraphQLModels22FinanceSessionFragment_h */
