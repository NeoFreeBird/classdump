//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVUserHistoryBroadcasts_h
#define PTVUserHistoryBroadcasts_h
@import Foundation;

@class NSArray, NSMutableArray, NSObject, NSString;

@interface PTVUserHistoryBroadcasts : NSObject

@property (readonly, nonatomic) NSString *cursor;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) NSArray *liveBroadcasts;
@property (readonly, nonatomic) NSArray *offlineBroadcasts;

/* class methods */
+ (id)userHistoryBroadcastsFromObject:(id)object;
+ (id)userHistoryBroadcastsFromDictionary:(id)dictionary;
+ (id)userHistoryBroadcastsFromBroadcastValues:(id)values cursor:(id)cursor;

/* instance methods */
- (id)init;
- (id)initWithBroadcasts:(id)broadcasts cursor:(id)cursor;
- (void)setNewOfflineBroadcastsArray:(id)array;
- (void)appendAdditionalBroadcasts:(id)broadcasts;

@end

#endif /* PTVUserHistoryBroadcasts_h */
