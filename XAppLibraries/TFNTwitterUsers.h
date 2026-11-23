//
#ifndef TFNTwitterUsers_h
#define TFNTwitterUsers_h
@import Foundation;

@class NSArray, NSObject;

@interface TFNTwitterUsers : NSObject

@property (readonly, nonatomic) NSArray *usersArray;

/* instance methods */
- (id)initWithUsersArray:(id)array;

@end

#endif /* TFNTwitterUsers_h */
