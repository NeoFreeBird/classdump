//
#ifndef TFSTwitterUserPage_h
#define TFSTwitterUserPage_h
@import Foundation;

@class NSArray, NSNumber, NSObject, NSString;

@interface TFSTwitterUserPage : NSObject // (Swift)

@property (nonatomic, readonly) NSArray *users;
@property (nonatomic, readonly) NSNumber *totalCount;
@property (nonatomic, readonly) NSString *nextCursor;
@property (nonatomic, readonly) NSString *previousCursor;
@property (nonatomic, readonly) long long hash;

/* instance methods */
- (_Bool)isEqual:(id)equal;
- (id)init;

@end

#endif /* TFSTwitterUserPage_h */
