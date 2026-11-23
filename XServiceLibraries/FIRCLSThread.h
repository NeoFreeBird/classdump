//
#ifndef FIRCLSThread_h
#define FIRCLSThread_h
@import Foundation;

@class NSArray, NSObject, NSString;

@interface FIRCLSThread : NSObject

@property (retain) NSString *threadName;
@property _Bool threadBlamed;
@property (retain) NSArray *frames;

/* instance methods */

@end

#endif /* FIRCLSThread_h */
