//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef LHLSUDPPacket_h
#define LHLSUDPPacket_h
@import Foundation;

@class NSData, NSObject;

@interface LHLSUDPPacket : NSObject

@property (retain, nonatomic) NSData *data;
@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) NSData *address;

/* instance methods */

@end

#endif /* LHLSUDPPacket_h */
