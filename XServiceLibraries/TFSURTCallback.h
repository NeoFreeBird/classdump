//
#ifndef TFSURTCallback_h
#define TFSURTCallback_h
@import Foundation;

@class NSObject, NSString;

@interface TFSURTCallback : NSObject // (Swift)

@property (nonatomic, readonly) NSString *endpoint;
@property (nonatomic, readonly) long long hash;

/* instance methods */
- (_Bool)isEqual:(id)equal;
- (id)init;

@end

#endif /* TFSURTCallback_h */
