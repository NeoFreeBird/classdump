//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterAPIRequestSourceInfo_h
#define TFSTwitterAPIRequestSourceInfo_h
@import Foundation;

@class NSObject;

@interface TFSTwitterAPIRequestSourceInfo : NSObject

@property (readonly, nonatomic) long long accountState;
@property (readonly, nonatomic) _Bool polling;

/* class methods */
+ (id)testSourceInfoWithPolling:(_Bool)polling;

/* instance methods */
- (id)initWithAccountState:(long long)state polling:(_Bool)polling;
- (id)init;

@end

#endif /* TFSTwitterAPIRequestSourceInfo_h */
