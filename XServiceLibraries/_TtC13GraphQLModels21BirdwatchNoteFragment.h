//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC13GraphQLModels21BirdwatchNoteFragment_h
#define _TtC13GraphQLModels21BirdwatchNoteFragment_h
@import Foundation;

@class GraphQLModels.ApiGrokTranslateResponseFragment ?, GraphQLModels.Enumeration GraphQLScalars.BirdwatchNoteRatingStatus ?, GraphQLScalars.NumericString, _$sSSSg, _$sSbSg, _TtCs12_SwiftObject;

@interface GraphQLModels.BirdwatchNoteFragment : Swift._SwiftObject { // (Swift)
    /* instance variables */
    GraphQLModels.ApiGrokTranslateResponseFragment ? grokTranslatedCommunityNoteWithAvailability;
    Swift.Bool? isCommunityNoteTranslatable;
    Swift.Bool? isInAccountLanguage;
    Swift.String? language;
    GraphQLModels.Enumeration GraphQLScalars.BirdwatchNoteRatingStatus ? ratingStatus;
    GraphQLScalars.NumericString restId;
}

@end

#endif /* _TtC13GraphQLModels21BirdwatchNoteFragment_h */
