//
#ifndef TFSTwitterLiveEventPostContext_h
#define TFSTwitterLiveEventPostContext_h
@import Foundation;

@class NSObject, NSString;

@interface TFSTwitterLiveEventPostContext : NSObject // (Swift)

@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *url;
@property (nonatomic, readonly) NSString *imageURL;
@property (nonatomic, readonly) long long hash;

/* instance methods */
- (_Bool)isEqual:(id)equal;
- (id)init;

@end

#endif /* TFSTwitterLiveEventPostContext_h */
