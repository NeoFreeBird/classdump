//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC13GraphQLModels30TranslateTweetResponseFragment_h
#define _TtC13GraphQLModels30TranslateTweetResponseFragment_h
@import Foundation;

@class GraphQLModels.EntitySetFragment, _$sSS, _$sSSSg, _TtCs12_SwiftObject;

@interface GraphQLModels.TranslateTweetResponseFragment : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.String destinationLanguage;
    GraphQLModels.EntitySetFragment entities;
    Swift.String? localizedSourceLanguage;
    Swift.String? sourceLanguage;
    Swift.String translation;
    Swift.String? translationSource;
    Swift.String translationState;
}

@end

#endif /* _TtC13GraphQLModels30TranslateTweetResponseFragment_h */
