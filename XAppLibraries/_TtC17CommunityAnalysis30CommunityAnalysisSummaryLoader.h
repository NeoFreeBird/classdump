//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC17CommunityAnalysis30CommunityAnalysisSummaryLoader_h
#define _TtC17CommunityAnalysis30CommunityAnalysisSummaryLoader_h
@import Foundation;

@class CommunityAnalysis.CommunityAnalysisLoadableViewModel CommunityAnalysis.CommunityAnalysisSummary, CommunityAnalysis.CommunityAnalysisViewerRatingLoad, _$s14GraphQLScalars26BirdwatchRatingSourceInputOMn, _$s20TwitterActionService0bC0CMn, _$sSS, _$sSi, _TtCs12_SwiftObject;

@interface CommunityAnalysis.CommunityAnalysisSummaryLoader : Swift._SwiftObject { // (Swift)
    /* instance variables */
    CommunityAnalysis.CommunityAnalysisLoadableViewModel CommunityAnalysis.CommunityAnalysisSummary viewModel;
    Swift.String accountID;
    Swift.String postID;
    nominal type descriptor for GraphQLScalars.BirdwatchRatingSourceInput ratingSource;
    nominal type descriptor for TwitterActionService.ActionService actionService;
    nominal type descriptor for Foundation.URL function type (escaping) openURL;
    CommunityAnalysis.CommunityAnalysisViewerRatingLoad viewerRatingLoad;
    Swift.Int saveCount;
    Swift.Int viewerLoadCount;
}

@end

#endif /* _TtC17CommunityAnalysis30CommunityAnalysisSummaryLoader_h */
