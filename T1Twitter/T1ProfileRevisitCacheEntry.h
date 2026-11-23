//
#ifndef T1ProfileRevisitCacheEntry_h
#define T1ProfileRevisitCacheEntry_h
@import Foundation;

#include "T1UserPage.h"

@class NSObject, TPMProfileModules;

@interface T1ProfileRevisitCacheEntry : NSObject

@property (retain, nonatomic) T1UserPage *friendsFollowing;
@property (nonatomic) _Bool hasFriendsFollowing;
@property (retain, nonatomic) TPMProfileModules *profileModules;
@property (nonatomic) _Bool hasProfileModules;

/* instance methods */

@end

#endif /* T1ProfileRevisitCacheEntry_h */
