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
