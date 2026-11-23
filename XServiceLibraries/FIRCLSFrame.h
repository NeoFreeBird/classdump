//
#ifndef FIRCLSFrame_h
#define FIRCLSFrame_h
@import Foundation;

@class NSObject, NSString, NSUUID;

@interface FIRCLSFrame : NSObject

@property long long address;
@property long long sampleCount;
@property long long offsetIntoBinaryTextSegment;
@property (retain) NSString *binaryName;
@property (retain) NSUUID *binaryUUID;

/* instance methods */

@end

#endif /* FIRCLSFrame_h */
