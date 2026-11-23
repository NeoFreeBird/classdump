//
#ifndef T1UserPage_h
#define T1UserPage_h
@import Foundation;

@class NSArray, NSNumber, NSObject, NSString;

@interface T1UserPage : NSObject

@property (readonly, copy, nonatomic) NSNumber *totalCount;
@property (readonly, copy, nonatomic) NSString *nextCursor;
@property (readonly, copy, nonatomic) NSString *previousCursor;
@property (readonly, copy, nonatomic) NSArray *users;

/* instance methods */
- (id)initWithUsers:(id)users totalCount:(id)count nextCursor:(id)cursor previousCursor:(id)cursor;
- (id)init;

@end

#endif /* T1UserPage_h */
