//
#ifndef TFSURTDismissInfo_h
#define TFSURTDismissInfo_h
@import Foundation;

@class NSArray, NSObject;

@interface TFSURTDismissInfo : NSObject // (Swift)

@property (nonatomic, readonly) NSArray *callbacks;
@property (nonatomic, readonly) long long hash;

/* instance methods */
- (_Bool)isEqual:(id)equal;
- (id)init;

@end

#endif /* TFSURTDismissInfo_h */
