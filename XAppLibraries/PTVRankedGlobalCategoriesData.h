//
#ifndef PTVRankedGlobalCategoriesData_h
#define PTVRankedGlobalCategoriesData_h
@import Foundation;

@class NSMutableArray, NSMutableDictionary, NSObject;

@interface PTVRankedGlobalCategoriesData : NSObject {
    /* instance variables */
    NSMutableArray *_categoryKeys;
    NSMutableDictionary *_categoryData;
    NSMutableDictionary *_timezoneData;
    NSMutableDictionary *_northeastCoordinatesData;
    NSMutableDictionary *_southwestCoordinatesData;
    NSMutableDictionary *_categoryTypes;
}

/* instance methods */
- (id)init;
- (void)unpackArray:(id)array blockedUsers:(id)users reportedBroadcasts:(id)broadcasts createdBroadcasts:(id)broadcasts;
- (id)categoryKeys;
- (id)objectForKeyedSubscript:(id)subscript;
- (id)categoryAtIndex:(unsigned long long)index;
- (id)broadcastKeysOfType:(id)type;
- (id)timezoneAtIndex:(unsigned long long)index;
- (id)flattenedData;
- (struct { struct CLLocationCoordinate2D { double x0; double x1; } x0; struct { double x0; double x1; } x1; })coordinateRegionForKey:(id)key;
- (struct { struct CLLocationCoordinate2D { double x0; double x1; } x0; struct { double x0; double x1; } x1; })coordinateRegionAtIndex:(unsigned long long)index;

@end

#endif /* PTVRankedGlobalCategoriesData_h */
