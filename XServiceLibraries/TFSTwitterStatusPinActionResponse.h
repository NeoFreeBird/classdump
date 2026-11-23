//
#ifndef TFSTwitterStatusPinActionResponse_h
#define TFSTwitterStatusPinActionResponse_h
@import Foundation;

@class NSObject, NSString;

@interface TFSTwitterStatusPinActionResponse : NSObject // (Swift)

@property (nonatomic, readonly) _Bool addedTweetToHighlights;
@property (nonatomic, readonly) _Bool success;
@property (nonatomic, readonly) NSString *message;

/* instance methods */
- (id)init;

@end

#endif /* TFSTwitterStatusPinActionResponse_h */
