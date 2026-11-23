//
#ifndef T1PeopleDiscoveryUserRecommendationProfileViewModel_h
#define T1PeopleDiscoveryUserRecommendationProfileViewModel_h
@import Foundation;

#include "T1ProfileUserViewModel.h"

@interface T1PeopleDiscoveryUserRecommendationProfileViewModel : T1ProfileUserViewModel { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *userRecommendation;
}

/* instance methods */
- (id)initWithUserRecommendation:(id)recommendation viewerAccount:(id)account;
- (_Bool)isEqual:(id)equal;
- (id)initWithUserDataSource:(id)source context:(id)context viewerAccount:(id)account displayOptions:(long long)options;

@end

#endif /* T1PeopleDiscoveryUserRecommendationProfileViewModel_h */
