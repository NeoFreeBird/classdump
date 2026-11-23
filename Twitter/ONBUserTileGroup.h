//
#ifndef ONBUserTileGroup_h
#define ONBUserTileGroup_h
@import Foundation;

#include "ONBUserRecommendationGroup.h"

@class NSArray, NSHashTable, NSObject, NSSet;

@interface ONBUserTileGroup : NSObject {
    /* instance variables */
    NSHashTable *_observers;
}

@property (readonly, nonatomic) ONBUserRecommendationGroup *userRecommendationGroup;
@property (readonly, copy, nonatomic) NSArray *viewModels;
@property (copy, nonatomic) NSSet *selectedUserIDs;
@property (nonatomic) _Bool followButtonUIEnabled;

/* instance methods */
- (id)initWithUserRecommendationGroup:(id)group viewModels:(id)models selectedUserIDs:(id)ids followButtonUIEnabled:(_Bool)uienabled;
- (_Bool)isEqual:(id)equal;
- (void)addObserver:(id)observer;
- (void)removeObserver:(id)observer;
- (void)removeAllObservers;

@end

#endif /* ONBUserTileGroup_h */
