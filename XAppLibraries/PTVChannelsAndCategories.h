//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
