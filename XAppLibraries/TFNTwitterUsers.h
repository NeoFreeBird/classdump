//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
