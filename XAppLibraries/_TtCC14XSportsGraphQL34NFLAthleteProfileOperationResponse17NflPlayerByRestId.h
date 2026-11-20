//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtCC14XSportsGraphQL34NFLAthleteProfileOperationResponse17NflPlayerByRestId_h
#define _TtCC14XSportsGraphQL34NFLAthleteProfileOperationResponse17NflPlayerByRestId_h
@import Foundation;

@class XSportsGraphQL.NFLAthleteProfileOperationResponse.NflPlayerByRestId.PlayerInformation ?, XSportsGraphQL.NFLAthleteSeasonStatsFragment ?, _$s14GraphQLScalars13NumericStringVMn, _$sSS, _TtCs12_SwiftObject;

@interface XSportsGraphQL.NFLAthleteProfileOperationResponse.NflPlayerByRestId : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.String id;
    XSportsGraphQL.NFLAthleteProfileOperationResponse.NflPlayerByRestId.PlayerInformation ? playerInformation;
    XSportsGraphQL.NFLAthleteSeasonStatsFragment ? priorSeason1;
    XSportsGraphQL.NFLAthleteSeasonStatsFragment ? priorSeason2;
    XSportsGraphQL.NFLAthleteSeasonStatsFragment ? priorSeason3;
    nominal type descriptor for GraphQLScalars.NumericString restId;
    XSportsGraphQL.NFLAthleteSeasonStatsFragment ? seasonStats;
}

@end

#endif /* _TtCC14XSportsGraphQL34NFLAthleteProfileOperationResponse17NflPlayerByRestId_h */
