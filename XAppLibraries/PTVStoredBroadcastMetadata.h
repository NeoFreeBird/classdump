//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVStoredBroadcastMetadata_h
#define PTVStoredBroadcastMetadata_h
@import Foundation;

@class NSArray, NSDate, NSNumber, NSObject, NSString;

@interface PTVStoredBroadcastMetadata : NSObject

@property (retain, nonatomic) NSString *broadcastID;
@property (retain, nonatomic) NSDate *broadcastDate;
@property (copy, nonatomic) NSArray *viewerCountData;
@property (retain, nonatomic) NSNumber *numChatCommentsReceived;

/* class methods */
+ (id)LoadChatOccupancyMetricsForBroadcastWithID:(id)id;
+ (void)DeleteBroadcastOccupancyDataForBroadcastWithID:(id)id;
+ (void)DeleteBroadcastOccupancyDataIfNeeded;

/* instance methods */
- (id)initWithBroadcastID:(id)id dictionary:(id)dictionary;
- (id)dictionaryForStoring;
- (void)saveChatOccupancyMetrics;

@end

#endif /* PTVStoredBroadcastMetadata_h */
