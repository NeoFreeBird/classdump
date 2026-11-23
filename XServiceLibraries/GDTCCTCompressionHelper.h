//
#ifndef GDTCCTCompressionHelper_h
#define GDTCCTCompressionHelper_h
@import Foundation;

@class NSObject;

@interface GDTCCTCompressionHelper : NSObject

/* class methods */
+ (id)gzippedData:(id)data;
+ (_Bool)isGzipped:(id)gzipped;

@end

#endif /* GDTCCTCompressionHelper_h */
