//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVJanusPollerResponse_h
#define PTVJanusPollerResponse_h
@import Foundation;

@class NSMutableArray, NSObject, NSString;

@interface PTVJanusPollerResponse : NSObject

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) unsigned long long errorCode;
@property (readonly, nonatomic) unsigned long long sessionId;
@property (readonly, nonatomic) unsigned long long senderId;
@property (readonly, nonatomic) NSString *periscopeUserId;
@property (readonly, nonatomic) NSString *transactionId;
@property (readonly, nonatomic) NSString *sdp;
@property (readonly, nonatomic) NSString *pluginName;
@property (readonly, nonatomic) NSString *pluginResult;
@property (readonly, nonatomic) NSString *room;
@property (readonly, nonatomic) unsigned long long unpublishedOrLeavingId;
@property (readonly, nonatomic) NSString *videoRoomState;
@property (readonly, nonatomic) unsigned long long current_bitrate;
@property (readonly, nonatomic) _Bool uplink;
@property (readonly, nonatomic) unsigned long long nacks;
@property (readonly, nonatomic) _Bool receiving;
@property (readonly, nonatomic) _Bool offer;
@property (readonly, nonatomic) NSString *responseDescription;
@property (readonly, nonatomic) unsigned long long userId;
@property (readonly, nonatomic) unsigned long long privateId;
@property (readonly, nonatomic) NSMutableArray *publishers;
@property (readonly, nonatomic) NSString *rawJSON;

/* class methods */
+ (id)responseFromJSONDictionary:(id)jsondictionary;

/* instance methods */
- (void)parseResponse:(id)response;
- (void)parseMediaResponseType:(id)type;
- (void)parseEventResponseType:(id)type;
- (void)parsePluginDataResponse:(id)response;
- (void)parseVideoRoomData:(id)data pluginData:(id)data;
- (void)parseVideoRoomAttachedData:(id)data pluginData:(id)data;
- (void)parseVideoRoomJoinedData:(id)data;
- (id)parseStreamsInPublisherData:(id)data;
- (void)parseVideoRoomEventData:(id)data pluginData:(id)data;
- (void)parseVideoRoomSlowLinkData:(id)data;
- (void)parseVideoRoomDestroyedData:(id)data;
- (void)parseJanusSlowLink:(id)link;
- (_Bool)parseJsepResponse:(id)response;
- (_Bool)isOffer;

@end

#endif /* PTVJanusPollerResponse_h */
