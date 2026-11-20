//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef FIRCLSCodeMapping_h
#define FIRCLSCodeMapping_h
@import Foundation;

@class NSObject, NSString, NSURL;

@interface FIRCLSCodeMapping : NSObject

@property (readonly, copy, nonatomic) NSURL *URL;
@property (nonatomic) int source;
@property (readonly, copy, nonatomic) NSString *sourceName;

/* class methods */
+ (id)mappingWithURL:(id)url;

/* instance methods */
- (id)initWithURL:(id)url;

@end

#endif /* FIRCLSCodeMapping_h */
