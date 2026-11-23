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
