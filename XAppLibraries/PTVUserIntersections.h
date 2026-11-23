//
#ifndef PTVUserIntersections_h
#define PTVUserIntersections_h
@import Foundation;

@class NSArray, NSNumber, NSObject;

@interface PTVUserIntersections : NSObject

@property (readonly, nonatomic) NSNumber *totalIntersectionsCount;
@property (readonly, nonatomic) NSArray *mostRecentIntersections;
@property (readonly, nonatomic) NSArray *followersWithIntersections;
@property (readonly, nonatomic) _Bool hasLargeFollowerCount;

/* instance methods */
- (id)initWithDictionary:(id)dictionary loggedInUser:(id)user;
- (id)unpackUserList:(id)list loggedInUser:(id)user;
- (id)localizedIntersectionsString;

@end

#endif /* PTVUserIntersections_h */
