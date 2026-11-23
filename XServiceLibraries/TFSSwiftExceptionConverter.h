//
#ifndef TFSSwiftExceptionConverter_h
#define TFSSwiftExceptionConverter_h
@import Foundation;

@class NSObject;

@interface TFSSwiftExceptionConverter : NSObject

/* class methods */
+ (_Bool)tryBlock:(id /* block */)block error:(id *)error;

@end

#endif /* TFSSwiftExceptionConverter_h */
