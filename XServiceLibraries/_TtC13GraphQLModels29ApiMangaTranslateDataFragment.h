//
#ifndef _TtC13GraphQLModels29ApiMangaTranslateDataFragment_h
#define _TtC13GraphQLModels29ApiMangaTranslateDataFragment_h
@import Foundation;

@class GraphQLScalars.NumericString, _$sSS, _$sSSSg, _$sSa -> GraphQLModels.ApiMangaTextElementFragment ?, _$ss5Int64VMn ?, _TtCs12_SwiftObject;

@interface GraphQLModels.ApiMangaTranslateDataFragment : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for Swift.Int64 ? createdAtMs;
    Swift.String destinationLanguage;
    GraphQLScalars.NumericString mediaId;
    Swift.String? sourceLanguage;
    Swift.Array -> GraphQLModels.ApiMangaTextElementFragment ? textElements;
    Swift.String translatedImageUrl;
}

@end

#endif /* _TtC13GraphQLModels29ApiMangaTranslateDataFragment_h */
