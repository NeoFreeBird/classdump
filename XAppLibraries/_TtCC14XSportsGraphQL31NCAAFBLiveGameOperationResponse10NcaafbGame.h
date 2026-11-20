//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtCC14XSportsGraphQL31NCAAFBLiveGameOperationResponse10NcaafbGame_h
#define _TtCC14XSportsGraphQL31NCAAFBLiveGameOperationResponse10NcaafbGame_h
@import Foundation;

@class XSportsGraphQL.NCAAFBGameScoreUpdateFragment ?, XSportsGraphQL.NCAAFBLiveGameOperationResponse.NcaafbGame.GameDetail ?, XSportsGraphQL.NCAAFBLiveGameOperationResponse.NcaafbGame.Stats ?, _$s14GraphQLScalars13NumericStringVMn, _$sSS, _$sSa -> XSportsGraphQL.NCAAFBLiveGameOperationResponse.NcaafbGame.PlayByPlay ?, _TtCs12_SwiftObject;

@interface XSportsGraphQL.NCAAFBLiveGameOperationResponse.NcaafbGame : Swift._SwiftObject { // (Swift)
    /* instance variables */
    XSportsGraphQL.NCAAFBLiveGameOperationResponse.NcaafbGame.GameDetail ? gameDetail;
    Swift.String id;
    Swift.Array -> XSportsGraphQL.NCAAFBLiveGameOperationResponse.NcaafbGame.PlayByPlay ? playByPlay;
    nominal type descriptor for GraphQLScalars.NumericString restId;
    XSportsGraphQL.NCAAFBGameScoreUpdateFragment ? score;
    XSportsGraphQL.NCAAFBLiveGameOperationResponse.NcaafbGame.Stats ? stats;
}

@end

#endif /* _TtCC14XSportsGraphQL31NCAAFBLiveGameOperationResponse10NcaafbGame_h */
