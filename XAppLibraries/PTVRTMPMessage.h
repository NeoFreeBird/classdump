//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVRTMPMessage_h
#define PTVRTMPMessage_h
@import Foundation;

@class NSArray, NSData, NSObject;

@interface PTVRTMPMessage : NSObject

@property (readonly) int csid;
@property int streamID;
@property int messageType;
@property double time;
@property (retain) NSArray *fields;
@property (retain) NSData *body;

/* class methods */
+ (id)create:(int)create csid:(int)csid stream:(int)stream;

/* instance methods */
- (id)initForCSID:(int)csid;
- (id)description;

@end

#endif /* PTVRTMPMessage_h */
