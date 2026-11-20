//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSProgress_h
#define TFSProgress_h
@import Foundation;

@class NSArray, NSObject;

@interface TFSProgress : NSObject

@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) double progress;
@property (readonly, copy, nonatomic) NSArray *items;

/* instance methods */
- (id)init;
- (id)initWithProgress:(double)progress items:(id)items;

@end

#endif /* TFSProgress_h */
