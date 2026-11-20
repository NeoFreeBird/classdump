//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterLoginRequests_h
#define TFSTwitterLoginRequests_h
@import Foundation;

@class NSArray, NSObject;

@interface TFSTwitterLoginRequests : NSObject

@property (retain, nonatomic) NSArray *loginRequests;

/* class methods */
+ (id)loginRequestsWithJSONData:(id)jsondata error:(id *)error;
+ (id)loginRequestsFromJSONArray:(id)jsonarray;

/* instance methods */
- (id)initWithLoginRequests:(id)requests;
- (id)init;

@end

#endif /* TFSTwitterLoginRequests_h */
