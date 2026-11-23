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
