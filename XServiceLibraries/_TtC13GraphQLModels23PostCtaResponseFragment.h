//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC13GraphQLModels23PostCtaResponseFragment_h
#define _TtC13GraphQLModels23PostCtaResponseFragment_h
@import Foundation;

@class GraphQLModels.Union GraphQLModels.PostCtaResponseFragment.PostCta, _$sSS, _$sSa -> GraphQLModels.Enumeration GraphQLScalars.CtaDisplayLocation, _TtCs12_SwiftObject;

@interface GraphQLModels.PostCtaResponseFragment : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.Array -> GraphQLModels.Enumeration GraphQLScalars.CtaDisplayLocation displayLocations;
    GraphQLModels.Union GraphQLModels.PostCtaResponseFragment.PostCta postCta;
    Swift.String scribeId;
}

@end

#endif /* _TtC13GraphQLModels23PostCtaResponseFragment_h */
