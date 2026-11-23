//
#ifndef GADOMIDPartner_h
#define GADOMIDPartner_h
@import Foundation;

@class NSObject, NSString;

@interface GADOMIDPartner : NSObject

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *versionString;

/* instance methods */
- (id)initWithName:(id)name versionString:(id)string;
- (id)toJSON;

@end

#endif /* GADOMIDPartner_h */
