//
#ifndef TNUHARObject_h
#define TNUHARObject_h
@import Foundation;

@class NSObject, NSString;

@interface TNUHARObject : NSObject

@property (copy, nonatomic) NSString *comment;

/* instance methods */
- (id)JSONDictionary;
- (id)mutableJSONDictionary;

@end

#endif /* TNUHARObject_h */
