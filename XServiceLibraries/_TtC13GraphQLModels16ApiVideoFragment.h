//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC13GraphQLModels16ApiVideoFragment_h
#define _TtC13GraphQLModels16ApiVideoFragment_h
@import Foundation;

@class GraphQLModels.ApiImageFragment ?, GraphQLModels.AspectRatioFragment, GraphQLScalars.NumericString ?, _$sSa -> GraphQLModels.VideoVariantFragment, _$sSbSg, _$ss5Int64VMn, _TtCs12_SwiftObject;

@interface GraphQLModels.ApiVideoFragment : Swift._SwiftObject { // (Swift)
    /* instance variables */
    GraphQLModels.AspectRatioFragment aspectRatio;
    nominal type descriptor for Swift.Int64 durationMillis;
    Swift.Bool? embeddable;
    GraphQLModels.ApiImageFragment ? previewImage;
    Swift.Array -> GraphQLModels.VideoVariantFragment variants;
    GraphQLScalars.NumericString ? viewCount;
}

@end

#endif /* _TtC13GraphQLModels16ApiVideoFragment_h */
