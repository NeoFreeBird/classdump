//
#ifndef GDTCORStorageEventSelector_h
#define GDTCORStorageEventSelector_h
@import Foundation;

@class NSObject, NSSet;

@interface GDTCORStorageEventSelector : NSObject

@property (readonly, nonatomic) long long selectedTarget;
@property (readonly, nonatomic) NSSet *selectedEventIDs;
@property (readonly, nonatomic) NSSet *selectedMappingIDs;
@property (readonly, nonatomic) NSSet *selectedQosTiers;

/* class methods */
+ (id)eventSelectorForTarget:(long long)target;

/* instance methods */
- (id)initWithTarget:(long long)target eventIDs:(id)ids mappingIDs:(id)ids qosTiers:(id)tiers;

@end

#endif /* GDTCORStorageEventSelector_h */
