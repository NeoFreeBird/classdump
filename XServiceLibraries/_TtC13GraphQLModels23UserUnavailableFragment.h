//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC13GraphQLModels23UserUnavailableFragment_h
#define _TtC13GraphQLModels23UserUnavailableFragment_h
@import Foundation;

@class GraphQLModels.Enumeration GraphQLScalars.UserUnavailableReason, GraphQLModels.TimelineRichTextLiteFragment ?, _$sSSSg, _TtCs12_SwiftObject;

@interface GraphQLModels.UserUnavailableFragment : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.String? message;
    GraphQLModels.TimelineRichTextLiteFragment ? unavailableHeader;
    GraphQLModels.TimelineRichTextLiteFragment ? unavailableMessage;
    GraphQLModels.Enumeration GraphQLScalars.UserUnavailableReason unavailableReason;
}

@end

#endif /* _TtC13GraphQLModels23UserUnavailableFragment_h */
