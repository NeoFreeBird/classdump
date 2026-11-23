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
