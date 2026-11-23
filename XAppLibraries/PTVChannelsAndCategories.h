//
#ifndef PTVChannelsAndCategories_h
#define PTVChannelsAndCategories_h
@import Foundation;

#include "PTVRankedGlobalCategoriesData.h"

@class NSArray, NSObject;

@interface PTVChannelsAndCategories : NSObject

@property (retain, nonatomic) NSArray *channels;
@property (retain, nonatomic) PTVRankedGlobalCategoriesData *categories;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) NSArray *allBroadcasts;

/* instance methods */

@end

#endif /* PTVChannelsAndCategories_h */
