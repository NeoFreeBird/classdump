//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef OCFUserIdentifierCollection_h
#define OCFUserIdentifierCollection_h
@import Foundation;

@class NSObject, NSString;

@interface OCFUserIdentifierCollection : NSObject

@property (readonly, nonatomic) NSString *fullName;
@property (readonly, nonatomic) NSString *email;
@property (readonly, nonatomic) NSString *username;
@property (readonly, nonatomic) NSString *phoneNumber;

/* instance methods */
- (id)initWithFullName:(id)name email:(id)email username:(id)username phoneNumber:(id)number;
- (id)userIdentifierForType:(long long)type;

@end

#endif /* OCFUserIdentifierCollection_h */
