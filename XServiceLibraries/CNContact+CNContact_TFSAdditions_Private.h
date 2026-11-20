//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef CNContact_CNContact_TFSAdditions_Private_h
#define CNContact_CNContact_TFSAdditions_Private_h
@import Foundation;

@interface CNContact (CNContact_TFSAdditions_Private)

/* instance methods */
- (id)displayName;
- (id)fullName;
- (_Bool)hasFetchedFamilyName;
- (_Bool)hasFetchedGivenName;
- (_Bool)hasFetchedNickname;
- (_Bool)hasFetchedOrganizationName;
- (_Bool)hasFetchedSocialProfiles;

@end

#endif /* CNContact_CNContact_TFSAdditions_Private_h */
